E_MODEL_REV_RAMP = smlua_model_util_get_id("pacramp_geo")
COL_REV_RAMP = smlua_collision_util_get("pacramp_collision")

---@param o Object
local function bhv_rev_ramp_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oGravity = 1
    o.oFriction = 0
    o.collisionData = COL_REV_RAMP
    o.oBuoyancy = 10
end

---@param o Object
local function bhv_rev_ramp_loop(o)
    object_step_without_floor_orient()
    load_object_collision_model()
end

id_bhvRevRamp = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_rev_ramp_init, bhv_rev_ramp_loop, "bhvRevRamp")

local revRampPlacements = {
    ["sm64"] = {
        [LEVEL_CASTLE_GROUNDS] = {
            [1] = {
                {x = 0, y = 1000, z = 0, pitch = 0x1000, yaw = 0x8000}, -- Testing
                {x = -4400, y = -500, z = -1200, pitch = 0x3000, yaw = -0x28C8}, -- Testing
            },
        },
        [LEVEL_BBH] = {
            [1] = {
                {x = 3133, y = 1024, z = 126, pitch = 0x3000, yaw = -0x4000}, -- Third Floor Access
            },
        },
        [LEVEL_HMC] = {
            [1] = {
                {x = -6330, y = 1800, z = 3806, pitch = 0x1000, yaw = 0x8000}, -- Left Route Gap
                {x = -6200, y = 1850, z = -7550, pitch = 0x3000, yaw = 0x3000}, -- Watch for Rolling Rocks
            },
        },
        [LEVEL_CCM] = {
            [1] = {
                {x = 310, y = -3100, z = -2750, pitch = 0x3000, yaw = -0x300}, -- Wall Kicks will work
            },
        },
        [LEVEL_THI] = {
            [3] = {
                {x = -1950, y = 1030, z = 100, pitch = 0x1A00, yaw = 0x8000}, -- Cave Red Coin
            },
        },
    }
}

---@param o Object
local function bhv_warp_sparkle_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    local angle = random_float() * 0x3800;
    local radius = math.sqrt(random_float()) * 200;

    o.oVelX = coss(angle) * radius;
    o.oVelY = sins(angle) * radius;
    o.oVelZ = random_float()*0x10000
end

---@param o Object
local function bhv_warp_sparkle_loop(o)
    local m = nearest_mario_state_to_object(o)
    o.oDistanceToMario = math.lerp(o.oDistanceToMario, vec3f_dist(m.pos, {x = o.oHomeX, y = o.oHomeY, z = o.oHomeZ}), 0.1)
    local agression = 1000/o.oDistanceToMario
    local angle = get_global_timer()*0x600 + o.oVelZ

    o.oPosX = o.oHomeX + sins(angle)*o.oVelX*agression
    o.oPosY = o.oHomeY + o.oVelY*agression
    o.oPosZ = o.oHomeZ + coss(angle)*o.oVelX*agression

    o.oOpacity = 0.5

    obj_set_billboard(o)
end

id_bhvWarpSparkle = hook_behavior(nil, OBJ_LIST_UNIMPORTANT, true, bhv_warp_sparkle_init, bhv_warp_sparkle_loop, "bhvWarpSparkle")

local function on_sync()
    -- Spawn Warp Sparkles
    local o = obj_get_first_with_behavior_id(id_bhvFadingWarp)
    while o ~= nil do
        for i = 1, 50 do
            spawn_non_sync_object(id_bhvWarpSparkle, E_MODEL_SPARKLES, o.oPosX, o.oPosY, o.oPosZ, function(oSparkle)
                oSparkle.oHomeX = o.oPosX
                oSparkle.oHomeY = o.oPosY
                oSparkle.oHomeZ = o.oPosZ
                oSparkle.parentObj = o
            end)
        end
        o = obj_get_next_with_same_behavior_id(o)
    end
    

    local np = gNetworkPlayers[0]
    if revRampPlacements[ROMHACK] then -- Spawn Manual Rev Ramps
        if not revRampPlacements[ROMHACK][np.currLevelNum] then return end
        if not revRampPlacements[ROMHACK][np.currLevelNum][np.currAreaIndex] then return end
        local ramps = revRampPlacements[ROMHACK][np.currLevelNum][np.currAreaIndex]
        for i = 1, #ramps do
            local currRamp = ramps[i]
            log_to_console(tostring(currRamp))
            spawn_non_sync_object(id_bhvRevRamp, E_MODEL_REV_RAMP, currRamp.x, currRamp.y, currRamp.z, function (o)
                o.oFaceAngleYaw = currRamp.yaw
                o.oFaceAnglePitch = -currRamp.pitch
            end)
        end
    else -- Spawn Automatic ones
        
    end
end

hook_event(HOOK_ON_SYNC_VALID, on_sync)


local function spawn_warp_sparkles()
end

hook_event(HOOK_UPDATE, spawn_warp_sparkles)

-- Bumpable Metal Boxes

local function bhv_pushable_init(o)
    network_init_object(o, false, {
        "oAction",
        "oMoveAngleYaw",
        "oForwardVel",
    })
    o.oAction = 0
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.collisionData = gGlobalObjectCollisionData.metal_box_seg8_collision_08024C28
    o.oCollisionDistance = 500
end

---@param o Object
local function bhv_new_pushable_loop(o)
    local marioState = nearest_mario_state_to_object(o);
    local player = marioState and marioState.marioObj or nil;

    load_object_collision_model()

    if o.oAction == 1 then
        o.oForwardVel = o.oForwardVel - 2.5
        if o.oForwardVel < 1 or check_if_moving_over_floor(o.oForwardVel, 150.0) == 0 then
            djui_chat_message_create("bonk")
            o.oForwardVel = 0
            o.oAction = 0
        else
            cur_obj_play_sound_2(SOUND_ENV_SLIDING);
        end

        local boxWidth = 140

        local sp24 = spawn_non_sync_object(id_bhvSmoke, E_MODEL_SMOKE, o.oPosX, o.oPosY, o.oPosZ, function (oSmoke)
            local angle = (o.oMoveAngleYaw + 0x8000) + 0x2000 * random_float() - 0x1000
            oSmoke.oPosX = oSmoke.oPosX + sins(o.oMoveAngleYaw + 0x8000)*boxWidth + sins(o.oMoveAngleYaw + 0x4000)*(boxWidth*random_float() - boxWidth*0.5)
            oSmoke.oPosZ = oSmoke.oPosZ + coss(o.oMoveAngleYaw + 0x8000)*boxWidth + coss(o.oMoveAngleYaw + 0x4000)*(boxWidth*random_float() - boxWidth*0.5)
            oSmoke.oMoveAngleYaw = angle
            oSmoke.oForwardVel = 5
            oSmoke.oVelY = random_float()*5
        end);

        cur_obj_move_using_fvel_and_gravity()
    else
        if marioState and marioState.action == ACT_PAC_REV_ROLL then
            if obj_check_if_collided_with_object(o, player) ~= 0 then
                o.oMoveAngleYaw = math.round(math.s16(atan2s(o.oPosZ - marioState.pos.z, o.oPosX - marioState.pos.x))/0x4000)*0x4000
                o.oForwardVel = marioState.forwardVel*0.5
                o.oAction = 1
                network_send_object(o, false)
                pac_bump_away_from_obj(marioState, o, 30)
            end
        else
            bhv_pushable_loop()
        end
    end
end

hook_behavior(id_bhvPushableMetalBox, OBJ_LIST_SURFACE, true, bhv_pushable_init, bhv_new_pushable_loop)
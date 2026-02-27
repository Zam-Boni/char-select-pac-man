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

local stopSurfaces = {
    [SURFACE_DEATH_PLANE] = true,
    [SURFACE_BURNING] = true,
    [SURFACE_INSTANT_QUICKSAND] = true,
}

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
    clear_ray_visuals()
    local rate = 40
        for x = -rate, rate do
            local reach = 0x4000/rate
            local posX = x * reach
            for z = -rate, rate do
                local posZ = z * reach
                local ray = collision_find_surface_on_ray(posX, 0x4000, posZ, 0, -0x8000, 0)
                clear_last_ray_visual()
                while (ray ~= nil and ray.surface ~= nil and not stopSurfaces[ray.surface.type] and (gMarioStates[0].waterLevel == nil or ray.hitPos.y > gMarioStates[0].waterLevel)) do
                    -- Search for walls
                    local posY = ray.hitPos.y
                    if gMarioStates[0].waterLevel ~= nil and posY + 140 < gMarioStates[0].waterLevel then
                        break
                    end
                    for i = 0, 2 do
                        local angle = i*0x2000
                        ray_set_color(127, 255, 127)

                        for h = 0, 1 do
                            local wallA = collision_find_surface_on_ray(posX, posY + 50 + 800*h, posZ, math.min(sins(angle)*reach*2, reach), 0, math.min(coss(angle)*reach*2, reach))
                            if wallA and wallA.surface and math.abs(wallA.surface.normal.y) < 0.1 then
                                -- Check for reflection
                                local lastAngle = atan2s(wallA.surface.normal.z, wallA.surface.normal.x)
                                local lastPos = {x = wallA.hitPos.x, y = wallA.hitPos.y, z = wallA.hitPos.z}
                                local betweenWalls = {
                                    x = lastPos.x,
                                    y = lastPos.y,
                                    z = lastPos.z,
                                }
                                ray_set_color(127, 127, 255)
                                local wallB = collision_find_surface_on_ray(lastPos.x + sins(lastAngle)*10, lastPos.y, lastPos.z + coss(lastAngle)*10, sins(lastAngle)*reach*2, 0, coss(lastAngle)*reach*2)
                                if wallB and wallB.surface and math.abs(wallB.surface.normal.y) < 0.1 then
                                    lastAngle = atan2s(wallB.surface.normal.z, wallB.surface.normal.x) + 0x8000
                                    lastPos = {x = wallB.hitPos.x, y = wallB.hitPos.y, z = wallB.hitPos.z}
                                    betweenWalls = {
                                        x = (betweenWalls.x + lastPos.x)*0.5,
                                        y = (betweenWalls.y + lastPos.y)*0.5,
                                        z = (betweenWalls.z + lastPos.z)*0.5,
                                    }

                                    local limit = 10
                                    while wallB and wallB.surface and math.abs(wallB.surface.normal.y) < 0.1 --[[and (math.abs(wallB.surface.normal.y - (lastAngle - 0x8000)) < 0x1000)]] do
                                        lastPos = {x = wallB.hitPos.x, y = wallB.hitPos.y, z = wallB.hitPos.z}
                                        lastAngle = atan2s(wallB.surface.normal.z, wallB.surface.normal.x) - math.s16(lastAngle - atan2s(wallB.surface.normal.z, wallB.surface.normal.x)) + 0x8000
                                        limit = limit - 1
                                        wallB = collision_find_surface_on_ray(lastPos.x + sins(lastAngle)*10, lastPos.y, lastPos.z + coss(lastAngle)*10, sins(lastAngle)*reach*2, 200, coss(lastAngle)*reach*2)
                                    end
                                    lastPos = {x = wallB.hitPos.x, y = wallB.hitPos.y, z = wallB.hitPos.z}

                                    ray_set_color(255, 127, 127)
                                    upperFloor = collision_find_surface_on_ray(lastPos.x, lastPos.y, lastPos.z, 0, -300, 0)

                                    if upperFloor and upperFloor.surface then
                                        local height = upperFloor.hitPos.y - posY
                                        if height > 600 then
                                            -- Align with back wall if possible
                                            ray_set_color(255, 255, 0)
                                            local wallC = collision_find_surface_on_ray(betweenWalls.x + sins(lastAngle)*10, posY + 100, betweenWalls.z + coss(lastAngle)*10, sins(lastAngle + 0x4000)*reach*2, 0, coss(lastAngle + 0x4000)*reach*2)
                                            local wallAngleC = nil
                                            local rampPos = {
                                                x = betweenWalls.x,
                                                y = posY,
                                                z = betweenWalls.z,
                                            }
                                            if wallC and wallC.surface and math.abs(wallC.surface.normal.y) < 0.1 then
                                                wallAngleC = atan2s(wallC.surface.normal.z, wallC.surface.normal.x)
                                                vec3f_copy(rampPos, wallC.hitPos)
                                            else
                                                wallC = collision_find_surface_on_ray(betweenWalls.x + sins(lastAngle)*10, posY + 100, betweenWalls.z + coss(lastAngle)*10, sins(lastAngle - 0x4000)*reach*2, 0, coss(lastAngle - 0x4000)*reach*2)
                                                if wallC and wallC.surface and math.abs(wallC.surface.normal.y) < 0.1 then
                                                    wallAngleC = atan2s(wallC.surface.normal.z, wallC.surface.normal.x)
                                                    vec3f_copy(rampPos, wallC.hitPos)
                                                end
                                            end
                                            
                                            if wallAngleC ~= nil then
                                                local o = obj_get_first_with_behavior_id(id_bhvRevRamp)
                                                while o ~= nil do
                                                    djui_chat_message_create(tostring(vec3f_dist(rampPos, {x = o.oPosX, y = rampPos.y, z = o.oPosZ})))
                                                    if vec3f_dist(rampPos, {x = o.oPosX, y = rampPos.y, z = o.oPosZ}) < 300 then
                                                        return
                                                    end
                                                    o = obj_get_next_with_same_behavior_id(o)
                                                end

                                                djui_chat_message_create("holy shit")
                                                
                                                spawn_non_sync_object(id_bhvRevRamp, E_MODEL_REV_RAMP, rampPos.x + sins(wallAngleC)*120, rampPos.y, rampPos.z + coss(wallAngleC)*120, function (o)
                                                    o.oFaceAngleYaw = wallAngleC + 0x8000
                                                    o.oFaceAnglePitch = -0x3000
                                                end)
                                            end
                                            break
                                        end
                                    end
                                end
                            end
                        end
                    end

                    -- Get Next Floor
                    ray_set_color(255, 255, 255)
                    ray = collision_find_surface_on_ray(posX, posY - 100, posZ, 0, -0x8000, 0)
                    clear_last_ray_visual()
                    --clear_last_ray_visual()
                end
            end
        end
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
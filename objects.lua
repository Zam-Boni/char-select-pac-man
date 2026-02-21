local E_MODEL_REV_RAMP = smlua_model_util_get_id("pacramp_geo")
local COL_REV_RAMP = smlua_collision_util_get("pacramp_collision")

---@param o Object
local function bhv_rev_ramp_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oGravity = 1
    o.collisionData = COL_REV_RAMP
end

---@param o Object
local function bhv_rev_ramp_loop(o)
    object_step_without_floor_orient()
    load_object_collision_model()
end

id_bhvRevRamp = hook_behavior(nil, OBJ_LIST_LEVEL, true, bhv_rev_ramp_init, bhv_rev_ramp_loop, "id_bhvRevRamp")

local revRampPlacements = {
    ["sm64"] = {
        [LEVEL_CASTLE_GROUNDS] = {
            [1] = {
                {x = 0, y = 1000, z = 0, pitch = 0x1000, yaw = 0x8000},
            }
        }
    }
}

local function on_sync()
    local np = gNetworkPlayers[0]
    if not revRampPlacements[ROMHACK] then return end
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
end

hook_event(HOOK_ON_SYNC_VALID, on_sync)
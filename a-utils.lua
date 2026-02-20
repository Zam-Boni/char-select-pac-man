function run_func_or_get_var(x, ...)
    if type(x) == "function" then
        return x(...)
    else
        return x
    end
end

function get_mario_slope_steepness(m)
    local floor = m.floor
    local slopeAngle = atan2s(floor.normal.z, floor.normal.x)
    local angle = math.sqrt(floor.normal.x ^ 2 + floor.normal.z ^ 2)
    if math.abs(math.s16(m.faceAngle.y - slopeAngle)) > 0x4000 then
        angle = angle * -1.0
    end
    return angle
end

---@param m MarioState
---@param e table ExtraState
function mario_detatch_from_floor(m, e, airAction, arg)
    if airAction == nil then airAction = ACT_FREEFALL end

    if e.floorSteep == nil then
        e.floorSteep = get_mario_slope_steepness(m)
    end

    local prevSlope = e.floorSteep
    local slope = get_mario_slope_steepness(m)
    local slopeDif = math.abs(slope - prevSlope)
    --if slopeDif ~= 0 then
    --    djui_chat_message_create(tostring(slopeDif))
    --end

    e.floorSteep = slope

    local velY = m.forwardVel * -prevSlope * (m.forwardVel < 0 and -1 or 1)
    local velF = m.forwardVel * (1 - math.abs(prevSlope)*0.5) * (m.forwardVel < 0 and -1 or 1)
    if (slopeDif > 0.4) or (m.pos.y > m.floorHeight + 10) then
        m.vel.y = velY
        m.forwardVel = velF
        e.floorSteep = nil
        return set_mario_action(m, airAction, arg)
    end

    return 0
end

function obj_get_owner_mario(obj)
    local index = obj.globalPlayerIndex < MAX_PLAYERS and network_local_index_from_global(obj.globalPlayerIndex) or nearest_mario_state_to_object(obj).playerIndex
    return gMarioStates[index]
end

function lerp_s16(a, b, t)
    a = math.s16(a)
    b = math.s16(b)

    local delta = b - a

    if delta > 0x8000 then
        delta = delta - 0x10000
    elseif delta < -0x8000 then
        delta = delta + 0x10000
    end

    return math.s16(a + delta * t)
end

function catmullRom(p0, p1, p2, p3, t)
    return 0.5 * (
        (2 * p1) +
        (-p0 + p2) * t +
        (2*p0 - 5*p1 + 4*p2 - p3) * t^2 +
        (-p0 + 3*p1 - 3*p2 + p3) * t^3
    )
end
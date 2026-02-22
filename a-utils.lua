-- Globals

ROMHACK = "sm64"
for i in pairs(gActiveMods) do
    local mod = gActiveMods[i]
    if mod.incompatible ~= nil then
        if mod.incompatible:find("romhack") then
            ROMHACK = mod.relativePath
        end
    end
    if mod.category ~= nil then
        if mod.category:find("romhack") then
            ROMHACK = mod.relativePath
        end
    end
    ROMHACK = ROMHACK:gsub("[/\\]+$", "")
    ROMHACK = ROMHACK:gsub(".*[/\\]", "")
end

log_to_console(ROMHACK, 0)

-- Funcs

function run_func_or_get_var(x, ...)
    if type(x) == "function" then
        return x(...)
    else
        return x
    end
end

---@param m MarioState
---@param step integer?
function get_mario_slope_steepness(m, step)
    local isWall = false
    local floor = m.floor
    local slopeAngle = atan2s(floor.normal.z, floor.normal.x)
    local angle = math.sqrt(floor.normal.x ^ 2 + floor.normal.z ^ 2)
    if math.abs(math.s16(m.faceAngle.y - slopeAngle)) > 0x4000 then
        angle = angle * -1.0
    end
    if step == GROUND_STEP_HIT_WALL then
        angle = -1
        isWall = true
    end
    return angle, isWall
end

---@param m MarioState
---@param e table ExtraState
function perform_ground_step_with_detatch(m, e, airAction, arg)
    if airAction == nil then airAction = ACT_FREEFALL end
    
    local step = perform_ground_step(m)

    if e.floorSteep == nil then
        local slope, isWall = get_mario_slope_steepness(m, step)
        e.floorSteep = slope
        e.floorAngle = m.floorAngle
    end

    local prevSlope = e.floorSteep
    local slope, isWall = get_mario_slope_steepness(m, step)
    local slopeDif = math.abs(prevSlope - slope)
    local angleDif = math.abs(e.floorAngle - m.floorAngle)
    if angleDif == 0 and prevSlope^2 == slope^2 then
        slopeDif = 0
    end
    if not isWall then
        e.floorSteep = slope
        e.floorAngle = m.floorAngle
    end

    local velY = math.sqrt(m.vel.x^2 + m.vel.z^2) * -prevSlope
    local velF = m.forwardVel * (1 - math.abs(prevSlope)*0.7) * (m.forwardVel < 0 and -1 or 1)
    if (slopeDif > 0.4 and angleDif > 0) or (not isWall and slopeDif > 1) or (isWall and slopeDif < 0.3) or step == GROUND_STEP_LEFT_GROUND then
        m.vel.y = velY
        m.forwardVel = velF
        e.floorSteep = nil
        return GROUND_STEP_LEFT_GROUND, set_mario_action(m, airAction, arg)
    end

    return step, nil
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
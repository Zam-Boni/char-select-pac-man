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
    if not floor then
        return 0, isWall
    end

    local angleDiff = math.s16(m.faceAngle.y - atan2s(floor.normal.z, floor.normal.x))
    local facingFactor = math.cos(math.rad(angleDiff * 360 / 0x10000))
    local slope = math.sqrt(floor.normal.x^2 + floor.normal.z^2) * facingFactor

    if step == GROUND_STEP_HIT_WALL then
        slope = -1
        isWall = true
    end
    
    return slope, isWall
end

---@param m MarioState
---@param e table ExtraState
function perform_ground_step_with_detatch(m, e, airAction, arg)
    if airAction == nil then airAction = ACT_FREEFALL end
    if arg == nil then arg = 0 end

    if e.floorSteep == nil then
        local slope = get_mario_slope_steepness(m, 0)
        e.floorSteep = slope
        e.floorAngle = atan2s(m.floor.normal.z, m.floor.normal.x)
    end

    local launchSlope = e.floorSteep

    local step = perform_ground_step(m)

    local prevSlope = e.floorSteep
    local slope, isWall = get_mario_slope_steepness(m, step)

    local newAngle = atan2s(m.floor.normal.z, m.floor.normal.x)
    local slopeDif = math.abs(prevSlope - slope)
    local angleDif = math.abs(e.floorAngle - newAngle)

    if angleDif < 50 and math.abs(prevSlope - slope) < 0.01 then
        slopeDif = 0
    end

    if not isWall then
        e.floorSteep = slope
        e.floorAngle = newAngle
    end

    if (slopeDif > 0.3 and angleDif > 50)
        or (not isWall and slopeDif > 1)
        or (isWall and slopeDif < 0.3)
        or step == GROUND_STEP_LEFT_GROUND then

        local horizontalSpeed = math.sqrt(m.vel.x^2 + m.vel.z^2)

        local velY = horizontalSpeed * -launchSlope
        local velF = m.forwardVel * (1 - math.abs(launchSlope) * 0.5)

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

function num_to_hex(num)
    if num == 0 then
        return '0'
    end
    local neg = false
    if num < 0 then
        neg = true
        num = num * -1
    end
    local hexstr = "0123456789ABCDEF"
    local result = ""
    while num > 0 do
        local n = (num%16)
        result = string.sub(hexstr, n + 1, n + 1) .. result
        num = math.floor(num / 16)
    end
    result = '0x'..result
    if neg then
        result = '-' .. result
    end
    return result
end
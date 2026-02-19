SAMPLE_BOUNCE = audio_sample_load("zbpmsfx-bounce.ogg")
SAMPLE_TAKE_OFF = audio_sample_load("zbpmsfx-takeoff.ogg")

local E_MODEL_PACDOT =      smlua_model_util_get_id("pacdot_geo")
local E_MODEL_PACPELLET =      smlua_model_util_get_id("pacpellet_geo")

local PAC_MAX_SPEED = 30

local gExtrasStates = {}
for i = 0, MAX_PLAYERS - 1 do
    gExtrasStates[i] = {
        revAudio = audio_stream_load("zbpmsfx-revup.ogg"),
        bounceCount = 0,
        forceDefaultWalk = false,
        faceAngleLerp = 0,
        prevPos = {x = 0, y = 0, z = 0},
        overrideVel = {x = 0, y = 0, z = 0},
        pelletPath = {}
    }
    audio_stream_set_looping(gExtrasStates[i].revAudio, true)
end

local function hook_pac_event(hook, func)
    _G.charSelect.character_hook_moveset(CT_ZBPACMAN, hook, func)
    _G.charSelect.character_hook_moveset(CT_ZBMSPACMAN, hook, func)
end

local function lerp_s16(a, b, t)
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

local function catmullRom(p0, p1, p2, p3, t)
    return 0.5 * (
        (2 * p1) +
        (-p0 + p2) * t +
        (2*p0 - 5*p1 + 4*p2 - p3) * t^2 +
        (-p0 + 3*p1 - 3*p2 + p3) * t^3
    )
end

local function obj_get_owner_mario(obj)
    local index = obj.globalPlayerIndex < MAX_PLAYERS and network_local_index_from_global(obj.globalPlayerIndex) or nearest_mario_state_to_object(obj).playerIndex
    return gMarioStates[index]
end

local function apply_override_vel(m)
    local e = gExtrasStates[m.playerIndex]

    m.vel.x = m.vel.x + e.overrideVel.x
    m.vel.y = m.vel.y + e.overrideVel.y
    m.vel.z = m.vel.z + e.overrideVel.z

    e.overrideVel.x = math.max(math.abs(e.overrideVel.x) - 2, 0) * (e.overrideVel.x > 0 and 1 or -1)
    e.overrideVel.y = math.max(math.abs(e.overrideVel.y) - 4, 0) * (e.overrideVel.y > 0 and 1 or -1)
    e.overrideVel.z = math.max(math.abs(e.overrideVel.z) - 2, 0) * (e.overrideVel.z > 0 and 1 or -1)
end

local function update_walking_speed(m)
    if not m then return end
    local e = gExtrasStates[m.playerIndex]

    local slipperyFloor = ((m.area.terrainType & TERRAIN_MASK) == TERRAIN_SNOW and (m.floor ~= nil and m.floor.type & SURFACE_CLASS_VERY_SLIPPERY ~= 0 ));

    local intendedDYaw = m.intendedYaw;
    local intendedMag = m.intendedMag / 32.0;

    m.vel.x = math.lerp(m.vel.x, sins(intendedDYaw) * intendedMag * PAC_MAX_SPEED, slipperyFloor and 0.05 or 0.3)
    m.vel.z = math.lerp(m.vel.z, coss(intendedDYaw) * intendedMag * PAC_MAX_SPEED, slipperyFloor and 0.05 or 0.3)
    apply_override_vel(m)
    m.forwardVel = math.sqrt(m.vel.z^2 + m.vel.x^2)

    if m.forwardVel > 1 then
        m.faceAngle.y = atan2s(m.vel.z, m.vel.x)
        apply_slope_accel(m);
    else
        m.vel.x = 0
        m.vel.z = 0
        m.forwardVel = 0
        set_mario_action(m, ACT_IDLE, 0)
    end
end

local function pac_update_air_with_turn(m)
    if not m then return end
    local e = gExtrasStates[m.playerIndex]

    if m.input & INPUT_ZERO_MOVEMENT == 0 then
        local intendedDYaw = m.intendedYaw;
        local intendedMag = m.intendedMag / 32.0;

        m.vel.x = math.lerp(m.vel.x, sins(intendedDYaw) * intendedMag * PAC_MAX_SPEED, 0.3)
        m.vel.z = math.lerp(m.vel.z, coss(intendedDYaw) * intendedMag * PAC_MAX_SPEED, 0.3)
    else
        m.vel.x = math.lerp(m.vel.x, 0, 0.1)
        m.vel.z = math.lerp(m.vel.z, 0, 0.1)
    end

    apply_override_vel(m)
    m.forwardVel = math.sqrt(m.vel.z^2 + m.vel.x^2)
    
    if m.forwardVel > 1 then
        m.faceAngle.y = atan2s(m.vel.z, m.vel.x)
    else
        m.vel.x = 0
        m.vel.z = 0
        m.forwardVel = 0
    end
end

local function pac_air_action_step(m, landAction, animation, stepArg)
    if not m then return 0 end

    pac_update_air_with_turn(m);

    local stepResult = perform_air_step(m, stepArg);
    if (m.action == ACT_BUBBLED and stepResult == AIR_STEP_HIT_LAVA_WALL) then
        stepResult = AIR_STEP_HIT_WALL;
    end

    if stepResult == AIR_STEP_NONE then
        if animation ~= nil then
            set_character_animation(m, animation);
        end
    elseif stepResult == AIR_STEP_LANDED then
        if (check_fall_damage_or_get_stuck(m, ACT_HARD_BACKWARD_GROUND_KB) == 0) then
            return set_mario_action(m, landAction, 0);
        end
    elseif stepResult == AIR_STEP_GRABBED_LEDGE then
        set_character_animation(m, CHAR_ANIM_IDLE_ON_LEDGE);
        drop_and_set_mario_action(m, ACT_LEDGE_GRAB, 0);
    elseif stepResult == AIR_STEP_GRABBED_CEILING then
        set_mario_action(m, ACT_START_HANGING, 0);
    elseif stepResult == AIR_STEP_HIT_LAVA_WALL then
        lava_boost_on_wall(m);
    end

    return stepResult;
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
    local slopeDif = math.abs(prevSlope - slope)

    e.floorSteep = slope

    -- DETACH: sudden slope change
    local velY = m.forwardVel * -prevSlope * (m.forwardVel < 0 and -1 or 1)
    local velF = m.forwardVel * (1 - math.abs(prevSlope)*0.5) * (m.forwardVel < 0 and -1 or 1)
    local velAngle = coss(atan2s(velY, velF))
    if ((slopeDif > 0.4) and (velAngle < slope - 0.1 or velAngle > slope + 0.1)) or (m.pos.y > m.floorHeight + 10) then
        m.vel.y = velY
        m.forwardVel = velF
        e.floorSteep = nil
        return set_mario_action(m, airAction, arg)
    end

    return 0
end

ACT_PAC_WALKING = allocate_mario_action(ACT_GROUP_MOVING | ACT_FLAG_WATER_OR_TEXT)
ACT_PAC_SKID = allocate_mario_action(ACT_GROUP_AIRBORNE)
ACT_PAC_JUMP = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION | ACT_FLAG_WATER_OR_TEXT)
ACT_PAC_FREEFALL = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION)
ACT_PAC_KICK = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION)
ACT_PAC_ROLL = allocate_mario_action(ACT_GROUP_CUTSCENE | ACT_FLAG_SHORT_HITBOX)
ACT_PAC_REV_CHARGE = allocate_mario_action(ACT_GROUP_STATIONARY)
ACT_PAC_REV_ROLL = allocate_mario_action(ACT_GROUP_MOVING | ACT_FLAG_SHORT_HITBOX)
ACT_PAC_REV_ROLL_AIR = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_SHORT_HITBOX)
ACT_PAC_BUTT_BOUNCE = allocate_mario_action(ACT_GROUP_AIRBORNE)
ACT_PAC_BUTT_BOUNCE_LAND = allocate_mario_action(ACT_GROUP_MOVING)
ACT_PAC_POWER_PELLET = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_FLYING | ACT_FLAG_SWIMMING_OR_FLYING)
ACT_PAC_SWIM = allocate_mario_action(ACT_GROUP_SUBMERGED | ACT_FLAG_SWIMMING | ACT_FLAG_SWIMMING_OR_FLYING)
ACT_PAC_FREEZE = allocate_mario_action(ACT_GROUP_CUTSCENE)

---@param m MarioState
---@param o Object?
---@param vel number
local function pac_bump_away_from_obj(m, o, vel)
    local e = gExtrasStates[m.playerIndex]
    m.vel.x = 0
    m.vel.y = 0
    m.vel.z = 0

    local angle = o and atan2s(m.pos.z - o.oPosZ, m.pos.x - o.oPosX) or m.faceAngle.y + 0x8000
    e.overrideVel.x = sins(angle) * vel
    e.overrideVel.z = coss(angle) * vel
    e.overrideVel.y = 10 + vel*0.1
    m.invincTimer = 1
    set_mario_action(m, ACT_PAC_FREEFALL, 0)
    set_mario_particle_flags(m, PARTICLE_TRIANGLE, 0)
end

local function pac_gravity(m)
    if not m then return 0 end
    m.vel.y = math.max(m.vel.y - 4.5, -60)
end

local function pac_butt_bounce_gravity(m)
    if not m then return 0 end
    m.vel.y = m.vel.y - 10
end

local function act_pac_walking(m)
    if not m then return 0 end
    local startPos = {x = 0, y = 0, z = 0}
    local startYaw = m.faceAngle.y;

    mario_drop_held_object(m);

    if (should_begin_sliding(m) ~= 0) then
        --return set_mario_action(m, ACT_BEGIN_SLIDING, 0);
    end

    if (m.input & INPUT_FIRST_PERSON ~= 0) then
        return begin_braking_action(m);
    end

    if (m.input & INPUT_A_PRESSED ~= 0) then
        return set_mario_action(m, ACT_JUMP, 0);
    end

    if (m.controller.buttonDown & B_BUTTON ~= 0) then
        return set_mario_action(m, ACT_PAC_REV_CHARGE, 0);
    end

    if (m.input & INPUT_ZERO_MOVEMENT ~= 0) then
        --return begin_braking_action(m);
    end

    if mario_floor_is_slippery(m) ~= 0 then
        set_mario_action(m, ACT_PAC_ROLL, 0)
    end

    m.actionState = 0;

    vec3f_copy(startPos, m.pos);
    update_walking_speed(m);

    local step = perform_ground_step(m)
    if step == GROUND_STEP_LEFT_GROUND then
        set_mario_action(m, ACT_FREEFALL, 0);
        set_character_animation(m, CHAR_ANIM_GENERAL_FALL);
    elseif step == GROUND_STEP_NONE then
        anim_and_audio_for_walk(m);
        if (m.intendedMag - m.forwardVel > 16.0) then
            set_mario_particle_flags(m, PARTICLE_DUST, 0);
        end
    end

    check_ledge_climb_down(m);
    tilt_body_walking(m, startYaw);
    return 0;
end

local function act_pac_skid(m)
    if not m then return 0 end
    
    if m.pos.y < m.floorHeight + 10 then
        perform_ground_step(m)
    else
        perform_air_step(m, AIR_STEP_NONE)
    end

    set_character_animation(m, CHAR_ANIM_SKID_ON_GROUND)
    set_mario_particle_flags(m, PARTICLE_DUST, 0)

    m.forwardVel = math.max(m.forwardVel - 5, math.max(PAC_MAX_SPEED * m.intendedMag/32, 1))
    m.vel.x = sins(m.faceAngle.y)*m.forwardVel
    m.vel.z = coss(m.faceAngle.y)*m.forwardVel
    if m.forwardVel <= math.max(PAC_MAX_SPEED * m.intendedMag/32, 1) then
        if m.pos.y < m.floorHeight + 10 then
            return set_mario_action(m, ACT_PAC_WALKING, 0)
        else
            return set_mario_action(m, ACT_PAC_FREEFALL, 0)
        end
    end
    return 0;
end

---@param m MarioState
local function act_pac_jump(m)
    if not m then return 0 end
    local e = gExtrasStates[m.playerIndex]

    local anim = m.vel.y > 10 and CHAR_ANIM_DOUBLE_JUMP_RISE or CHAR_ANIM_DOUBLE_JUMP_FALL
    if e.bounceCount > 0 then
        if e.bounceCount >= 3 then
            anim = CHAR_ANIM_SPECIAL_GROUND_POUND
        else
            anim = CHAR_ANIM_GROUND_POUND
        end
        if m.actionState == 0 then
            audio_sample_play(SAMPLE_BOUNCE, m.pos, 0.5)
        end
    else
        play_mario_sound(m, SOUND_ACTION_TERRAIN_JUMP, CHAR_SOUND_YAH_WAH_HOO);
    end


    if m.actionState == 0 then
        set_mario_y_vel_based_on_fspeed(m, math.max(65.0, m.vel.y), 0.0)
        m.actionState = m.actionState + 1
    end

    if (m.input & INPUT_B_PRESSED ~= 0) then
        e.bounceCount = 0
        return set_mario_action(m, ACT_PAC_KICK, 0);
    end
    if m.actionTimer > 5 then
        if (m.input & INPUT_A_PRESSED ~= 0) then
            return set_mario_action(m, ACT_PAC_BUTT_BOUNCE, 0);
        end
    else
        m.actionTimer = m.actionTimer + 1
    end

    pac_air_action_step(m, ACT_FREEFALL_LAND_STOP, anim, AIR_STEP_CHECK_LEDGE_GRAB | AIR_STEP_CHECK_HANG);
    if (m.action == ACT_FREEFALL_LAND_STOP) then
        if mario_floor_is_slippery(m) ~= 0 then
            set_mario_action(m, ACT_PAC_ROLL, 0)
        end
        e.bounceCount = 0
        queue_rumble_data_mario(m, 5, 40);
    end
    --play_flip_sounds(m, 2, 8, 20);
    return 0;
end

---@param m MarioState
local function act_pac_freefall(m)
    if not m then return 0 end
    local e = gExtrasStates[m.playerIndex]

    if (m.input & INPUT_B_PRESSED ~= 0) then
        return set_mario_action(m, ACT_PAC_KICK, 0);
    end

    pac_air_action_step(m, ACT_FREEFALL_LAND_STOP, CHAR_ANIM_GENERAL_FALL, AIR_STEP_CHECK_LEDGE_GRAB | AIR_STEP_CHECK_HANG);
    if (m.action == ACT_FREEFALL_LAND_STOP) then
        if mario_floor_is_slippery(m) ~= 0 then
            set_mario_action(m, ACT_PAC_ROLL, 0)
        end
        queue_rumble_data_mario(m, 5, 40);
    end
    return 0;
end

---@param m MarioState
local function act_pac_kick(m)
    if not m then return 0 end
    if (m.flags & MARIO_WING_CAP ~= 0) and m.prevAction == ACT_PAC_JUMP then
        return set_mario_action(m, ACT_PAC_POWER_PELLET, 0)
    end
    if m.actionState == 0 then
        set_mario_y_vel_based_on_fspeed(m, m.vel.y > 0 and m.vel.y*0.6 or m.vel.y, 0.0)
        m.actionState = m.actionState + 1
    end

    play_mario_sound(m, SOUND_ACTION_TERRAIN_JUMP, CHAR_SOUND_YAHOO);

    pac_air_action_step(m, ACT_FREEFALL_LAND_STOP, CHAR_ANIM_AIR_KICK, AIR_STEP_CHECK_LEDGE_GRAB | AIR_STEP_CHECK_HANG);
    if (m.action == ACT_FREEFALL_LAND_STOP) then
        if mario_floor_is_slippery(m) ~= 0 then
            set_mario_action(m, ACT_PAC_ROLL, 0)
        end
        queue_rumble_data_mario(m, 5, 40);
    end
    return 0;
end

local function act_pac_roll(m)
    if not m then return 0 end

    local step = perform_ground_step(m)
    if step == GROUND_STEP_LEFT_GROUND then
        set_mario_action(m, ACT_PAC_SKID, 0)
    elseif step == GROUND_STEP_HIT_WALL then
        local wall = m.wall
        if wall ~= nil then
            local nx, nz = wall.normal.x, wall.normal.z
            
            local vx, vz = m.vel.x, m.vel.z
            
            local dot = vx * nx + vz * nz
            
            m.vel.x = vx - 2 * dot * nx
            m.vel.z = vz - 2 * dot * nz
            
            m.vel.x = m.vel.x * 0.7
            m.vel.z = m.vel.z * 0.7
        end
    end

    m.vel.x = m.vel.x + sins(m.intendedYaw) * m.intendedMag / 32 * 2
    m.vel.z = m.vel.z + coss(m.intendedYaw) * m.intendedMag / 32 * 2

    local floor = m.floor
    if floor ~= nil then
        local nx, ny, nz = floor.normal.x, floor.normal.y, floor.normal.z
        local push = ny < 0.99 and 4 or 0
        m.vel.x = math.clamp(m.vel.x + nx * push, -PAC_MAX_SPEED*3, PAC_MAX_SPEED*3)
        m.vel.z = math.clamp(m.vel.z + nz * push, -PAC_MAX_SPEED*3, PAC_MAX_SPEED*3)
    end

    m.faceAngle.y = atan2s(m.vel.z, m.vel.x)

    if mario_floor_is_slippery(m) == 0 and (m.area.terrainType & TERRAIN_MASK) ~= TERRAIN_SLIDE then
        set_mario_action(m, ACT_PAC_SKID, 0)
    end

    set_character_animation(m, CHAR_ANIM_FORWARD_SPINNING)
    m.marioObj.header.gfx.animInfo.animAccel = 0x800 * math.sqrt(m.vel.x^2 + m.vel.z^2)
end

---@param m MarioState
local function act_pac_rev_charge(m)
    if not m then return 0 end
    local e = gExtrasStates[m.playerIndex]
    if m.pos.y > m.floorHeight + 10 then
        return set_mario_action(m, ACT_PAC_KICK, 0)
    end

    local distFromCam = m.playerIndex == 0 and 0.5 or math.clamp(500/vec3f_dist(m.pos, gLakituState.pos), 0, 0.5)
    if m.actionState == 0 then
        audio_stream_play(e.revAudio, true, distFromCam)
        m.actionState = m.actionState + 1
    end
    audio_stream_set_frequency(e.revAudio, 0.9 + (m.actionTimer/150))
    audio_stream_set_volume(e.revAudio, distFromCam)

    perform_ground_step(m)
    set_character_animation(m, CHAR_ANIM_RUNNING_UNUSED)
    m.marioObj.header.gfx.animInfo.animAccel = 0x8000 * m.actionTimer
    m.vel.x = math.lerp(m.vel.x, 0, 0.3)
    m.vel.z = math.lerp(m.vel.z, 0, 0.3)
    
    if (m.input & INPUT_A_PRESSED ~= 0) then
        m.vel.y = 50
        return set_mario_action(m, ACT_PAC_KICK, 0);
    end

    if m.controller.buttonDown & B_BUTTON ~= 0 then
        if m.actionTimer == 30 then
            local sp24 = spawn_non_sync_object(id_bhvSmoke, E_MODEL_SMOKE, m.pos.x, m.pos.y, m.pos.z, function (o)
                local angle = (m.faceAngle.y + 0x8000) + 0x2000 * random_float() - 0x1000
                o.oPosX = o.oPosX + sins(angle)*40
                o.oPosZ = o.oPosZ + coss(angle)*40
                o.oMoveAngleYaw = angle
                o.oForwardVel = 10
                o.oVelY = random_float()*5
            end);
        end


        if m.actionTimer < 5 then
            m.faceAngle.y = m.intendedYaw
        else
            m.faceAngle.y = m.intendedYaw - approach_s32(math.s16(m.intendedYaw - m.faceAngle.y), 0, 0x100, 0x100);
        end
    else
        if m.actionTimer < 5 then
            set_mario_action(m, ACT_IDLE, 0)
        else
            audio_sample_play(SAMPLE_TAKE_OFF, m.pos, 0.5)
            set_mario_action(m, ACT_PAC_REV_ROLL, m.actionTimer*1.5)
        end
    end

    m.actionTimer = math.min(m.actionTimer + 1, 30)
end

---@param m MarioState
local function act_pac_rev_roll(m)
    if not m then return 0 end

    if m.forwardVel < 0 then
        pac_bump_away_from_obj(m, nil, 30)
    end

    local detach = mario_detatch_from_floor(m, gExtrasStates[m.playerIndex], ACT_PAC_REV_ROLL_AIR, m.actionTimer)
    if detach ~= 0 then
        return detach
    end

    local step = perform_ground_step(m)
    if step == GROUND_STEP_HIT_WALL then
        mario_bonk_reflection(m, 0)
        m.forwardVel = m.forwardVel * 0.8
    end

    set_character_animation(m, CHAR_ANIM_FORWARD_SPINNING)
    m.marioObj.header.gfx.animInfo.animAccel = 0x800 * m.forwardVel

    if m.actionState == 0 then
        if m.prevAction ~= ACT_PAC_REV_ROLL_AIR then
            m.forwardVel = 100
        end
        m.actionTimer = m.actionArg
        m.actionState = m.actionState + 1
    else
        if m.actionTimer == 0 then
            set_mario_action(m, ACT_PAC_SKID, 0)
        end
    end
    apply_slope_accel(m)
    if (m.input & INPUT_A_PRESSED ~= 0) then
        return set_mario_action(m, ACT_PAC_JUMP, 0);
    end

    m.faceAngle.y = m.intendedYaw - approach_s32(math.s16(m.intendedYaw - m.faceAngle.y), 0, 0xA00, 0xA00);

    m.vel.x = m.forwardVel * sins(m.faceAngle.y)
    m.vel.z = m.forwardVel * coss(m.faceAngle.y)

    m.actionTimer = math.max(m.actionTimer - 1, 0)
end

---@param m MarioState
local function act_pac_rev_roll_air(m)
    if not m then return 0 end

    if m.actionState == 0 then
        m.actionTimer = m.actionArg
        m.actionState = m.actionState + 1
    else
        if m.actionTimer == 0 then
            set_mario_action(m, ACT_PAC_SKID, 0)
        end
    end

    local step = perform_air_step(m, AIR_STEP_NONE)
    if step == AIR_STEP_LANDED then
        set_mario_action(m, ACT_PAC_REV_ROLL, m.actionTimer);
    end
    set_character_animation(m, CHAR_ANIM_FORWARD_SPINNING)
    
    if (m.input & INPUT_A_PRESSED ~= 0) then
        return set_mario_action(m, ACT_PAC_FREEFALL, 0);
    end

    m.marioObj.header.gfx.animInfo.animAccel = 0x800 * m.forwardVel

    m.faceAngle.y = m.intendedYaw - approach_s32(math.s16(m.intendedYaw - m.faceAngle.y), 0, 0xA00, 0xA00);

    m.vel.x = m.forwardVel * sins(m.faceAngle.y)
    m.vel.z = m.forwardVel * coss(m.faceAngle.y)

    m.actionTimer = math.max(m.actionTimer - 1, 0)
end

---@param m MarioState
local function act_pac_butt_bounce(m)
    if not m then return 0 end
    local e = gExtrasStates[m.playerIndex]

    if m.actionState == 0 then
        m.actionState = m.actionState + 1
    end

    if e.bounceCount < 3 then
        set_character_animation(m, CHAR_ANIM_START_GROUND_POUND)
    end
    pac_air_action_step(m, ACT_PAC_BUTT_BOUNCE_LAND, nil, AIR_STEP_CHECK_LEDGE_GRAB | AIR_STEP_CHECK_HANG);
    if (m.action == ACT_PAC_BUTT_BOUNCE_LAND) then
        if mario_floor_is_slippery(m) ~= 0 then
            set_mario_action(m, ACT_PAC_ROLL, 0)
        end
        queue_rumble_data_mario(m, 5, 40);
    end
    --play_flip_sounds(m, 2, 8, 20);
    return 0;
end

---@param m MarioState
local function act_pac_butt_bounce_land(m)
    if not m then return 0 end
    local e = gExtrasStates[m.playerIndex]
    e.bounceCount = e.bounceCount + 1

    local forwardVel = m.forwardVel
    perform_ground_step(m)
    set_mario_action(m, ACT_PAC_JUMP, 1)
    m.forwardVel = forwardVel

    return 0;
end

local eatRate = 4
---@param m MarioState
local function act_pac_power_pellet(m)
    if not m then return 0 end
    local e = gExtrasStates[m.playerIndex]
    
    if m.actionState == 0 then
        local o = spawn_pellet_trail(m)
        if m.controller.buttonDown & B_BUTTON == 0 or (m.flags & MARIO_WING_CAP == 0) then
            e.pelletPath[#e.pelletPath + 1] = {x = o.oPosX, y = o.oPosY, z = o.oPosZ}
            m.actionState = m.actionState + 1
        end
        set_character_animation(m, CHAR_ANIM_FIRST_PUNCH)
    elseif m.actionState == 1 then
        m.actionState = m.actionState + 1
        e.pelletPath[0] = {x = m.pos.x, y = m.pos.y, z = m.pos.z}
    else
        local f = math.floor(m.actionTimer/eatRate)
        local t = (m.actionTimer % eatRate) / eatRate
        if #e.pelletPath > 0 and e.pelletPath[f] ~= nil then
            -- Get four neighboring samples (make sure they exist)
            local p1 = e.pelletPath[f]           -- current
            local p0 = e.pelletPath[f - 1] or p1 -- previous
            local p2 = e.pelletPath[f + 1] or p1 -- next
            local p3 = e.pelletPath[f + 2] or p2 -- next next

            -- Smooth position interpolation
            m.pos.x = catmullRom(p0.x, p1.x, p2.x, p3.x, t)
            m.pos.y = catmullRom(p0.y, p1.y, p2.y, p3.y, t)
            m.pos.z = catmullRom(p0.z, p1.z, p2.z, p3.z, t)

            m.faceAngle.y = atan2s(m.pos.z - e.prevPos.z, m.pos.x - e.prevPos.x)
            m.marioObj.header.gfx.angle.x = m.actionTimer * 0x1000

            vec3f_copy(e.prevPos, m.pos)
            perform_air_step(m, AIR_STEP_NONE)
            set_character_animation(m, CHAR_ANIM_FAST_LONGJUMP)

            m.actionTimer = m.actionTimer + 1
        else
            e.pelletPath = {}
            return set_mario_action(m, ACT_PAC_FREEFALL, 0)
        end
    end

    return 0;
end

---@param m MarioState
local function check_water_jump(m)
    if not m then return 0 end
    local probe = m.pos.y + 1.5

    if (m.input & INPUT_A_PRESSED ~= 0) then
        if (probe >= m.waterLevel - 80 and m.faceAngle.x >= 0) then      
            local allowForceAction = true;
            if not allowForceAction then return 0 end

            vec3s_set(m.angleVel, 0, 0, 0);

            m.vel.y = 62.0;

            if (m.heldObj == nil) then
                return set_mario_action(m, ACT_WATER_JUMP, 0);
            else
                return set_mario_action(m, ACT_HOLD_WATER_JUMP, 0);
            end
        end
    end

    return 0;
end

---@param m MarioState
local function act_pac_swim(m)
    if not m then return 0 end
    local pIndex = m.playerIndex;

    if (m.area.terrainType & TERRAIN_MASK) == TERRAIN_SNOW then
        return set_mario_action(m, ACT_PAC_FREEZE, 0)
    end

    if (m.flags & MARIO_METAL_CAP ~= 0) then
        return set_mario_action(m, ACT_METAL_WATER_FALLING, 1);
    end
    
    local intendedDYaw = m.intendedYaw;
    local intendedMag = m.intendedMag / 32.0;
    local vTarget = 0 + (m.controller.buttonDown & A_BUTTON ~= 0 and 0x3000 or 0) - (m.controller.buttonDown & B_BUTTON ~= 0 and 0x3000 or 0)

    m.forwardVel = math.lerp(m.forwardVel, (vTarget ~= 0 and 1 or intendedMag)*PAC_MAX_SPEED, 0.1)
    if intendedMag > 0.2 then
        m.faceAngle.y = lerp_s16(m.faceAngle.y, intendedDYaw, 0.03)
    end
    m.faceAngle.y = lerp_s16(m.faceAngle.y, intendedDYaw, 0.03)
    m.faceAngle.x = lerp_s16(m.faceAngle.x, vTarget, 0.03)
    if vTarget > 0 then
        m.faceAngle.x = math.max(m.faceAngle.x, 0)
    elseif vTarget < 0 then
        m.faceAngle.x = math.min(m.faceAngle.x, 0)
    end

    m.vel.y = sins(m.faceAngle.x) * PAC_MAX_SPEED
    m.vel.x = sins(m.faceAngle.y) * m.forwardVel
    m.vel.z = coss(m.faceAngle.y) * m.forwardVel

    perform_water_step(m)

    check_water_jump(m)

    set_character_animation(m, CHAR_ANIM_SWIM_PART1);

    return 0;
end

---@param m MarioState
local function act_pac_freeze(m)
    if m.pos.y < m.waterLevel then
        m.vel.y = m.vel.y + 1
    end
    m.marioObj.header.gfx.animInfo.animAccel = 0
    perform_air_step(m, AIR_STEP_NONE)
end

hook_mario_action(ACT_PAC_WALKING, act_pac_walking)
hook_mario_action(ACT_PAC_SKID, {every_frame = act_pac_skid, gravity = pac_gravity})
hook_mario_action(ACT_PAC_JUMP, {every_frame = act_pac_jump, gravity = pac_gravity})
hook_mario_action(ACT_PAC_FREEFALL, {every_frame = act_pac_freefall, gravity = pac_gravity})
hook_mario_action(ACT_PAC_KICK, {every_frame = act_pac_kick, gravity = pac_gravity}, INT_KICK)
hook_mario_action(ACT_PAC_ROLL, act_pac_roll, INT_FAST_ATTACK_OR_SHELL)
hook_mario_action(ACT_PAC_REV_CHARGE, act_pac_rev_charge)
hook_mario_action(ACT_PAC_REV_ROLL, act_pac_rev_roll, INT_KICK)
hook_mario_action(ACT_PAC_REV_ROLL_AIR, {every_frame = act_pac_rev_roll_air, gravity = pac_gravity}, INT_KICK)
hook_mario_action(ACT_PAC_BUTT_BOUNCE, {every_frame = act_pac_butt_bounce, gravity = pac_butt_bounce_gravity}, INT_GROUND_POUND)
hook_mario_action(ACT_PAC_BUTT_BOUNCE_LAND, act_pac_butt_bounce_land, INT_GROUND_POUND)
hook_mario_action(ACT_PAC_POWER_PELLET, {every_frame = act_pac_power_pellet, gravity = function() end})
hook_mario_action(ACT_PAC_SWIM, act_pac_swim)
hook_mario_action(ACT_PAC_FREEZE, act_pac_freeze)

---@param m MarioState
local function pac_update(m)
    if not m then return 0 end
    local e = gExtrasStates[m.playerIndex]

    -- Update Movement Visuals
    e.faceAngleLerp = lerp_s16(e.faceAngleLerp, m.intendedYaw, 0.3)
    if m.action == ACT_PAC_WALKING or m.action == ACT_PAC_FREEFALL or (m.action == ACT_PAC_JUMP and e.bounceCount == 0) then
        m.marioObj.header.gfx.angle.y = e.faceAngleLerp
        m.marioBodyState.headAngle.z = math.clamp(math.s16(e.faceAngleLerp - m.intendedYaw), -0x2000, 0x2000)*0.7
    end

    if m.action ~= ACT_PAC_POWER_PELLET then
        e.pelletPath = {}
    end
end

local overrideActs = {
    [ACT_JUMP] = ACT_PAC_JUMP,
    [ACT_DOUBLE_JUMP] = ACT_PAC_JUMP,
    [ACT_TRIPLE_JUMP] = ACT_PAC_JUMP,
    [ACT_SIDE_FLIP] = ACT_PAC_JUMP,
    [ACT_PUNCHING] = ACT_PAC_REV_CHARGE,
    [ACT_MOVE_PUNCHING] = ACT_PAC_REV_CHARGE,
    [ACT_DIVE] = ACT_PAC_REV_CHARGE,
    [ACT_FREEFALL] = ACT_PAC_FREEFALL,
    [ACT_WALKING] = ACT_PAC_WALKING,
    [ACT_WALKING] = ACT_PAC_WALKING,
    [ACT_BRAKING] = ACT_PAC_SKID,
    [ACT_BUTT_SLIDE] = ACT_PAC_ROLL,
    [ACT_DIVE_SLIDE] = ACT_PAC_ROLL,
    [ACT_STOMACH_SLIDE] = ACT_PAC_ROLL,
    [ACT_BEGIN_SLIDING] = ACT_PAC_ROLL,

    [ACT_START_CROUCHING] = false,
    [ACT_STOP_CROUCHING] = false,
    [ACT_CROUCHING] = false,
    [ACT_CROUCH_SLIDE] = false,
}

local function before_pac_action(m, nextAct)
    local e = gExtrasStates[m.playerIndex]
    audio_stream_pause(e.revAudio)
    e.floorSteep = nil
    local forceDefaultWalk = e.forceDefaultWalk
    e.forceDefaultWalk = false
    if nextAct & ACT_FLAG_SWIMMING ~= 0 and nextAct ~= ACT_PAC_SWIM then
        return set_mario_action(m, ACT_PAC_SWIM, 0)
    end
    if overrideActs[nextAct] then
        if overrideActs[nextAct] ~= false then
            if nextAct ~= ACT_WALKING or not forceDefaultWalk then
                return set_mario_action(m, overrideActs[nextAct], 0)
            end
        else
            return 1
        end
    end
end

local forceWalkingInteracts = {
    [id_bhvDoor] = true,
    [id_bhvDoorWarp] = true,
    [id_bhvStarDoor] = true,
    [id_bhvBowserKeyUnlockDoor] = true,
    [id_bhvTowerDoor] = true,
    [id_bhvKoopaShell] = true,
}

---@param m MarioState
---@param o Object
---@param type InteractionType
local function on_interact(m, o, type)
    local e = gExtrasStates[m.playerIndex]
    local bhvID = get_id_from_behavior(o.behavior)
    if forceWalkingInteracts[bhvID] and m.action == ACT_PAC_WALKING then
        e.forceDefaultWalk = true
        set_mario_action(m, ACT_WALKING, 0)
    end
end

local revRollInteractions = {
    [id_bhvBowserBodyAnchor] = function (m, o, type)
        local target = o.parentObj
        if target.oAction ~= 19 and target.oAction ~= 4 and target.oAction ~= 12 and target.oAction ~= 1 then
            target.oMoveFlags = 0
            target.oFaceAngleYaw = m.faceAngle.y + 0x8000
            target.oMoveAngleYaw = m.faceAngle.y + 0x8000
            target.oSubAction = 0
            target.oAction = 1
            target.oVelY = 80
            target.oForwardVel = -m.forwardVel*1.2
            if target.oSyncID ~= 0 then
                network_send_object(target, true)
            end
            pac_bump_away_from_obj(m, o, 40)
            return false
        end
    end,
    [id_bhvMips] = function (m, o, type)
        if o.oMipsStarStatus == MIPS_STAR_STATUS_HAVENT_SPAWNED_STAR then
            o.oMipsStarStatus = MIPS_STAR_STATUS_SHOULD_SPAWN_STAR;
        end
    end,

}

---@param m MarioState
---@param o Object
---@param type InteractionType
local function allow_interact(m, o, type)
    local e = gExtrasStates[m.playerIndex]
    if m.action == ACT_PAC_REV_ROLL or m.action == ACT_PAC_REV_ROLL_AIR then
        local func = revRollInteractions[get_id_from_vanilla_behavior(o.behavior)]
        if func then
            local funcReturn = func(m, o, type)
            pac_bump_away_from_obj(m, o, 30)
            if funcReturn ~= nil then
                return funcReturn
            end
        end

        -- Fallback Grab Interaction
        if (type & INTERACT_GRABBABLE ~= 0) and (o.oInteractionSubtype & INT_SUBTYPE_NOT_GRABBABLE == 0) then
            o.oHeldState = 2 -- HELD_THROWN
            o.oMoveAngleYaw = m.faceAngle.y
            o.oForwardVel = m.forwardVel/o.oFriction
            o.oVelX = o.oForwardVel*sins(o.oMoveAngleYaw)*0.5
            o.oVelZ = o.oForwardVel*coss(o.oMoveAngleYaw)*0.5
            o.oVelY = 30
            if o.oSyncID ~= 0 then
                network_send_object(o, true)
            end
            pac_bump_away_from_obj(m, o, 30)
            return false
        end
    end
end

local wakaSound = audio_sample_load("zbpm-waka.ogg")
local fruitSound = audio_sample_load("zbpm-fruit.ogg")
local function on_play_sound(sound, pos)
    if sound == SOUND_GENERAL_COIN then
        audio_sample_play(wakaSound, gMarioStates[0].pos, 1)
        return NO_SOUND
    end
    if sound == SOUND_GENERAL_RED_COIN or sound == SOUND_MENU_COLLECT_RED_COIN then
        audio_sample_play(fruitSound, gMarioStates[0].pos, 1)
        return NO_SOUND
    end
end

hook_pac_event(HOOK_MARIO_UPDATE, pac_update)
hook_pac_event(HOOK_BEFORE_SET_MARIO_ACTION, before_pac_action)
hook_pac_event(HOOK_ON_INTERACT, on_interact)
hook_pac_event(HOOK_ALLOW_INTERACT, allow_interact)
hook_pac_event(HOOK_ON_PLAY_SOUND, on_play_sound)

-- Pac Man Objects

---@param o Object
local function bhv_trail_pellet_init(o)
    local m = obj_get_owner_mario(o)
    local e = gExtrasStates[m.playerIndex]

    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oGravity = 0
    o.oAction = #e.pelletPath + 1
end

---@param o Object
local function bhv_trail_pellet_loop(o)
    local m = obj_get_owner_mario(o)
    local e = gExtrasStates[m.playerIndex]

    if m.action ~= ACT_PAC_POWER_PELLET then
        obj_mark_for_deletion(o)
    end

    if m.actionState == 0 then
        e.pelletPath[o.oAction] = {x = o.oPosX, y = o.oPosY, z = o.oPosZ}
    else
        if vec3f_dist(m.pos, {x = o.oPosX, y = o.oPosY, z = o.oPosZ}) < 100 then
            audio_sample_play(wakaSound, gMarioStates[0].pos, 1)
            obj_mark_for_deletion(o)
        end
    end
end

id_bhvTrailPellet = hook_behavior(nil, OBJ_LIST_DEFAULT, true, bhv_trail_pellet_init, bhv_trail_pellet_loop, "id_bhvTrailPellet")

---@param o Object
local function bhv_aim_pellet_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oGravity = 0
end

local pelletTurnRadius = 0x300

---@param o Object
local function bhv_aim_pellet_loop(o)
    local m = obj_get_owner_mario(o)
    local e = gExtrasStates[m.playerIndex]

    if m.action ~= ACT_PAC_POWER_PELLET then
        obj_mark_for_deletion(o)
    end

    if m.actionState == 0 then
        local angle = 0 + (m.controller.buttonDown & A_BUTTON ~= 0 and 0x4000 or 0) - (m.controller.buttonDown & Z_TRIG ~= 0 and 0x4000 or 0)
        angle = angle * (1 - m.intendedMag / 64)
        o.oMoveAnglePitch = angle - approach_s32(math.s16(angle - o.oMoveAnglePitch), 0, pelletTurnRadius, pelletTurnRadius);

        if m.intendedMag > 2 then
            o.oMoveAngleYaw = m.intendedYaw - approach_s32(math.s16(m.intendedYaw - o.oMoveAngleYaw), 0, pelletTurnRadius, pelletTurnRadius);
        end

        o.oVelY = 40*sins(o.oMoveAnglePitch)
        o.oForwardVel = 40*coss(o.oMoveAnglePitch)

        object_step()

        if o.oTimer%5 == 0 then
            djui_chat_message_create(tostring(not e.pelletPath[#e.pelletPath] or vec3f_dist({x = o.oPosX, y = o.oPosY, z = o.oPosZ}, e.pelletPath[#e.pelletPath])))
            if not e.pelletPath[#e.pelletPath] or vec3f_dist({x = o.oPosX, y = o.oPosY, z = o.oPosZ}, e.pelletPath[#e.pelletPath]) > 150 then
                spawn_non_sync_object(id_bhvTrailPellet, E_MODEL_PACDOT, o.oPosX, o.oPosY, o.oPosZ, function (tO)
                    tO.globalPlayerIndex = o.globalPlayerIndex
                end)
            end
        end
    else
        if vec3f_dist(m.pos, {x = o.oPosX, y = o.oPosY, z = o.oPosZ}) < 100 then
            obj_mark_for_deletion(o)
        end
    end
end

id_bhvAimPellet = hook_behavior(nil, OBJ_LIST_DEFAULT, true, bhv_aim_pellet_init, bhv_aim_pellet_loop, "id_bhvAimPellet")

function get_pellet_trail(m)
    local globalIndex = network_global_index_from_local(m.playerIndex)
    local o = obj_get_first_with_behavior_id(id_bhvAimPellet)
    while o ~= nil do
        if o.globalPlayerIndex == globalIndex then
            return o
        end
        o = obj_get_next_with_same_behavior_id(o)
    end
end

function spawn_pellet_trail(m)
    local globalIndex = network_global_index_from_local(m.playerIndex)

    local trail = get_pellet_trail(m)

    if trail == nil and m.playerIndex == 0 then
        return spawn_sync_object(id_bhvAimPellet, E_MODEL_PACPELLET, m.pos.x, m.pos.y, m.pos.z, function(o)
            o.globalPlayerIndex = globalIndex
            o.oMoveAngleYaw = m.faceAngle.y
        end)
    else
        return trail
    end
end
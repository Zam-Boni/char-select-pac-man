SAMPLE_BOUNCE = audio_sample_load("zbpmsfx-bounce.ogg")
SAMPLE_TAKE_OFF = audio_sample_load("zbpmsfx-takeoff.ogg")

local PAC_MAN_MAX_SPEED = 40

local gExtrasStates = {}
for i = 0, MAX_PLAYERS - 1 do
    gExtrasStates[i] = {
        revAudio = audio_stream_load("zbpmsfx-revup.ogg"),
        bounceCount = 0,
        forceDefaultWalk = false
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

local function update_walking_speed(m)
    if not m then return end
    local maxTargetSpeed = PAC_MAN_MAX_SPEED

    local slipperyFloor = ((m.area.terrainType & TERRAIN_MASK) == TERRAIN_SNOW and (m.floor ~= nil and m.floor.type & SURFACE_CLASS_SLIPPERY | SURFACE_CLASS_VERY_SLIPPERY ~= 0 ));

    if (m.floor ~= nil) then
        if (m.floor.type == SURFACE_SLOW) then
            maxTargetSpeed = PAC_MAN_MAX_SPEED*0.75
        end
    end

    local targetSpeed = math.min(m.intendedMag/32*maxTargetSpeed, maxTargetSpeed)

    if (m.quicksandDepth > 10.0) then
        targetSpeed = targetSpeed * 6.25 / m.quicksandDepth;
    end

    if (m.forwardVel <= 0.0) then
        m.forwardVel = m.forwardVel + 1.1;
    elseif (m.forwardVel <= targetSpeed) then
        m.forwardVel = m.forwardVel + 1.1 - m.forwardVel / 43.0;
    elseif (m.floor ~=nil and m.floor.normal.y >= 0.95) then
        m.forwardVel = m.forwardVel - 1.0;
    end

    if (m.forwardVel > 48.0) then
        m.forwardVel = 48.0;
    end

    m.faceAngle.y = lerp_s16(m.faceAngle.y, m.intendedYaw, 0.3);
    apply_slope_accel(m);
end

local function pac_update_air_with_turn(m)
    if not m then return end

    if (check_horizontal_wind(m) == 0) then
        local dragThreshold = m.action == ACT_LONG_JUMP and 48.0 or 32.0;
        m.forwardVel = approach_f32(m.forwardVel, 0.0, 0.35, 0.35);

        local intendedDYaw = m.intendedYaw - m.faceAngle.y;
        local intendedMag = m.intendedMag / 32.0;

        m.forwardVel = m.forwardVel + 1.5 * coss(intendedDYaw) * intendedMag;
        m.faceAngle.y = lerp_s16(m.faceAngle.y, m.intendedYaw, 0.3);

        m.forwardVel = math.min(m.forwardVel, dragThreshold)
        if (m.forwardVel < -16.0) then
            m.forwardVel = m.forwardVel + 2.0;
        end

        m.slideVelX = m.forwardVel * sins(m.faceAngle.y);
        m.slideVelZ = m.forwardVel * coss(m.faceAngle.y);
        m.vel.x = math.lerp(m.vel.x, m.slideVelX, 0.2)
        m.vel.z = math.lerp(m.vel.z, m.slideVelZ, 0.2)
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
        set_character_animation(m, animation);
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
    if (slopeDif > 0.4 and (velAngle < slope - 0.1 or velAngle > slope + 0.1) and prevSlope < 0) or (m.pos.y > m.floorHeight + 10) then
        m.vel.y = velY
        m.forwardVel = velF
        e.floorSteep = nil
        return set_mario_action(m, airAction, arg)
    end

    return 0
end

local ACT_PAC_WALKING = allocate_mario_action(ACT_GROUP_MOVING)
local ACT_PAC_JUMP = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION)
local ACT_PAC_FREEFALL = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION)
local ACT_PAC_KICK = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION)
local ACT_PAC_REV_CHARGE = allocate_mario_action(ACT_GROUP_STATIONARY)
local ACT_PAC_REV_ROLL = allocate_mario_action(ACT_GROUP_MOVING)
local ACT_PAC_REV_ROLL_AIR = allocate_mario_action(ACT_GROUP_AIRBORNE)
local ACT_PAC_BUTT_BOUNCE = allocate_mario_action(ACT_GROUP_AIRBORNE)
local ACT_PAC_BUTT_BOUNCE_LAND = allocate_mario_action(ACT_GROUP_MOVING)

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
        return set_mario_action(m, ACT_BEGIN_SLIDING, 0);
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
        return begin_braking_action(m);
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

---@param m MarioState
local function act_pac_jump(m)
    if not m then return 0 end
    local e = gExtrasStates[m.playerIndex]

    local anim = CHAR_ANIM_SINGLE_JUMP
    if e.bounceCount > 0 then
        anim = CHAR_ANIM_GROUND_POUND
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

    pac_air_action_step(m, ACT_FREEFALL_LAND_STOP, anim, 0);
    if (m.action == ACT_FREEFALL_LAND_STOP) then
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

    pac_air_action_step(m, ACT_FREEFALL_LAND_STOP, CHAR_ANIM_GENERAL_FALL, 0);
    if (m.action == ACT_FREEFALL_LAND_STOP) then
        e.bounceCount = 0
        queue_rumble_data_mario(m, 5, 40);
    end
    return 0;
end

local function act_pac_kick(m)
    if not m then return 0 end
    if m.actionState == 0 then
        set_mario_y_vel_based_on_fspeed(m, m.vel.y > 0 and m.vel.y*0.6 or m.vel.y, 0.0)
        m.actionState = m.actionState + 1
    end

    play_mario_sound(m, SOUND_ACTION_TERRAIN_JUMP, CHAR_SOUND_YAHOO);

    pac_air_action_step(m, ACT_FREEFALL_LAND_STOP, CHAR_ANIM_AIR_KICK, 0);
    if (m.action == ACT_FREEFALL_LAND_STOP) then
        queue_rumble_data_mario(m, 5, 40);
    end
    return 0;
end

---@param m MarioState
local function act_pac_rev_charge(m)
    if not m then return 0 end
    local e = gExtrasStates[m.playerIndex]
    if m.pos.y > m.floorHeight + 10 then
        return set_mario_action(m, ACT_PAC_KICK, 0)
    end

    local distFromCam = m.playerIndex == 0 and 0.5 or math.clamp(500/vec3f_dist(m.pos, gLakituState.pos), 0, 0.5)
    if m.playerIndex ~= 0 then
        djui_chat_message_create(tostring(distFromCam))
    end
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
                o.oPosX = o.oPosX + (random_float() * 80.0) - 40;
                o.oPosZ = o.oPosZ + (random_float() * 80.0) - 40;
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

    local detach = mario_detatch_from_floor(m, gExtrasStates[m.playerIndex], ACT_PAC_REV_ROLL_AIR, m.actionTimer)
    if detach ~= 0 then
        return detach
    end

    local step = perform_ground_step(m)
    if step == AIR_STEP_HIT_WALL then
        mario_bonk_reflection(m, 0)
        m.forwardVel = m.forwardVel * 0.8
    end
    set_character_animation(m, CHAR_ANIM_FORWARD_SPINNING)

    if m.actionState == 0 then
        if m.prevAction ~= ACT_PAC_REV_ROLL_AIR then
            m.forwardVel = 100
        end
        m.actionTimer = m.actionArg
        m.actionState = m.actionState + 1
    end
    apply_slope_accel(m)
    if (m.input & INPUT_A_PRESSED ~= 0) then
        return set_mario_action(m, ACT_PAC_JUMP, 0);
    end

    m.marioObj.header.gfx.animInfo.animAccel = 0x800 * m.forwardVel

    m.faceAngle.y = m.intendedYaw - approach_s32(math.s16(m.intendedYaw - m.faceAngle.y), 0, 0xA00, 0xA00);

    m.vel.x = m.forwardVel * sins(m.faceAngle.y)
    m.vel.z = m.forwardVel * coss(m.faceAngle.y)

    if m.actionTimer == 0 then
        set_mario_action(m, ACT_BRAKING, 0)
    end

    m.actionTimer = math.max(m.actionTimer - 1, 0)
end

---@param m MarioState
local function act_pac_rev_roll_air(m)
    if not m then return 0 end
    local step = perform_air_step(m, AIR_STEP_NONE)
    if step == AIR_STEP_LANDED then
        set_mario_action(m, ACT_PAC_REV_ROLL, 0);
    end
    set_character_animation(m, CHAR_ANIM_FORWARD_SPINNING)

    if m.actionState == 0 then
        m.actionTimer = m.actionArg
        m.actionState = m.actionState + 1
    end
    
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

    if m.actionState == 0 then
        m.actionState = m.actionState + 1
    end

    pac_air_action_step(m, ACT_PAC_BUTT_BOUNCE_LAND, CHAR_ANIM_START_GROUND_POUND, 0);
    if (m.action == ACT_PAC_BUTT_BOUNCE_LAND) then
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

hook_mario_action(ACT_PAC_WALKING, act_pac_walking)
hook_mario_action(ACT_PAC_JUMP, {every_frame = act_pac_jump, gravity = pac_gravity})
hook_mario_action(ACT_PAC_FREEFALL, {every_frame = act_pac_freefall, gravity = pac_gravity})
hook_mario_action(ACT_PAC_KICK, {every_frame = act_pac_kick, gravity = pac_gravity}, INT_KICK)
hook_mario_action(ACT_PAC_REV_CHARGE, act_pac_rev_charge)
hook_mario_action(ACT_PAC_REV_ROLL, act_pac_rev_roll, INT_PUNCH)
hook_mario_action(ACT_PAC_REV_ROLL_AIR, {every_frame = act_pac_rev_roll_air, gravity = pac_gravity}, INT_PUNCH)
hook_mario_action(ACT_PAC_BUTT_BOUNCE, {every_frame = act_pac_butt_bounce, gravity = pac_butt_bounce_gravity}, INT_GROUND_POUND)
hook_mario_action(ACT_PAC_BUTT_BOUNCE_LAND, act_pac_butt_bounce_land, INT_GROUND_POUND)

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

    [ACT_START_CROUCHING] = false,
    [ACT_STOP_CROUCHING] = false,
    [ACT_CROUCHING] = false,
    [ACT_CROUCH_SLIDE] = false,
}

local function before_pac_action(m, nextAct)
    local e = gExtrasStates[m.playerIndex]
    audio_stream_pause(e.revAudio)
    if overrideActs[nextAct] then
        if overrideActs[nextAct] ~= false then
            if nextAct ~= ACT_WALKING or not e.forceDefaultWalk then
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

    if type == INTERACT_COIN then

    end
end

local wakaSound = audio_sample_load("zbpm-credit.ogg")
local fruitSound = audio_sample_load("zbpm-fruit.ogg")
local function on_play_sound(sound, pos)
    local pos = {
        x = pos.x - gMarioStates[0].marioObj.header.gfx.cameraToObject.x,
        y = pos.y - gMarioStates[0].marioObj.header.gfx.cameraToObject.y,
        z = pos.z - gMarioStates[0].marioObj.header.gfx.cameraToObject.z,
    }
    if sound == SOUND_GENERAL_COIN then
        djui_chat_message_create(tostring(pos.x))
        djui_chat_message_create(tostring(pos.y))
        djui_chat_message_create(tostring(pos.z))
        audio_sample_play(wakaSound, pos, 1)
        return NO_SOUND
    end
    if sound == SOUND_GENERAL_RED_COIN or sound == SOUND_MENU_COLLECT_RED_COIN then
        audio_sample_play(fruitSound, pos, 1)
        return NO_SOUND
    end
end

hook_pac_event(HOOK_BEFORE_SET_MARIO_ACTION, before_pac_action)
hook_pac_event(HOOK_ON_INTERACT, on_interact)
hook_pac_event(HOOK_ON_PLAY_SOUND, on_play_sound)
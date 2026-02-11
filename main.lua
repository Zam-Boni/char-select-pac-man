-- name: [CS] Pac-Man
-- description: The Pac has never been more back! Unless you count all those other times\n\nModels by: Zam Boni\nMoveset by: Squishy6094\n\n\\#ff7777\\This Pack requires Character Select\nto use as a Library!

--[[
    API Documentation for Character Select can be found below:
    https://github.com/Squishy6094/character-select-coop/wiki/API-Documentation

    Use this if you're curious on how anything here works >v<
]]

-- Replace Mod Name with your Character/Pack name.
local TEXT_MOD_NAME = "Pac-Man"

-- Stops mod from loading if Character Select isn't on, Does not need to be touched
if not _G.charSelectExists then
    djui_popup_create("\\#ffffdc\\\n"..TEXT_MOD_NAME.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
    return 0
end

--[[
    Everything from here down is character data, and is loaded at the end of the file

    Note that most things here are noted out via use of '--', if there is any
    functionality you'd want to use then remove the '--' in front of the functions.

    If needbe, Replace CHAR in the tables with your character's name
    Ex: E_MODEL_CHAR -> E_MODEL_SQUISHY

    Ensure all file naming is unique from other mods.
    Prefixing your files with your character's name should work fine
    Ex: life-icon.png -> squis
]]

local E_MODEL_ZBPACMAN =      smlua_model_util_get_id("zbpacman_geo")      -- Located in "actors"
local E_MODEL_ZBPACMANR =      smlua_model_util_get_id("zbpacman_r_geo")
local E_MODEL_ZBMSPACMAN =      smlua_model_util_get_id("zbmspacman_geo")
local E_MODEL_ZBMSPACMANR =      smlua_model_util_get_id("zbmspacman_r_geo")
local E_MODEL_ZBBLINKY =      smlua_model_util_get_id("zbblinky_geo")
local E_MODEL_ZBBLINKYR =      smlua_model_util_get_id("zbblinky_r_geo")
local E_MODEL_ZBINKY =      smlua_model_util_get_id("zbinky_geo")
local E_MODEL_ZBINKYR =      smlua_model_util_get_id("zbinky_r_geo")
-- local E_MODEL_CHAR_STAR = smlua_model_util_get_id("custom_model_star_geo") -- Located in "actors"

local TEX_ZBPACMAN_LIFE_ICON = get_texture_info("zbpm-icon") -- Located in "textures"
local TEX_ZBMSPACMAN_LIFE_ICON = get_texture_info("zbmpm-icon")
local TEX_ZBBLINKY_LIFE_ICON = get_texture_info("zbbl-icon")
local TEX_ZBINKY_LIFE_ICON = get_texture_info("zbin-icon")
-- local TEX_CHAR_STAR_ICON = get_texture_info("exclamation-icon") -- Located in "textures"

-- All sound files are located in "sound" folder
-- Remember to include the file extention in the name
local VOICETABLE_ZBPACMAN = {
    [CHAR_SOUND_OKEY_DOKEY] =        'zbpm-credit.ogg', -- Starting game
	[CHAR_SOUND_LETS_A_GO] =         'zbpm-credit.ogg', -- Starting level
	[CHAR_SOUND_GAME_OVER] =         'zbpm-die.ogg', -- Game Overed
	[CHAR_SOUND_PUNCH_YAH] =         'zbpm-punch1.ogg', -- Punch 1
	[CHAR_SOUND_PUNCH_WAH] =         'zbpm-punch2.ogg', -- Punch 2
	[CHAR_SOUND_PUNCH_HOO] =         'zbpm-kick.ogg', -- Punch 3
	[CHAR_SOUND_YAH_WAH_HOO] =       'zbpm-jump1.ogg', -- First Jump Sounds
	[CHAR_SOUND_HOOHOO] =            'zbpm-jump2.ogg', -- Second jump sound
	[CHAR_SOUND_YAHOO_WAHA_YIPPEE] = 'zbpm-jump3.ogg', -- Triple jump sounds
	[CHAR_SOUND_UH] =                'zbpm-punch1.ogg', -- Soft wall bonk
	[CHAR_SOUND_UH2] =               'zbpm-punch2.ogg', -- Quick ledge get up
	[CHAR_SOUND_UH2_2] =             'zbpm-punch1.ogg', -- Landing after long jump
	[CHAR_SOUND_DOH] =               'zbpm-punch1.ogg', -- Hard wall bonk
	[CHAR_SOUND_OOOF] =              'zbpm-hurt.ogg', -- Attacked in air
	[CHAR_SOUND_OOOF2] =             'zbpm-hurt.ogg', -- Land from hard bonk
	[CHAR_SOUND_HAHA] =              'zbpm-fruit.ogg', -- Landing triple jump
	[CHAR_SOUND_YAHOO] =             'zbpm-longjump.ogg', -- Long jump
	[CHAR_SOUND_DOH] =               'zbpm-punch1.ogg', -- Long jump wall bonk
	[CHAR_SOUND_WHOA] =              'zbpm-punch1.ogg', -- Grabbing ledge
	[CHAR_SOUND_EEUH] =              'zbpm-kick.ogg', -- Climbing over ledge
	[CHAR_SOUND_WAAAOOOW] =          'zbpm-scream.ogg', -- Falling a long distance
	[CHAR_SOUND_TWIRL_BOUNCE] =      'zbpm-longjump.ogg', -- Bouncing off of a flower spring
	[CHAR_SOUND_GROUND_POUND_WAH] =  'zbpm-fruit.ogg', -- Ground Pound after startup
	[CHAR_SOUND_WAH2] =              'zbpm-hurt.ogg', -- Throwing something
	[CHAR_SOUND_HRMM] =              'zbpm-kick.ogg', -- Lifting something
	[CHAR_SOUND_HERE_WE_GO] =        'zbpm-credit.ogg', -- Star get
	[CHAR_SOUND_SO_LONGA_BOWSER] =   'zbpm-hothot.ogg', -- Throwing Bowser
--DAMAGE
	[CHAR_SOUND_ATTACKED] =          'zbpm-hurt.ogg', -- Damaged
	[CHAR_SOUND_PANTING] =           'zbpm-punch1.ogg', -- Low health
	[CHAR_SOUND_PANTING_COLD] =      'zbpm-punch2.ogg', -- Getting cold
	[CHAR_SOUND_ON_FIRE] =           'zbpm-hothot.ogg', -- Burned
--COUGHING (USED IN THE GAS MAZE)
	[CHAR_SOUND_COUGHING1] =         'zbpm-punch1.ogg', -- Cough take 1
	[CHAR_SOUND_COUGHING2] =         'zbpm-punch1.ogg', -- Cough take 2
	[CHAR_SOUND_COUGHING3] =         'zbpm-punch2.ogg', -- Cough take 3
--DEATH
	[CHAR_SOUND_DYING] =             'zbpm-die.ogg', -- Dying from damage
	[CHAR_SOUND_DROWNING] =          'zbpm-die.ogg', -- Running out of air underwater
	[CHAR_SOUND_MAMA_MIA] =          'zbpm-credit.ogg' -- Booted out of level
}

local VOICETABLE_ZBGHOST = {
    [CHAR_SOUND_OKEY_DOKEY] =        'zbbl-siren.ogg', -- Starting game
	[CHAR_SOUND_LETS_A_GO] =         'zbbl-siren.ogg', -- Starting level
	[CHAR_SOUND_GAME_OVER] =         'zbbl-die.ogg', -- Game Overed
	[CHAR_SOUND_PUNCH_YAH] =         'zbpm-punch1.ogg', -- Punch 1
	[CHAR_SOUND_PUNCH_WAH] =         'zbpm-punch2.ogg', -- Punch 2
	[CHAR_SOUND_PUNCH_HOO] =         'zbpm-kick.ogg', -- Punch 3
	[CHAR_SOUND_YAH_WAH_HOO] =       'zbbl-siren.ogg', -- First Jump Sounds
	[CHAR_SOUND_HOOHOO] =            'zbbl-siren2.ogg', -- Second jump sound
	[CHAR_SOUND_YAHOO_WAHA_YIPPEE] = 'zbbl-siren4.ogg', -- Triple jump sounds
	[CHAR_SOUND_UH] =                'zbbl-siren2.ogg', -- Soft wall bonk
	[CHAR_SOUND_UH2] =               'zbbl-siren4.ogg', -- Quick ledge get up
	[CHAR_SOUND_UH2_2] =             'zbbl-siren.ogg', -- Landing after long jump
	[CHAR_SOUND_DOH] =               'zbbl-siren4.ogg', -- Hard wall bonk
	[CHAR_SOUND_OOOF] =              'zbbl-hurt.ogg', -- Attacked in air
	[CHAR_SOUND_OOOF2] =             'zbbl-hurt.ogg', -- Land from hard bonk
	[CHAR_SOUND_HAHA] =              'zbpm-fruit.ogg', -- Landing triple jump
	[CHAR_SOUND_YAHOO] =             'zbpm-longjump.ogg', -- Long jump
	[CHAR_SOUND_DOH] =               'zbbl-siren4.ogg', -- Long jump wall bonk
	[CHAR_SOUND_WHOA] =              'zbbl-siren4.ogg', -- Grabbing ledge
	[CHAR_SOUND_EEUH] =              'zbpm-kick.ogg', -- Climbing over ledge
	[CHAR_SOUND_WAAAOOOW] =          'zbbl-die.ogg', -- Falling a long distance
	[CHAR_SOUND_TWIRL_BOUNCE] =      'zbpm-longjump.ogg', -- Bouncing off of a flower spring
	[CHAR_SOUND_GROUND_POUND_WAH] =  'zbpm-fruit.ogg', -- Ground Pound after startup
	[CHAR_SOUND_WAH2] =              'zbbl-hurt.ogg', -- Throwing something
	[CHAR_SOUND_HRMM] =              'zbpm-kick.ogg', -- Lifting something
	[CHAR_SOUND_HERE_WE_GO] =        'zbbl-siren.ogg', -- Star get
	[CHAR_SOUND_SO_LONGA_BOWSER] =   'zbpm-hothot.ogg', -- Throwing Bowser
--DAMAGE
	[CHAR_SOUND_ATTACKED] =          'zbbl-hurt.ogg', -- Damaged
	[CHAR_SOUND_PANTING] =           'zbbl-siren.ogg', -- Low health
	[CHAR_SOUND_PANTING_COLD] =      'zbbl-siren2.ogg', -- Getting cold
	[CHAR_SOUND_ON_FIRE] =           'zbbl-die.ogg', -- Burned
--COUGHING (USED IN THE GAS MAZE)
	[CHAR_SOUND_COUGHING1] =         'zbbl-hurt.ogg', -- Cough take 1
	[CHAR_SOUND_COUGHING2] =         'zbbl-hurt.ogg', -- Cough take 2
	[CHAR_SOUND_COUGHING3] =         'zbbl-hurt.ogg', -- Cough take 3
--DEATH
	[CHAR_SOUND_DYING] =             'zbbl-die.ogg', -- Dying from damage
	[CHAR_SOUND_DROWNING] =          'zbbl-die.ogg', -- Running out of air underwater
	[CHAR_SOUND_MAMA_MIA] =          'zbbl-siren.ogg' -- Booted out of level
}

-- All Located in "actors" folder
-- (Models do not exist in template)
--[[
local CAPTABLE_CHAR = {
    normal = smlua_model_util_get_id("FILENAME_geo"),
    wing = smlua_model_util_get_id("FILENAME_geo"),
    metal = smlua_model_util_get_id("FILENAME_geo"),
}
]]

local PALETTES_ZBPACMAN = {
    {
        name = "Default",
        [PANTS]  = "ff003b",
        [SHIRT]  = "ffbe00",
        [GLOVES] = "ff5f00",
        [CAP]    = "ffbe00",
        [EMBLEM] = "000000",
    },
    {
        name = "Blinky",
        [PANTS]  = "0D00FF",
        [SHIRT]  = "FF2100",
        [GLOVES] = "ff5f00",
        [CAP]    = "FF2100",
        [EMBLEM] = "000000",
    },
    {
        name = "Pinky",
        [PANTS]  = "0D00FF",
        [SHIRT]  = "FF6CFA",
        [GLOVES] = "ff5f00",
        [CAP]    = "FF6CFA",
        [EMBLEM] = "000000",
    },
    {
        name = "Inky",
        [PANTS]  = "0D00FF",
        [SHIRT]  = "1DC1FF",
        [GLOVES] = "ff5f00",
        [CAP]    = "1DC1FF",
        [EMBLEM] = "000000",
    },
    {
        name = "Clyde",
        [PANTS]  = "0D00FF",
        [SHIRT]  = "ff5f00",
        [GLOVES] = "FF2100",
        [CAP]    = "ff5f00",
        [EMBLEM] = "000000",
    },
    {
        name = "Sue",
        [PANTS]  = "0D00FF",
        [SHIRT]  = "6d00ff",
        [GLOVES] = "ff5f00",
        [CAP]    = "6d00ff",
        [EMBLEM] = "000000",
    },
    {
        name = "Funky",
        [PANTS]  = "0D00FF",
        [SHIRT]  = "049300",
        [GLOVES] = "FF2100",
        [CAP]    = "049300",
        [EMBLEM] = "000000",
    },
    {
        name = "Kinzo",
        [PANTS]  = "0D00FF",
        [SHIRT]  = "ffbe00",
        [GLOVES] = "FFFFFF",
        [CAP]    = "ffbe00",
        [EMBLEM] = "000000",
    },
    {
        name = "Orson",
        [PANTS]  = "0D00FF",
        [SHIRT]  = "6d9a73",
        [GLOVES] = "007754",
        [CAP]    = "6d9a73",
        [EMBLEM] = "000000",
    },
    {
        name = "TURN-TO-BLUE",
        [PANTS]  = "0D00FF",
        [SHIRT]  = "000000",
        [GLOVES] = "0D00FF",
        [CAP]    = "0D00FF",
        [EMBLEM] = "FFB7AE",
    },
    {
        name = "Miru",
        [PANTS]  = "FF24BE",
        [SHIRT]  = "26D24E",
        [GLOVES] = "FF24BE",
        [CAP]    = "26D24E",
        [EMBLEM] = "000000",
    },
    {
        name = "Sir Cumference",
        [PANTS]  = "382836",
        [SHIRT]  = "A9FF42",
        [GLOVES] = "382836",
        [CAP]    = "A9FF42",
        [EMBLEM] = "000000",
    },
    {
        name = "Betrayus",
        [PANTS]  = "FF4345",
        [SHIRT]  = "382836",
        [GLOVES] = "FF4345",
        [CAP]    = "FFFFFF",
        [EMBLEM] = "FF4345",
    },
    {
        name = "Shadow Labyrinth",
        [PANTS]  = "000000",
        [SHIRT]  = "000000",
        [GLOVES] = "000000",
        [CAP]    = "000000",
        [EMBLEM] = "FF634D",
    },
    {
        name = "Pooka",
        [PANTS]  = "ff0032",
        [SHIRT]  = "ffd800",
        [GLOVES] = "ff0032",
        [CAP]    = "ff0032",
        [EMBLEM] = "000000",
    },
    {
        name = "Fygar",
        [PANTS]  = "ff1d00",
        [SHIRT]  = "ffffff",
        [GLOVES] = "ff1d00",
        [CAP]    = "00be21",
        [EMBLEM] = "000000",
    },
}

local ANIMS_PACMAN = {
    [CHAR_ANIM_RUNNING] = ANIM_PAC_RUNNING,
    [CHAR_ANIM_FIRST_PERSON] = ANIM_PAC_IDLE,
    [CHAR_ANIM_IDLE_HEAD_LEFT] = ANIM_PAC_IDLE,
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = ANIM_PAC_IDLE,
    [CHAR_ANIM_IDLE_HEAD_CENTER] = ANIM_PAC_IDLE,
    [CHAR_ANIM_SINGLE_JUMP] = ANIM_PAC_JUMP,
    [CHAR_ANIM_DOUBLE_JUMP_RISE] = ANIM_PAC_W2_JUMP1,
    [CHAR_ANIM_DOUBLE_JUMP_FALL] = ANIM_PAC_W2_JUMP2,
    [CHAR_ANIM_FAST_LONGJUMP] = ANIM_PAC_LONGJUMP,
    [CHAR_ANIM_GROUND_POUND] = ANIM_PAC_BUTT_BOUNCE,
    [CHAR_ANIM_START_GROUND_POUND] = ANIM_PAC_BUTT_BOUNCE2,
    [CHAR_ANIM_AIR_KICK] = ANIM_PAC_FLIP_KICK,
    [CHAR_ANIM_GROUND_KICK] = ANIM_PAC_FLIP_KICK,
    [CHAR_ANIM_RUNNING_UNUSED] = ANIM_PAC_REV_CHARGE,
    [CHAR_ANIM_FORWARD_SPINNING] = ANIM_PAC_REV_ROLL,
}

local ANIMS_BLINKY = {
    [CHAR_ANIM_RUNNING] = ANIM_BLINKY_RUNNING,
    [CHAR_ANIM_FIRST_PERSON] = ANIM_BLINKY_IDLE,
    [CHAR_ANIM_IDLE_HEAD_LEFT] = ANIM_BLINKY_IDLE,
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = ANIM_BLINKY_IDLE,
    [CHAR_ANIM_IDLE_HEAD_CENTER] = ANIM_BLINKY_IDLE,
    [CHAR_ANIM_SINGLE_JUMP] = ANIM_BLINKY_JUMP,
    [CHAR_ANIM_FAST_LONGJUMP] = ANIM_BLINKY_LONGJUMP,
}
local ANIMS_INKY = {
    [CHAR_ANIM_RUNNING] = ANIM_INKY_RUNNING,
    [CHAR_ANIM_FIRST_PERSON] = ANIM_INKY_IDLE,
    [CHAR_ANIM_IDLE_HEAD_LEFT] = ANIM_INKY_IDLE,
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = ANIM_INKY_IDLE,
    [CHAR_ANIM_IDLE_HEAD_CENTER] = ANIM_INKY_IDLE,
    [CHAR_ANIM_SINGLE_JUMP] = ANIM_INKY_JUMP,
    [CHAR_ANIM_FAST_LONGJUMP] = ANIM_INKY_LONGJUMP,
}

-- All Located in "textures" folder
-- (Textures do not exist in template)
--[[
local HEALTH_METER_CHAR = {
    label = {
        left = get_texture_info("healthleft"),
        right = get_texture_info("healthright"),
    },
    pie = {
        [1] = get_texture_info("Pie1"),
        [2] = get_texture_info("Pie2"),
        [3] = get_texture_info("Pie3"),
        [4] = get_texture_info("Pie4"),
        [5] = get_texture_info("Pie5"),
        [6] = get_texture_info("Pie6"),
        [7] = get_texture_info("Pie7"),
        [8] = get_texture_info("Pie8"),
    }
}
]]

--[[
    Everything from here down where the data is applied

    Note that nothing here other than the 'character_add' function
    is required for a custom character, if you don't have the assets
    then feel free to remove the function from the functions below
]]

-- Adds the custom character to the Character Select Menu
CT_ZBPACMAN = _G.charSelect.character_add(
    "Pac-Man", -- Character Name
    "Local citizens are worried that this hungry outsider's visit will result in a fever outbreak.", -- Description
    "Zam Boni", -- Credits
    "ffff00",           -- Menu Color
    E_MODEL_ZBPACMAN,       -- Character Model
    CT_MARIO,           -- Override Character
    TEX_ZBPACMAN_LIFE_ICON, -- Life Icon
    1                  -- Camera Scale
)
CT_ZBMSPACMAN = _G.charSelect.character_add(
    "Ms. Pac-Man", -- Character Name
    "She's as beautiful as the day we lost her.", -- Description
    "Zam Boni", -- Credits
    "FFFF7E",           -- Menu Color
    E_MODEL_ZBMSPACMAN,       -- Character Model
    CT_MARIO,           -- Override Character
    TEX_ZBMSPACMAN_LIFE_ICON, -- Life Icon
    1                  -- Camera Scale
)
CT_ZBBLINKY = _G.charSelect.character_add(
    "Blinky", -- Character Name
    "Always going straight for the goal is an exceedingly simple yet effective strategy.", -- Description
    "Zam Boni", -- Credits
    "FF0025",           -- Menu Color
    E_MODEL_ZBBLINKY,       -- Character Model
    CT_MARIO,           -- Override Character
    TEX_ZBBLINKY_LIFE_ICON, -- Life Icon
    1                  -- Camera Scale
)
CT_ZBINKY = _G.charSelect.character_add(
    "Inky", -- Character Name
    "You could just chase after the guy, or you could calculate the optimal path by looking two spaces in front of him then drawing a line from there to Blinky and then rotating said line 180 degrees anchored by the space in front of your target.", -- Description
    "Zam Boni", -- Credits
    "00D6FF",           -- Menu Color
    E_MODEL_ZBINKY,       -- Character Model
    CT_MARIO,           -- Override Character
    TEX_ZBINKY_LIFE_ICON, -- Life Icon
    1                  -- Camera Scale
)

-- Adds cap models to your character
-- (Models do not exist in template)
-- _G.charSelect.character_add_caps(E_MODEL_CHAR, CAPTABLE_CHAR)

_G.charSelect.character_add_menu_instrumental(CT_ZBPACMAN, audio_stream_load("zbpm-tune.ogg"))
_G.charSelect.character_add_menu_instrumental(CT_ZBMSPACMAN, audio_stream_load("zbpm-tune.ogg"))
_G.charSelect.character_add_menu_instrumental(CT_ZBBLINKY, audio_stream_load("zbpm-tune.ogg"))
_G.charSelect.character_add_menu_instrumental(CT_ZBINKY, audio_stream_load("zbpm-tune.ogg"))

-- Adds a voice to your character
-- (Sounds do not exist in template)
_G.charSelect.character_add_voice(E_MODEL_ZBPACMAN, VOICETABLE_ZBPACMAN)
_G.charSelect.character_add_voice(E_MODEL_ZBPACMANR, VOICETABLE_ZBPACMAN)
_G.charSelect.character_add_voice(E_MODEL_ZBMSPACMAN, VOICETABLE_ZBPACMAN)
_G.charSelect.character_add_voice(E_MODEL_ZBMSPACMANR, VOICETABLE_ZBPACMAN)
_G.charSelect.character_add_voice(E_MODEL_ZBBLINKY, VOICETABLE_ZBGHOST)
_G.charSelect.character_add_voice(E_MODEL_ZBBLINKYR, VOICETABLE_ZBGHOST)
_G.charSelect.character_add_voice(E_MODEL_ZBINKY, VOICETABLE_ZBGHOST)
_G.charSelect.character_add_voice(E_MODEL_ZBINKYR, VOICETABLE_ZBGHOST)

_G.charSelect.character_add_animations(E_MODEL_ZBPACMAN, ANIMS_PACMAN)
_G.charSelect.character_add_animations(E_MODEL_ZBPACMANR, ANIMS_PACMAN)
_G.charSelect.character_add_animations(E_MODEL_ZBMSPACMAN, ANIMS_PACMAN)
_G.charSelect.character_add_animations(E_MODEL_ZBMSPACMANR, ANIMS_PACMAN)
_G.charSelect.character_add_animations(E_MODEL_ZBBLINKY, ANIMS_BLINKY)
_G.charSelect.character_add_animations(E_MODEL_ZBBLINKYR, ANIMS_BLINKY)
_G.charSelect.character_add_animations(E_MODEL_ZBINKY, ANIMS_INKY)
_G.charSelect.character_add_animations(E_MODEL_ZBINKYR, ANIMS_INKY)

-- Adds a celebration star to your character
-- (Models do not exist in template)
--_G.charSelect.character_add_celebration_star(E_MODEL_CHAR, E_MODEL_CHAR_STAR, TEX_CHAR_STAR_ICON)

-- Adds a palette to your character
for i = 1, #PALETTES_ZBPACMAN do
    _G.charSelect.character_add_palette_preset(E_MODEL_ZBPACMAN, PALETTES_ZBPACMAN[i], PALETTES_ZBPACMAN[i].name)
    _G.charSelect.character_add_palette_preset(E_MODEL_ZBPACMANR, PALETTES_ZBPACMAN[i], PALETTES_ZBPACMAN[i].name)
    _G.charSelect.character_add_palette_preset(E_MODEL_ZBMSPACMAN, PALETTES_ZBPACMAN[i], PALETTES_ZBPACMAN[i].name)
    _G.charSelect.character_add_palette_preset(E_MODEL_ZBMSPACMANR, PALETTES_ZBPACMAN[i], PALETTES_ZBPACMAN[i].name)
    _G.charSelect.character_add_palette_preset(E_MODEL_ZBBLINKY, PALETTES_ZBPACMAN[i], PALETTES_ZBPACMAN[i].name)
    _G.charSelect.character_add_palette_preset(E_MODEL_ZBBLINKYR, PALETTES_ZBPACMAN[i], PALETTES_ZBPACMAN[i].name)
    _G.charSelect.character_add_palette_preset(E_MODEL_ZBINKY, PALETTES_ZBPACMAN[i], PALETTES_ZBPACMAN[i].name)
    _G.charSelect.character_add_palette_preset(E_MODEL_ZBINKYR, PALETTES_ZBPACMAN[i], PALETTES_ZBPACMAN[i].name)
end

-- Adds a health meter to your character
-- (Textures do not exist in template)
-- _G.charSelect.character_add_health_meter(CT_CHAR, HEALTH_METER_CHAR)

-- Adds credits to the credits menu
_G.charSelect.credit_add(TEXT_MOD_NAME, "Zam Boni", "Pac-Man Models")
_G.charSelect.credit_add(TEXT_MOD_NAME, "Squishy6094", "Pac-Man Moveset")

-- Update Model based on palette
local prevPalette = 1
local function update_model()
    local palette = _G.charSelect.character_get_current_palette_number(0)
    if prevPalette ~= palette then
        _G.charSelect.character_edit_costume(CT_ZBPACMAN, 1, nil, nil, nil, nil, palette == 1 and E_MODEL_ZBPACMAN or E_MODEL_ZBPACMANR)
        _G.charSelect.character_edit_costume(CT_ZBMSPACMAN, 1, nil, nil, nil, nil, palette == 1 and E_MODEL_ZBMSPACMAN or E_MODEL_ZBMSPACMANR)
        _G.charSelect.character_edit_costume(CT_ZBBLINKY, 1, nil, nil, nil, nil, palette == 1 and E_MODEL_ZBBLINKY or E_MODEL_ZBBLINKYR)
        _G.charSelect.character_edit_costume(CT_ZBINKY, 1, nil, nil, nil, nil, palette == 1 and E_MODEL_ZBINKY or E_MODEL_ZBINKYR)
        prevPalette = palette
    end
end

hook_event(HOOK_UPDATE, update_model)
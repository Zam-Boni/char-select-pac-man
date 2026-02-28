if not _G.charSelectExists then return 0 end

local RAYCAST_TOGGLE = charSelect.add_option("Debug Raycasts", 0, 1, nil, {"Toggles rendering raycasts", "for spawning Rom Hack", "Rev Roll Ramps"}, true)

local rayList = {}
local og_collision_find_surface_on_ray = collision_find_surface_on_ray

function clear_ray_visuals()
    rayList = {}
end

function clear_last_ray_visual()
    rayList[#rayList] = nil
end

function add_last_ray_lable(lable)
    rayList[#rayList].lable = lable
end

local rayR = 255
local rayG = 255
local rayB = 255
function ray_set_color(r, g, b)
    rayR = r
    rayG = g
    rayB = b
end

function collision_find_surface_on_ray(startX, startY, startZ, dirX, dirY, dirZ, precision)
    local ray = og_collision_find_surface_on_ray(startX, startY, startZ, dirX, dirY, dirZ, precision or 50)
    local hitPos = {x = startX + dirX, y = startY + dirY, z = startZ + dirZ}
    if ray ~= nil and ray.surface ~= nil then
        vec3f_copy(hitPos, ray.hitPos)
    end
    rayList[#rayList + 1] = {
        start = {x = startX, y = startY, z = startZ},
        hit = hitPos,
        color = {r = rayR, g = rayG, b = rayB},
        surface = ray.surface
    }
    return ray
end

local function hud_render()
    if charSelect.get_options_status(RAYCAST_TOGGLE) == 0 then return end

    djui_hud_set_resolution(RESOLUTION_N64)
    for i = 1, #rayList do
        ray = rayList[i]

        local mPos = gMarioStates[0].pos
        if ray ~= nil then
            local opacity = 255 * math.clamp(500/math.min(vec3f_dist(mPos, ray.start), vec3f_dist(mPos, ray.hit))*3 - 1, 0, 1)

            if opacity > 20 then
                djui_hud_set_color(ray.color.r, ray.color.g, ray.color.b, opacity)
                local p1 = {x = ray.start.x, y = ray.start.y, z = ray.start.z}
                local p2 = {x = ray.hit.x, y = ray.hit.y, z = ray.hit.z}
                djui_hud_world_pos_to_screen_pos(p1, p1)
                djui_hud_world_pos_to_screen_pos(p2, p2)
                djui_hud_render_line(p1.x, p1.y, p2.x, p2.y, 1)

                --djui_hud_set_color(0, 255, 0, opacity)
                --djui_hud_render_rect(p1.x - 1, p1.y - 1, 4, 4)

                --djui_hud_set_color(255, 0, 0, opacity)
                --djui_hud_render_rect(p2.x - 1, p2.y - 1, 4, 4)

                if ray.lable ~= nil then
                    djui_hud_set_color(255, 255, 255, opacity)
                    djui_hud_print_text(tostring(ray.lable), p2.x, p2.y, 0.5)
                end
            end
        end
    end
end

hook_event(HOOK_ON_HUD_RENDER_BEHIND, hud_render)
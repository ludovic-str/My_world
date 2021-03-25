/*
** EPITECH PROJECT, 2021
** activate_tool2
** File description:
** activate_tool2
*/

#include "../../include/my_world.h"

void transform_mapequal(world_t *world)
{
    int highter_point = -2000000;

    for (int i = 0; world->map->clothesti[i] != -1; i++) {
        if (world->map->map[world->map->clothesti[i]]
        [world->map->clothestj[i]] > highter_point)
            highter_point = world->map->map[world->map->clothesti[i]]
        [world->map->clothestj[i]];
    }
    for (int i = 0; world->map->clothesti[i] != -1; i++) {
        world->map->map[world->map->clothesti[i]]
        [world->map->clothestj[i]] = highter_point;
    }
}

void activate_tool3(world_t *world)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
    world->map->select_menu_cursor == 4 &&
    (((world->window->mouse.x) <= adapt_hitbox_x(world, 30)) ||
    ((world->window->mouse.y) <= adapt_hitbox_y(world, 20)) ||
    (world->window->mouse.x >= adapt_hitbox_x(world, 680)) ||
    (world->window->mouse.y >= adapt_hitbox_y(world, 135)))) {
        transform_mapequal(world);
        create_2d_map(world);
    }
}
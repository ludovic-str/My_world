/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** activate_tool
*/

#include "../../include/my_world.h"

void transform_mapup(world_t *world)
{
    for (int i = 0; world->map->clothesti[i] != -1; i++) {
        world->map->map[world->map->clothesti[i]]
        [world->map->clothestj[i]]++;
    }
}

void transform_mapdown(world_t *world)
{
    for (int i = 0; world->map->clothesti[i] != -1; i++) {
        world->map->map[world->map->clothesti[i]]
        [world->map->clothestj[i]]--;
    }
}

void transform_mapdestroy(world_t *world)
{
    for (int i = 0; world->map->clothesti[i] != -1; i++) {
        world->map->map[world->map->clothesti[i]]
        [world->map->clothestj[i]] = 0;
    }
}

void activate_tool2(world_t *world)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
    world->map->select_menu_cursor == 3 &&
    (((world->window->mouse.x) <= adapt_hitbox_x(world, 30)) ||
    ((world->window->mouse.y) <= adapt_hitbox_y(world, 20)) ||
    (world->window->mouse.x >= adapt_hitbox_x(world, 680)) ||
    (world->window->mouse.y >= adapt_hitbox_y(world, 135)))) {
        transform_mapdown(world);
        create_2d_map(world);
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
    world->map->select_menu_cursor == 1 &&
    (((world->window->mouse.x) <= adapt_hitbox_x(world, 30)) ||
    ((world->window->mouse.y) <= adapt_hitbox_y(world, 20)) ||
    (world->window->mouse.x >= adapt_hitbox_x(world, 680)) ||
    (world->window->mouse.y >= adapt_hitbox_y(world, 135)))) {
        transform_mapdestroy(world);
        create_2d_map(world);
    }
}

void activate_tool(world_t* world)
{
    modify_coord(world);
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
    world->map->select_menu_cursor == 2 &&
    (((world->window->mouse.x) <= adapt_hitbox_x(world, 30)) ||
    ((world->window->mouse.y) <= adapt_hitbox_y(world, 20)) ||
    ((world->window->mouse.x) >= adapt_hitbox_x(world, 680)) ||
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 135)))) {
        transform_mapup(world);
        create_2d_map(world);
    }
    activate_tool2(world);
    activate_tool3(world);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** menu_map
*/

#include "../../../include/my_world.h"

int select_cursor3(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 431)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 508) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115))))
        world->map->select_menu_cursor = 5;
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 508)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 585) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115))))
        world->map->select_menu_cursor = 6;
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 585)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 661) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115))))
        world->map->select_menu_cursor = 7;
}

int select_cursor2(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 200)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 279) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115))))
        world->map->select_menu_cursor = 2;
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 280)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 355) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115))))
        world->map->select_menu_cursor = 3;
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 355)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 431) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115))))
        world->map->select_menu_cursor = 4;
}

int select_cursor(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed) {
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 50)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 126) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 115))))
            world->map->select_menu_cursor = 0;
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 125)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 200) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 115))))
            world->map->select_menu_cursor = 1;
        select_cursor2(world);
        select_cursor3(world);
    }
}
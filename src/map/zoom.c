/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** zoom
*/

#include "../../include/my_world.h"

void zoom_w_shortcut(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed &&
    world->map->select_menu_cursor == 0)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 1790)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 893)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 1870) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 973)))
        && world->map->arraysize >= 15) {
            world->map->arraysize -= 1;
            create_2d_map(world);
        }
    if (world->window->event.type == sfEvtTextEntered) {
        if (world->window->event.text.unicode == '+' &&
        world->map->arraysize <= 100)
            world->map->arraysize += 1;
        if (world->window->event.text.unicode == '-' &&
        world->map->arraysize >= 15)
            world->map->arraysize -= 1;
        create_2d_map(world);
    }
}

void zoom(world_t *world)
{
    sfRenderWindow_drawSprite(world->window->my_window,
    world->map->zoom, NULL);
    if (world->window->event.type == sfEvtMouseButtonPressed &&
    world->map->select_menu_cursor == 0)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 1710)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 893)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 1790) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 973)))
        && world->map->arraysize <= 100) {
            world->map->arraysize += 1;
            create_2d_map(world);
        }
    zoom_w_shortcut(world);
}
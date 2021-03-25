/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** cursor
*/

#include "../../include/my_world.h"

float adapt_cursor_x(world_t *world, int hitbox_x)
{
    sfVector2u window_size = sfRenderWindow_getSize(world->window->my_window);
    float result = 0;

    result = ((1920 / (float)window_size.x) * (float)hitbox_x);
    return (result);
}

float adapt_cursor_y(world_t *world, int hitbox_y)
{
    sfVector2u window_size = sfRenderWindow_getSize(world->window->my_window);
    float result = 0;

    result = ((1080 / (float)window_size.y) * (float)hitbox_y);
    return (result);
}

int cursor_text(world_t *world, sfVector2f mouse)
{
    sfSprite_setPosition(world->cursor->cursor_text, mouse);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->cursor->cursor_text, NULL);
}

int standard_cursor(world_t *world, sfVector2f mouse)
{
    if (world->map->select_menu_cursor == 0) {
        sfSprite_setPosition(world->cursor->cursor, mouse);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->cursor->cursor, NULL);
    }
}

int cursor(world_t *world)
{
    sfVector2f mouse = {adapt_cursor_x(world, world->window->mouse.x),
    adapt_cursor_y(world, world->window->mouse.y)};

    if ((world->status == 7 || world->status == 1) &&
    ((world->window->mouse.x) >= adapt_hitbox_x(world, 500)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 310)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 155) +
    adapt_hitbox_x(world, 500)) && (world->window->mouse.y <=
    adapt_hitbox_y(world, 50) + adapt_hitbox_y(world, 310)))
        cursor_text(world, mouse);
    else if ((world->status == 7 || world->status == 1) &&
    ((world->window->mouse.x) >= adapt_hitbox_x(world, 695))
    && ((world->window->mouse.y) >= adapt_hitbox_y(world, 310)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 155) +
    adapt_hitbox_x(world, 695)) && (world->window->mouse.y <=
    adapt_hitbox_y(world, 50) + adapt_hitbox_y(world, 310)))
        cursor_text(world, mouse);
    else
        standard_cursor(world, mouse);
}
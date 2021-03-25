/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** settings_resize
*/

#include "../../include/my_world.h"

int resolution_position(world_t *world)
{
    sfVector2f position_resolution = {690, 430};

    sfSprite_setPosition(world->menu->resolution_1,
    position_resolution);
    sfSprite_setPosition(world->menu->resolution_2,
    position_resolution);
    sfSprite_setPosition(world->menu->resolution_3,
    position_resolution);
    sfSprite_setPosition(world->menu->resolution_clicked,
    position_resolution);
}

int manage_icon_size(world_t *world)
{
    sfVector2u size1 = {1920, 1080};
    sfVector2u size2 = {1280, 720};
    sfVector2u size3 = {1160, 630};

    if (world->menu->size == 0) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->resolution_1, NULL);
        sfRenderWindow_setSize(world->window->my_window, size1);
    }
    if (world->menu->size == 1) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->resolution_2, NULL);
        sfRenderWindow_setSize(world->window->my_window, size2);
    }
    if (world->menu->size == 2) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->resolution_3, NULL);
        sfRenderWindow_setSize(world->window->my_window, size3);
    }
}

int manage_size(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 690) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 430)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 155) +
        adapt_hitbox_x(world, 690)) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 50) +
        adapt_hitbox_y(world, 430))))
            if (world->menu->time_loop >= 0.2) {
                world->menu->size += 1;
                sfSound_play(world->audio->clic);
                world->menu->time_loop = 0;
            }
    if (world->menu->size >= 3)
        world->menu->size = 0;
    resolution_position(world);
    manage_icon_size(world);
}

float adapt_hitbox_x(world_t *world, int hitbox_x)
{
    sfVector2u window_size = sfRenderWindow_getSize(world->window->my_window);
    float result = 0;

    result = (((float)hitbox_x / 1920) * (float)window_size.x);
    return (result);
}

float adapt_hitbox_y(world_t *world, int hitbox_y)
{
    sfVector2u window_size = sfRenderWindow_getSize(world->window->my_window);
    float result = 0;

    result = (((float)hitbox_y / 1080) * (float)window_size.y);
    return (result);
}
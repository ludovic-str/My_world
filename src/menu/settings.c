/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** settings
*/

#include "../../include/my_world.h"

int manage_icon_sound(world_t *world)
{
    if (world->audio->audio == 0) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->sound_on, NULL);
        sfSound_setVolume(world->audio->clic, 75);
        sfSound_setVolume(world->audio->sound, 75);
    }
    if (world->audio->audio == 1) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->sound_off, NULL);
        sfSound_setVolume(world->audio->clic, 0);
        sfSound_setVolume(world->audio->sound, 0);
    }
}

int manage_sound(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 690)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 506)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 155) +
        adapt_hitbox_x(world, 690)) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 50) +
        adapt_hitbox_y(world, 506))) {
            if (world->audio->audio == 0  && world->menu->time_loop >= 0.2) {
                world->audio->audio = 1;
                sfSound_play(world->audio->clic);
                world->menu->time_loop = 0;
            }
            if (world->audio->audio == 1 && world->menu->time_loop >= 0.2) {
                world->audio->audio = 0;
                world->audio->volume = 2;
                sfSound_play(world->audio->clic);
                world->menu->time_loop = 0;
            }
        }
    manage_icon_sound(world);
}

int manage_icon_volume(world_t *world)
{
    if (world->audio->volume == 0) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->volume_25, NULL);
        sfSound_setVolume(world->audio->clic, 25);
        sfSound_setVolume(world->audio->sound, 25);
    }
    if (world->audio->volume == 1) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->volume_50, NULL);
        sfSound_setVolume(world->audio->clic, 50);
        sfSound_setVolume(world->audio->sound, 50);
    }
    if (world->audio->volume == 2) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->volume_75, NULL);
        sfSound_setVolume(world->audio->clic, 75);
        sfSound_setVolume(world->audio->sound, 75);
    }
    manage_icon_volume2(world);
}

int manage_volume(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 690)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 582)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 155) +
        adapt_hitbox_x(world, 690)) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 50) +
        adapt_hitbox_y(world, 582)))
            if (world->audio->audio != 1 &&
            world->menu->time_loop >= 0.2) {
                world->audio->volume += 1;
                sfSound_play(world->audio->clic);
                world->menu->time_loop = 0;
            }
    if (world->audio->volume >= 4)
        world->audio->volume = 0;
    if (world->audio->audio == 1)
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->volume_desactivated, NULL);
    if (world->audio->audio == 0)
        manage_icon_volume(world);
}

int menu_settings(world_t *world)
{
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->banderol_settings, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->texte_resolution, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->texte_sound, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->texte_volume, NULL);
    setposition2(world);
    manage_size(world);
    manage_sound(world);
    manage_volume(world);
    settings_hover(world);
}
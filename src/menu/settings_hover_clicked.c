/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** settings_hover_clicked
*/

#include "../../include/my_world.h"

int settings_hover2(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 690)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 430)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 155) +
    adapt_hitbox_x(world, 690)) && (world->window->mouse.y <=
    adapt_hitbox_y(world, 50) + adapt_hitbox_y(world, 430)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->resolution_clicked, NULL);
}

int settings_hover(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 690)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 582)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 155) +
    adapt_hitbox_x(world, 690)) && (world->window->mouse.y
    <= adapt_hitbox_y(world, 50) + adapt_hitbox_y(world, 582)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->volume_clicked, NULL);
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 690)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 506)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 155) +
    adapt_hitbox_x(world, 690)) && (world->window->mouse.y <=
    adapt_hitbox_y(world, 50) + adapt_hitbox_y(world, 506)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->sound_clicked, NULL);
    settings_hover2(world);
}

int manage_icon_volume2(world_t *world)
{
    if (world->audio->volume == 3) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->volume_100, NULL);
        sfSound_setVolume(world->audio->clic, 100);
        sfSound_setVolume(world->audio->sound, 100);
    }
}

int setposition2(world_t *world)
{
    sfVector2f position_sound = {690, 506};
    sfVector2f position_volume = {690, 582};

    sfSprite_setPosition(world->menu->sound_clicked,
    position_sound);
    sfSprite_setPosition(world->menu->sound_on,
    position_sound);
    sfSprite_setPosition(world->menu->sound_off,
    position_sound);
    sfSprite_setPosition(world->menu->volume_desactivated,
    position_volume);
    sfSprite_setPosition(world->menu->volume_clicked,
    position_volume);
    sfSprite_setPosition(world->menu->volume_100,
    position_volume);
    sfSprite_setPosition(world->menu->volume_75,
    position_volume);
    sfSprite_setPosition(world->menu->volume_50,
    position_volume);
    sfSprite_setPosition(world->menu->volume_25,
    position_volume);
}
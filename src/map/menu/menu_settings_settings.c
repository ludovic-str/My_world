/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** menu_settings_settings
*/

#include "../../../include/my_world.h"

int clic_resolution(world_t *world)
{
    if ((world->window->mouse.x) >= adapt_hitbox_x(world, 881) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 312)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 1038) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 360))))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->resolution_clicked, NULL);
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if ((world->window->mouse.x) >= adapt_hitbox_x(world, 881) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 312)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 1038) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 360))))
            if (world->menu->time_loop >= 0.2) {
                world->menu->size += 1;
                sfSound_play(world->audio->clic);
                world->menu->time_loop = 0;
            }
    if (world->menu->size >= 3)
        world->menu->size = 0;
}

int hover_sound_volume(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 881)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 441)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 1038)) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 489)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->sound_clicked, NULL);
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 881)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 570)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 1038)) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 618)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->volume_clicked, NULL);
}

int clic_sound(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 881)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 441)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 1038)) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 489))) {
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

int setposition(world_t *world)
{
    sfVector2f position_resolution = {881, 312};
    sfVector2f position_sound = {881, 441};

    sfSprite_setPosition(world->menu->resolution_1,
    position_resolution);
    sfSprite_setPosition(world->menu->resolution_2,
    position_resolution);
    sfSprite_setPosition(world->menu->resolution_3,
    position_resolution);
    sfSprite_setPosition(world->menu->resolution_clicked,
    position_resolution);
    sfSprite_setPosition(world->menu->sound_clicked,
    position_sound);
    sfSprite_setPosition(world->menu->sound_on,
    position_sound);
    sfSprite_setPosition(world->menu->sound_off,
    position_sound);
    setposition3(world);
}

int settings_settings(world_t *world)
{
    sfRenderWindow_drawSprite(world->window->my_window,
    world->map->map_settings->settings_font, NULL);
    setposition(world);
    manage_icon_size(world);
    clic_resolution(world);
    clic_sound(world);
    clic_volume(world);
    hover_sound_volume(world);
    back_button(world);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)
    && world->menu->time_loop >= 0.2) {
        world->status = 4;
        world->menu->time_loop = 0;
    }
}
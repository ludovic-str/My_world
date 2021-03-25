/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** menu_settings_settings2
*/

#include "../../../include/my_world.h"

int setposition3(world_t *world)
{
    sfVector2f position_volume = {881, 570};

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
    sfSprite_setPosition(world->menu->volume_desactivated,
    position_volume);
}

int clic_volume(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 881)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 570)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 1038) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 618))))
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

int back_button(world_t *world)
{
    sfRenderWindow_drawSprite(world->window->my_window,
    world->map->map_settings->back, NULL);
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 881)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 710)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 1038)) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 758)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->map_settings->back_clicked, NULL);
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 881)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 710)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 1038)) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 758))) {
            world->status = 5;
            sfSound_play(world->audio->clic);
            world->menu->time_loop = 0;
        }
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** menu
*/

#include "../../include/my_world.h"

int hover_button(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 90)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 273)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 90) +
    adapt_hitbox_x(world, 275)) && (world->window->mouse.y <=
    adapt_hitbox_y(world, 65) + adapt_hitbox_y(world, 273)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->buttom_create_hover, NULL);
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 90)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 400)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 90) +
    adapt_hitbox_x(world, 275)) && (world->window->mouse.y <=
    adapt_hitbox_y(world, 65) + adapt_hitbox_y(world, 400)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->buttom_settings_hover, NULL);
}

int click_button2(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 90)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 400)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 90) +
    adapt_hitbox_x(world, 275)) && (world->window->mouse.y <=
    adapt_hitbox_y(world, 65) + adapt_hitbox_y(world, 400))) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->button_settings_clicked, NULL);
        if ((world->status == 0 || world->status == 1 ||
        world->status == 7) && world->menu->time_loop >= 0.2) {
            world->status = 2;
            sfSound_play(world->audio->clic);
            world->menu->time_loop = 0;
        } if ((world->status == 2 || world->status == 7)
        && world->menu->time_loop >= 0.2) {
            world->status = 0;
            sfSound_play(world->audio->clic);
            world->menu->time_loop = 0;
        }
    }
}

int click_button(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed) {
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 90)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 273)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 365)) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 338))) {
            sfRenderWindow_drawSprite(world->window->my_window,
            world->menu->button_create_clicked, NULL);
            if ((world->status == 0 || world->status == 2 ||
            world->status == 7) && world->menu->time_loop >= 0.2) {
                world->status = 1;
                sfSound_play(world->audio->clic);
                world->menu->time_loop = 0;
            } if ((world->status == 1 || world->status == 7)
            && world->menu->time_loop >= 0.2) {
                world->status = 0;
                sfSound_play(world->audio->clic);
                world->menu->time_loop = 0;
            }
        }
        click_button2(world);
    }
}

int menu(world_t *world)
{
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->background, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->banderol, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->map_editor, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->copyright, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->buttom_settings, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->buttom_create, NULL);
    hover_button(world);
    click_button(world);
}
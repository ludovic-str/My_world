/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** popup
*/

#include "../../include/my_world.h"

void ksp(world_t *world)
{
    world->map->select_menu_cursor = 0;
    sfRenderWindow_drawSprite(world->window->my_window,
    world->popup->ksp, NULL);
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 1630)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 143)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 1676) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 190))))
            world->status = 3;
    if (sfKeyboard_isKeyPressed(sfKeyEscape)
    && world->menu->time_loop >= 0.2) {
        world->status = 3;
        world->menu->time_loop = 0;
    }
}

void manage_popup(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed) {
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 777)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 804)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 803) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 830))))
            world->popup->is_popup = -2;
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 67)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 946)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 86) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 965))))
            world->popup->is_popup = -1;
    }
}

void popup3(world_t *world)
{
    if (world->popup->is_popup == 1)
        sfRenderWindow_drawSprite(world->window->my_window,
        world->popup->up, NULL);
    if (world->popup->is_popup == 2)
        sfRenderWindow_drawSprite(world->window->my_window,
        world->popup->down, NULL);
    if (world->popup->is_popup == 3)
        sfRenderWindow_drawSprite(world->window->my_window,
        world->popup->equal, NULL);
    if (world->popup->is_popup == 4)
        sfRenderWindow_drawSprite(world->window->my_window,
        world->popup->buldo, NULL);
}

void popup2(world_t *world)
{
    if (world->menu->time_popup >= 75 && world->menu->time_popup <= 85)
        world->popup->is_popup = 5;
    if (world->menu->time_popup >= 90) {
        world->popup->is_popup = 0;
        world->menu->time_popup = 0;
    }
    if (world->popup->is_popup == 5)
        sfRenderWindow_drawSprite(world->window->my_window,
        world->popup->shortcuts, NULL);
    popup3(world);
}

void popup1(world_t *world)
{
    world->menu->time_popup += world->menu->time_total;
    if (world->popup->is_popup == 0 && world->menu->time_popup >= 15) {
        world->menu->time_popup = 0;
        world->popup->is_popup = 1;
    }
    if (world->popup->is_popup != -1 && world->popup->is_popup != 0) {
        if (world->menu->time_popup >= 15 && world->menu->time_popup <= 20)
            world->popup->is_popup = 1;
        if (world->menu->time_popup >= 30 && world->menu->time_popup <= 40)
            world->popup->is_popup = 2;
        if (world->menu->time_popup >= 45 && world->menu->time_popup <= 55)
            world->popup->is_popup = 3;
        if (world->menu->time_popup >= 60 && world->menu->time_popup <= 70)
            world->popup->is_popup = 4;
        popup2(world);
        manage_popup(world);
    }
}
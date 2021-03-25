/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** key_shortcut
*/

#include "../../include/my_world.h"

void check_escape(world_t *world)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape)
    && world->menu->time_loop >= 0.2) {
        world->status = 4;
        world->menu->time_loop = 0;
    }
}

void shortcut4(world_t *world)
{
    if (world->window->event.text.unicode == 'z'
    && world->menu->time_loop >= 0.2) {
        if (world->map->iscircle == 1) {
            world->map->iscircle = 0;
            world->menu->time_loop = 0;
            return;
        }
        if (world->map->iscircle == 0) {
            world->map->iscircle = 1;
            world->menu->time_loop = 0;
            return;
        }
    }
    return;
}

void shortcut3(world_t *world)
{
    if (world->window->event.text.unicode == 'o')
        world->status = 8;
    if (world->window->event.text.unicode == 'g'
    && world->menu->time_loop >= 0.2) {
        if (world->map->istiles == 1) {
            world->map->istiles = 0;
            world->menu->time_loop = 0;
            return;
        }
        if (world->map->istiles == 0) {
            world->map->istiles = 1;
            world->menu->time_loop = 0;
            return;
        }
    }
    shortcut4(world);
}

void shortcut2(world_t *world)
{
    if (world->window->event.text.unicode == 'e')
        world->map->select_menu_cursor = 4;
    if (world->window->event.text.unicode == 'h')
        world->map->select_menu_cursor = 5;
    if (world->window->event.text.unicode == 's')
        world->map->select_menu_cursor = 6;
    if (world->window->event.text.unicode == 'c')
        world->map->select_menu_cursor = 7;
    shortcut3(world);
}

void shortcut(world_t *world)
{
    if (world->window->event.type == sfEvtTextEntered) {
        if (world->window->event.text.unicode == 'm')
            world->map->select_menu_cursor = 0;
        if (world->window->event.text.unicode == 'b')
            world->map->select_menu_cursor = 1;
        if (world->window->event.text.unicode == 'u')
            world->map->select_menu_cursor = 2;
        if (world->window->event.text.unicode == 'd')
            world->map->select_menu_cursor = 3;
        shortcut2(world);
    }
    check_escape(world);
}
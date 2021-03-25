/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** select_cursor
*/

#include "../../../include/my_world.h"

int cursor_status2(world_t *world, sfVector2f mouse)
{
    if (world->map->select_menu_cursor == 4) {
        sfSprite_setPosition(world->cursor->cursor_equal, mouse);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->cursor->cursor_equal, NULL);
    } if (world->map->select_menu_cursor == 5) {
        sfSprite_setPosition(world->cursor->cursor_home, mouse);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->cursor->cursor_home, NULL);
    } if (world->map->select_menu_cursor == 6) {
        sfSprite_setPosition(world->cursor->cursor_hotel, mouse);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->cursor->cursor_hotel, NULL);
    } if (world->map->select_menu_cursor == 7) {
        sfSprite_setPosition(world->cursor->cursor_skyscraper, mouse);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->cursor->cursor_skyscraper, NULL);
    }
}

int cursor_status(world_t *world, sfVector2f mouse)
{
    if (world->map->select_menu_cursor == 1) {
        sfSprite_setPosition(world->cursor->cursor_buldozer, mouse);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->cursor->cursor_buldozer, NULL);
    } if (world->map->select_menu_cursor == 2) {
        sfSprite_setPosition(world->cursor->cursor_up, mouse);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->cursor->cursor_up, NULL);
    } if (world->map->select_menu_cursor == 3) {
        sfSprite_setPosition(world->cursor->cursor_down, mouse);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->cursor->cursor_down, NULL);
    }
    cursor_status2(world, mouse);
}
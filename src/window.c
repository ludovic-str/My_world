/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** window
*/

#include "../include/my_world.h"

int event(world_t *world)
{
    world->window->mouse =
    sfMouse_getPositionRenderWindow(world->window->my_window);
    while (sfRenderWindow_pollEvent(world->window->my_window,
    &world->window->event))
        if (world->window->event.type == sfEvtClosed)
            sfRenderWindow_close(world->window->my_window);
}

int repartition3(world_t *world)
{
    if (world->status == 8) {
        map(world);
        ksp(world);
    }
}

int repartition2(world_t *world)
{
    if (world->status == 4) {
        map(world);
        settings(world);
    }
    if (world->status == 5) {
        map(world);
        settings(world);
    }
    if (world->status == 6) {
        map(world);
        settings_settings(world);
    }
    if (world->status == 7) {
        menu(world);
        menu_create(world);
    }
    repartition3(world);
}

int repartition(world_t *world)
{
    if (world->status == 0)
        menu(world);
    if (world->status == 1) {
        menu(world);
        menu_create(world);
    }
    if (world->status == 2) {
        menu(world);
        menu_settings(world);
    }
    if (world->status == 3)
        map(world);
    repartition2(world);
}

int window(world_t *world)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    sfVector2i position_window = {0, 0};

    world->window->my_window = sfRenderWindow_create(video_mode,
    "My World", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(world->window->my_window, 60);
    sfRenderWindow_setPosition(world->window->my_window, position_window);
    sfRenderWindow_setMouseCursorVisible(world->window->my_window, sfFalse);
    sfSound_play(world->audio->sound);
    while (sfRenderWindow_isOpen(world->window->my_window)) {
        world->menu->time_total =
        sfClock_restart(world->menu->clock).microseconds / 1000000.0;
        world->menu->time_loop += world->menu->time_total;
        event(world);
        sfRenderWindow_display(world->window->my_window);
        repartition(world);
        cursor(world);
    }
    destroy_sounds(world);
}
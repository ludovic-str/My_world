/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** my_world
*/

#include "../include/my_world.h"

int init(world_t *world)
{
    world->menu->clock = sfClock_create();
    open_music(world);
    background(world);
    init_all(world);
    init_vertex(world);
    init_text(world);
    world->status = 0;
    world->audio->audio = 0;
    world->audio->volume = 1;
    world->menu->size = 0;
    world->map->select_menu_cursor = 0;
    world->menu->time_loop = 0;
    world->menu->time_popup = 0;
    world->menu->text = 0;
    world->popup->is_popup = 0;
}

void my_malloc(world_t *world)
{
    world->window = malloc(sizeof(window_t));
    world->menu = malloc(sizeof(menu_t));
    world->audio = malloc(sizeof(audio_t));
    world->cursor = malloc(sizeof(cursor_t));
    world->map = malloc(sizeof(map_t));
    world->map->map_settings = malloc(sizeof(map_settings_t));
    world->popup = malloc(sizeof(popup_t));
}

void my_free(world_t *world)
{
    free(world->window);
    free(world->menu);
    free(world->audio);
    free(world->cursor);
    free(world->map->map_settings);
    free(world->map);
    free(world);
}

int usage(int ac, char **av)
{
    write(1, "USAGE\n", 7);
    write(1, "\t./my_world\n", 13);
    write(1, "DESCRIPTION\n", 13);
    write(1, "\tMy_world is a world editor, you can terraform your ", 53);
    write(1, "own world.\n\tWith the differents tools in the toolbar", 53);
    write(1, " you can adjust your map (up, down, equal).\n\n", 45);
    write(1, "SHORTCUTS\n", 11);
    write(1, "\to\tview all the keyboard shortcuts in game\n", 44);
    write(1, "\tm\tchose the default cursor\n", 29);
    write(1, "\tb\tchose the buildozer event\n", 30);
    write(1, "\tu\tchose the up event map\n", 27);
    write(1, "\td\tchose the down event map\n", 29);
    write(1, "\te\tchose the equal event map\n", 30);
    write(1, "\th\tchose the home event map\n", 29);
    write(1, "\ts\tchose the building event map\n", 33);
    write(1, "\tc\tchose the city hall event map\n", 34);
    write(1, "\t+\tzoom in\n", 12);
    write(1, "\t-\tzoom out\n", 13);
    write(1, "\tz\tshow or hide the selection with the circle\n", 47);
    write(1, "\tg\tshow or hide the grids\n", 27);
    return (-1);
}

int main(int ac, char **av)
{
    world_t *world = malloc(sizeof(world_t));

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        if (usage(ac, av) == -1)
            return (0);
    my_malloc(world);
    init(world);
    window(world);
    my_free(world);
    return (0);
}
/*
** EPITECH PROJECT, 2021
** vertexinit
** File description:
** vertexinit
*/

#include "../../include/my_world.h"

sfVector2f project_iso_point2(world_t *world, sfVector3f threedim,
sfVector2f twodim, int goodposy)
{
    if (world->menu->size == 1) {
        twodim.x = (1280 / 2) + cos(0.25) * threedim.x - cos(0.25)
        * threedim.y;
        twodim.y = 640 - goodposy + sin(0.610865) *
        threedim.y + sin(0.610865) * threedim.x - threedim.z;
    }
    if (world->menu->size == 2) {
        twodim.x = (1160 / 2) + cos(0.25) * threedim.x - cos(0.25)
        * threedim.y;
        twodim.y = 630 - goodposy + sin(0.610865) *
        threedim.y + sin(0.610865) * threedim.x - threedim.z;
    }
    return (twodim);
}

sfVector2f project_iso_point(world_t *world, sfVector3f threedim)
{
    sfVector2f twodim;
    int goodposy = 0;

    if (world->window->height > world->window->width)
        goodposy = ((world->window->width) * (world->map->arraysize / 2)) / 2;
    else
        goodposy = ((world->window->height) * (world->map->arraysize / 2)) / 2;
    if (world->menu->size == 0) {
        twodim.x = (1920 / 2) + cos(0.25) * threedim.x - cos(0.25)
        * threedim.y;
        twodim.y = 540 - goodposy + sin(0.25) * threedim.y + sin(0.25) *
        threedim.x - threedim.z;
    }
    twodim = project_iso_point2(world, threedim, twodim, goodposy);
    return (twodim);
}

void create_2d_map(world_t *world)
{
    sfVector2f **threedmap = malloc(sizeof(sfVector2f *) *
    (world->window->height + 2));
    sfVector3f vector;

    for (int y = 0; y < (world->window->height + 2); y++) {
        threedmap[y] = malloc(sizeof(sfVector2f) *
        (world->window->width + 2));
        for (int x = 0; x < (world->window->width + 2); x++) {
            vector = (sfVector3f){x * world->map->arraysize,
            y * world->map->arraysize, world->map->map[y][x]};
            threedmap[y][x] = project_iso_point(world, vector);
        }
    }
    world->map->mapthree = threedmap;
}

void intmap(world_t *world)
{
    int y = 0;
    int **map = malloc(sizeof(int *) * (world->window->height + 4));

    for (; y < (world->window->height + 2); y++) {
        map[y] = malloc(sizeof(int) * (world->window->width + 4));
        for (int x = 0; x < (world->window->width + 2); x++) {
            map[y][x] = 0;
        }
    }
    map[y] = NULL;
    world->map->map = map;
}
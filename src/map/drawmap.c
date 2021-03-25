/*
** EPITECH PROJECT, 2021
** drawmap
** File description:
** drawmao
*/

#include "../../include/my_world.h"

void drawfirsthalf(world_t *world, int i, int j, sfVector2f vect[2])
{
    sfVertexArray *vertex_array;

    if (i + 1 < world->window->height + 1) {
        vect[1] = (world->map->mapthree[i + 1][j]);
        vertex_array = create_line(world, vect);
        sfRenderWindow_drawVertexArray(world->window->my_window,
        vertex_array, NULL);
        sfVertexArray_destroy(vertex_array);
    }
}

void drawsecondhalf(world_t *world, int i, int j, sfVector2f vect[2])
{
    sfVertexArray *vertex_array;

    if (j + 1 < world->window->width + 1) {
        vect[1] = (world->map->mapthree[i][j + 1]);
        vertex_array = create_line(world, vect);
        sfRenderWindow_drawVertexArray(world->window->my_window,
        vertex_array, NULL);
        sfVertexArray_destroy(vertex_array);
    }
}

int draw_2d_map(world_t *world)
{
    sfVector2f vect[2];

    for (int i = 0; i < world->window->height + 1; i++) {
        for (int j = 0; j < world->window->width + 1; j++) {
            vect[0] = world->map->mapthree[i][j];
            if (world->map->istiles == 1) {
                drawfirsthalf(world, i, j, vect);
                drawsecondhalf(world, i, j, vect);
            }
            color_main(world, i, j);
        }
    }
}
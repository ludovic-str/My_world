/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** creat_color
*/

#include "../../include/my_world.h"

sfVertexArray *create_color(world_t *world, int i, int j, sfColor color)
{
    sfVertexArray *vertex_array = sfVertexArray_create();
    sfVertex vertex1 = {.position = world->map->mapthree[i + 1][j],
    .color = color};
    sfVertex vertex2 = {.position = world->map->mapthree[i][j + 1],
    .color = color};
    sfVertex vertex3 = {.position = world->map->mapthree[i][j],
    .color = color};

    sfVertexArray_append(vertex_array, vertex1);
    sfVertexArray_append(vertex_array, vertex2);
    sfVertexArray_append(vertex_array, vertex3);
    sfVertexArray_setPrimitiveType(vertex_array, sfTriangles);
    return (vertex_array);
}

sfVertexArray *create_colorbis(world_t *world, int i, int j, sfColor color)
{
    sfVertexArray *vertex_array = sfVertexArray_create();
    sfVertex vertex1 = {.position = world->map->mapthree[i + 1][j],
    .color = color};
    sfVertex vertex2 = {.position = world->map->mapthree[i][j + 1],
    .color = color};
    sfVertex vertex3 = {.position = world->map->mapthree[i + 1][j + 1],
    .color = color};

    sfVertexArray_append(vertex_array, vertex1);
    sfVertexArray_append(vertex_array, vertex2);
    sfVertexArray_append(vertex_array, vertex3);
    sfVertexArray_setPrimitiveType(vertex_array, sfTriangles);
    return (vertex_array);
}

sfColor choose_color(world_t *world, int i, int j)
{
    sfColor color;

    if ((world->map->map[i][j] > -20 && world->map->map[i][j] < 25) ||
    (world->map->map[i + 1][j] > -20 && world->map->map[i + 1][j] < 25) ||
    (world->map->map[i][j + 1] > -20 && world->map->map[i][j + 1] < 25) ||
    (world->map->map[i + 1][j + 1] > -20 &&
    world->map->map[i + 1][j + 1] < 25))
        color = sfColor_fromRGB(66, 140, 38);
    if (world->map->map[i][j] > 25 || world->map->map[i + 1][j] > 25 ||
    world->map->map[i][j + 1] > 25 || world->map->map[i + 1][j + 1] > 25)
        color = sfColor_fromRGB(93, 80, 77);
    if (world->map->map[i][j] < -20 || world->map->map[i + 1][j] < -20 ||
    world->map->map[i][j + 1] < -20 || world->map->map[i + 1][j + 1] < -20)
        color = sfColor_fromRGB(244, 208, 63);
    return (color);
}

void color_main(world_t *world, int i, int j)
{
    sfColor color;

    if (j + 1< world->window->width + 1 &&
    i + 1 < world->window->height + 1) {
        color = choose_color(world, i, j);
        sfRenderWindow_drawVertexArray(world->window->my_window,
        create_color(world, i, j, color), NULL);
        sfRenderWindow_drawVertexArray(world->window->my_window,
        create_colorbis(world, i, j, color), NULL);
    }
}
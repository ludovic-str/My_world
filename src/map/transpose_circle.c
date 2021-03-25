/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** transpose_circle
*/

#include "../../include/my_world.h"

sfVector2f clothest_point(sfVector2f mouse, sfVector2f map,
sfVector2f clothest)
{
    int distancenew = sqrt((map.x - mouse.x) * (map.x - mouse.x) +
    (map.y - mouse.y) * (map.y - mouse.y));
    int distancepast = sqrt((clothest.x - mouse.x) * (clothest.x - mouse.x) +
    (clothest.y - mouse.y) * (clothest.y - mouse.y));

    if (distancenew < distancepast)
        return (map);
    return (clothest);
}

int ispoint_in_circle(world_t *world, sfVector2f mouse, sfVector2f map)
{
    int distancenew = sqrt(((map.x - mouse.x) * (map.x - mouse.x) / 2) +
    (map.y - mouse.y) * (map.y - mouse.y));

    if (distancenew < (world->map->shaperadius / 2))
        return (0);
    return (1);

}

void modify_muchcoord(world_t *world)
{
    sfVector2i mouse =
    sfMouse_getPositionRenderWindow(world->window->my_window);
    int index = 0;
    int j = 0;

    for (int i = 0; i < world->window->height; i++) {
        for (; j < world->window->width; j++) {
            if (!ispoint_in_circle(world, (sfVector2f){mouse.x, mouse.y},
            world->map->mapthree[i][j])) {
                world->map->clothesti[index] = i;
                world->map->clothestj[index] = j;
                index++;
            }
        }
        j = 0;
    }
    world->map->clothesti[index] = -1;
    world->map->clothestj[index] = -1;
}

void modify_singlecoord(world_t *world)
{
    sfVector2i mouse =
    sfMouse_getPositionRenderWindow(world->window->my_window);
    sfVector2f final = {0, 0};
    sfVector2f previous_final = final;
    int j = 0;

    for (int i = 0; i < world->window->height; i++) {
        for (; j < world->window->width; j++) {
            final = clothest_point((sfVector2f){mouse.x, mouse.y},
            world->map->mapthree[i][j], final);
            if (final.x != previous_final.x || previous_final.y != final.y) {
                world->map->clothesti[0] = i;
                world->map->clothestj[0] = j;
            }
            previous_final = final;
        }
        j = 0;
    }
    world->map->clothesti[1] = -1;
    world->map->clothestj[1] = -1;
}

void modify_coord(world_t *world)
{
    if (world->map->iscircle == 0)
        modify_singlecoord(world);
    if (world->map->iscircle == 1)
        modify_muchcoord(world);
}
/*
** EPITECH PROJECT, 2021
** mouse_circle
** File description:
** mouse_circle
*/

#include "../../include/my_world.h"

void circleradius(world_t *world)
{
    if (world->map->iscircle == 1)
        world->map->shaperadius = world->map->arraysize * 2;
    if (world->map->iscircle == 0)
        world->map->shaperadius = 0;
}

void initcircleshape(world_t *world)
{
    sfVector2f scale = {1, 0.4};

    circleradius(world);
    world->map->circleshape = sfCircleShape_create();
    sfCircleShape_setRadius(world->map->circleshape, world->map->shaperadius);
    sfCircleShape_setRotation(world->map->circleshape, cos(0.25));
    sfCircleShape_setFillColor(world->map->circleshape, sfTransparent);
    sfCircleShape_setOutlineThickness(world->map->circleshape, 3);
    sfCircleShape_setOutlineColor(world->map->circleshape, sfWhite);
    sfCircleShape_setScale(world->map->circleshape, scale);
}
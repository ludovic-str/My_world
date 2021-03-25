/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** map_init
*/

#include "../../include/my_world.h"

void initmap_bg(world_t *world)
{
    world->map->back = sfTexture_createFromFile
    ("assets/background/0.jpg", NULL);
    world->map->background = sfSprite_create();
    sfSprite_setTexture(world->map->background, world->map->back, sfTrue);
}

void init_vertex(world_t *world)
{
    world->map->istiles = 1;
    world->map->arraysize = 50;
    world->map->shaperadius = world->map->arraysize * 2;
    world->map->iscircle = 1;
    creat_popup(world);
    creat_equal(world);
    creat_buldo(world);
    creat_up(world);
    initcircleshape(world);
    map_settings(world);
    creat_menu_map1(world);
    creat_menu_map2(world);
    creat_menu_map3(world);
    creat_menu_map4(world);
    creat_menu_map5(world);
    creat_error_whidth_height(world);
}

sfVertexArray *create_line(world_t *world, sfVector2f vector[2])
{
    sfVertexArray *array = sfVertexArray_create();
    sfVertex vertex1 = {.position = vector[0] , .color = sfWhite};
    sfVertex vertex2 = {.position = vector[1] , .color = sfWhite};

    sfVertexArray_append(array, vertex1);
    sfVertexArray_append(array, vertex2);
    sfVertexArray_setPrimitiveType(array , sfLinesStrip);
    return (array);
}
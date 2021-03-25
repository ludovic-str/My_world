/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** init_helpbox
*/

#include "../../../../include/my_world.h"

void init_helpbox1(world_t *world)
{
    world->map->create_helpbox_cursor = sfTexture_createFromFile
    ("assets/map/helpbox/1.png", NULL);
    world->map->helpbox_cursor = sfSprite_create();
    sfSprite_setTexture(world->map->helpbox_cursor,
    world->map->create_helpbox_cursor, sfTrue);
        world->map->create_helpbox_buildozer = sfTexture_createFromFile
    ("assets/map/helpbox/2.png", NULL);
    world->map->helpbox_buildozer = sfSprite_create();
    sfSprite_setTexture(world->map->helpbox_buildozer,
    world->map->create_helpbox_buildozer, sfTrue);
        world->map->create_helpbox_up = sfTexture_createFromFile
    ("assets/map/helpbox/3.png", NULL);
    world->map->helpbox_up = sfSprite_create();
    sfSprite_setTexture(world->map->helpbox_up,
    world->map->create_helpbox_up, sfTrue);
        world->map->create_helpbox_down = sfTexture_createFromFile
    ("assets/map/helpbox/4.png", NULL);
    world->map->helpbox_down = sfSprite_create();
    sfSprite_setTexture(world->map->helpbox_down,
    world->map->create_helpbox_down, sfTrue);
}

void init_helpbox2(world_t *world)
{
    world->map->create_helpbox_equal = sfTexture_createFromFile
    ("assets/map/helpbox/5.png", NULL);
    world->map->helpbox_equal = sfSprite_create();
    sfSprite_setTexture(world->map->helpbox_equal,
    world->map->create_helpbox_equal, sfTrue);
        world->map->create_helpbox_home = sfTexture_createFromFile
    ("assets/map/helpbox/6.png", NULL);
    world->map->helpbox_home = sfSprite_create();
    sfSprite_setTexture(world->map->helpbox_home,
    world->map->create_helpbox_home, sfTrue);
        world->map->create_helpbox_building = sfTexture_createFromFile
    ("assets/map/helpbox/7.png", NULL);
    world->map->helpbox_building = sfSprite_create();
    sfSprite_setTexture(world->map->helpbox_building,
    world->map->create_helpbox_building, sfTrue);
        world->map->create_helpbox_cityhall = sfTexture_createFromFile
    ("assets/map/helpbox/8.png", NULL);
    world->map->helpbox_cityhall = sfSprite_create();
    sfSprite_setTexture(world->map->helpbox_cityhall,
    world->map->create_helpbox_cityhall, sfTrue);
}
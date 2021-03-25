/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** init_menu_map
*/

#include "../../../../include/my_world.h"

int creat_menu(world_t *world)
{
    sfVector2f position_menu = {30, 20};
    sfVector2f position_settings = {1775, 20};

    world->map->create_menu = sfTexture_createFromFile
    ("assets/map/menu_bar.png", NULL);
    world->map->menu = sfSprite_create();
    sfSprite_setTexture(world->map->menu,
    world->map->create_menu, sfTrue);
    sfSprite_setPosition(world->map->menu,
    position_menu);
    world->map->create_settings = sfTexture_createFromFile
    ("assets/map/settings.png", NULL);
    world->map->settings = sfSprite_create();
    sfSprite_setTexture(world->map->settings,
    world->map->create_settings, sfTrue);
    sfSprite_setPosition(world->map->settings,
    position_settings);
}

int creat_zoom(world_t *world)
{
    sfVector2f position_zoom = {1690, 875};

    world->map->create_zoom = sfTexture_createFromFile
    ("assets/map/settings/zoom.png", NULL);
    world->map->zoom = sfSprite_create();
    sfSprite_setTexture(world->map->zoom,
    world->map->create_zoom, sfTrue);
    sfSprite_setPosition(world->map->zoom,
    position_zoom);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** init_settings_settings
*/

#include "../../../../include/my_world.h"

int map_settings(world_t *world)
{
    sfVector2f position_back = {881, 710};

    world->map->map_settings->create_settings_font = sfTexture_createFromFile
    ("assets/map/settings/settings/settings_font.png", NULL);
    world->map->map_settings->settings_font = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->settings_font,
    world->map->map_settings->create_settings_font, sfTrue);
    world->map->map_settings->create_back = sfTexture_createFromFile
    ("assets/map/settings/settings/back.png", NULL);
    world->map->map_settings->back = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->back,
    world->map->map_settings->create_back, sfTrue);
    sfSprite_setPosition(world->map->map_settings->back, position_back);
    world->map->map_settings->create_back_clicked = sfTexture_createFromFile
    ("assets/start/buttom/settings/clicked.png", NULL);
    world->map->map_settings->back_clicked = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->back_clicked,
    world->map->map_settings->create_back_clicked, sfTrue);
    sfSprite_setPosition(world->map->map_settings->back_clicked,
    position_back);
}
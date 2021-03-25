/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** init_settings_map
*/

#include "../../../../include/my_world.h"

int creat_menu_map1(world_t *world)
{
    sfVector2f position_resume = {822.5, 310};

    world->map->map_settings->create_blur_font = sfTexture_createFromFile
    ("assets/map/settings/blur_font.png", NULL);
    world->map->map_settings->blur_font = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->blur_font,
    world->map->map_settings->create_blur_font, sfTrue);
    world->map->map_settings->create_resume = sfTexture_createFromFile
    ("assets/map/settings/resume.png", NULL);
    world->map->map_settings->resume = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->resume,
    world->map->map_settings->create_resume, sfTrue);
    sfSprite_setPosition(world->map->map_settings->resume, position_resume);
    world->map->map_settings->create_resume_hover = sfTexture_createFromFile
    ("assets/map/settings/resume_hover.png", NULL);
    world->map->map_settings->resume_hover = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->resume_hover,
    world->map->map_settings->create_resume_hover, sfTrue);
    sfSprite_setPosition(world->map->map_settings->resume_hover,
    position_resume);
}

int creat_menu_map2(world_t *world)
{
    sfVector2f position_resume = {822.5, 310};
    sfVector2f position_settings = {822.5, 472};

    world->map->map_settings->create_resume_clicked = sfTexture_createFromFile
    ("assets/map/settings/resume_clicked.png", NULL);
    world->map->map_settings->resume_clicked = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->resume_clicked,
    world->map->map_settings->create_resume_clicked, sfTrue);
    sfSprite_setPosition(world->map->map_settings->resume_clicked,
    position_resume);
    world->map->map_settings->create_settings = sfTexture_createFromFile
    ("assets/map/settings/settings2.png", NULL);
    world->map->map_settings->settings = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->settings,
    world->map->map_settings->create_settings, sfTrue);
    sfSprite_setPosition(world->map->map_settings->settings,
    position_settings);
}

int creat_menu_map3(world_t *world)
{
    sfVector2f position_settings = {822.5, 472};

    world->map->map_settings->create_settings_hover =
    sfTexture_createFromFile("assets/map/settings/settings2_hover.png", NULL);
    world->map->map_settings->settings_hover = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->settings_hover,
    world->map->map_settings->create_settings_hover, sfTrue);
    sfSprite_setPosition(world->map->map_settings->settings_hover,
    position_settings);
    world->map->map_settings->create_settings_clicked =
    sfTexture_createFromFile
    ("assets/map/settings/settings2_clicked.png", NULL);
    world->map->map_settings->settings_clicked = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->settings_clicked,
    world->map->map_settings->create_settings_clicked, sfTrue);
    sfSprite_setPosition(world->map->map_settings->settings_clicked,
    position_settings);
}

int creat_menu_map4(world_t *world)
{
    sfVector2f position_menu = {822.5, 633};

    world->map->map_settings->create_menu =
    sfTexture_createFromFile("assets/map/settings/menu.png", NULL);
    world->map->map_settings->menu = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->menu,
    world->map->map_settings->create_menu, sfTrue);
    sfSprite_setPosition(world->map->map_settings->menu,
    position_menu);
    world->map->map_settings->create_menu_hover =
    sfTexture_createFromFile("assets/map/settings/menu_hover.png", NULL);
    world->map->map_settings->menu_hover = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->menu_hover,
    world->map->map_settings->create_menu_hover, sfTrue);
    sfSprite_setPosition(world->map->map_settings->menu_hover,
    position_menu);
}

int creat_menu_map5(world_t *world)
{
    sfVector2f position_menu = {822.5, 633};

    world->map->map_settings->create_menu_clicked =
    sfTexture_createFromFile("assets/map/settings/menu_clicked.png", NULL);
    world->map->map_settings->menu_clicked = sfSprite_create();
    sfSprite_setTexture(world->map->map_settings->menu_clicked,
    world->map->map_settings->create_menu_clicked, sfTrue);
    sfSprite_setPosition(world->map->map_settings->menu_clicked,
    position_menu);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** init_creat
*/

#include "../../../include/my_world.h"

int creat_click(world_t *world)
{
    sfVector2f position_button_create = {90, 273};
    sfVector2f position_button_settings = {90, 400};

    world->menu->create_clicked = sfTexture_createFromFile
    ("assets/start/buttom/create_clicked.png", NULL);
    world->menu->button_create_clicked = sfSprite_create();
    sfSprite_setTexture(world->menu->button_create_clicked,
    world->menu->create_clicked, sfTrue);
    sfSprite_setPosition(world->menu->button_create_clicked,
    position_button_create);
    world->menu->settings_clicked = sfTexture_createFromFile
    ("assets/start/buttom/settings_clicked.png", NULL);
    world->menu->button_settings_clicked = sfSprite_create();
    sfSprite_setTexture(world->menu->button_settings_clicked,
    world->menu->settings_clicked, sfTrue);
    sfSprite_setPosition(world->menu->button_settings_clicked,
    position_button_settings);
}

int creat_create(world_t *world)
{
    sfVector2f position_banderol_create = {450, 239};
    sfVector2f position_button_width = {500, 310};

    world->menu->band_create = sfTexture_createFromFile
    ("assets/start/buttom/create/bandeau_create.png", NULL);
    world->menu->banderol_create = sfSprite_create();
    sfSprite_setTexture(world->menu->banderol_create,
    world->menu->band_create, sfTrue);
    sfSprite_setPosition(world->menu->banderol_create,
    position_banderol_create);
    world->menu->width = sfTexture_createFromFile
    ("assets/start/buttom/create/width.png", NULL);
    world->menu->button_width = sfSprite_create();
    sfSprite_setTexture(world->menu->button_width,
    world->menu->width, sfTrue);
    sfSprite_setPosition(world->menu->button_width,
    position_button_width);
}

int creat_create2(world_t *world)
{
    sfVector2f position_button_height = {695, 310};
    sfVector2f position_button_create_map = {555, 397};

    world->menu->height = sfTexture_createFromFile
    ("assets/start/buttom/create/height.png", NULL);
    world->menu->button_height = sfSprite_create();
    sfSprite_setTexture(world->menu->button_height,
    world->menu->height, sfTrue);
    sfSprite_setPosition(world->menu->button_height,
    position_button_height);
    world->menu->create_map = sfTexture_createFromFile
    ("assets/start/buttom/create/create_map.png", NULL);
    world->menu->button_create_map = sfSprite_create();
    sfSprite_setTexture(world->menu->button_create_map,
    world->menu->create_map, sfTrue);
    sfSprite_setPosition(world->menu->button_create_map,
    position_button_create_map);
}

int creat_create3(world_t *world)
{
    sfVector2f position_button_create_map = {555, 397};

    world->menu->create_map_hover = sfTexture_createFromFile
    ("assets/start/buttom/create/create_map_hover.png", NULL);
    world->menu->button_create_map_hover = sfSprite_create();
    sfSprite_setTexture(world->menu->button_create_map_hover,
    world->menu->create_map_hover, sfTrue);
    sfSprite_setPosition(world->menu->button_create_map_hover,
    position_button_create_map);
    world->menu->create_map_clicked = sfTexture_createFromFile
    ("assets/start/buttom/create/create_map_clicked.png", NULL);
    world->menu->button_create_map_clicked = sfSprite_create();
    sfSprite_setTexture(world->menu->button_create_map_clicked,
    world->menu->create_map_clicked, sfTrue);
    sfSprite_setPosition(world->menu->button_create_map_clicked,
    position_button_create_map);
}

int creat_create4(world_t *world)
{
    sfVector2f position_button_height = {695, 310};
    sfVector2f position_button_width = {500, 310};

    world->menu->height_empty = sfTexture_createFromFile
    ("assets/start/buttom/create/wh_void.png", NULL);
    world->menu->button_height_empty = sfSprite_create();
    sfSprite_setTexture(world->menu->button_height_empty,
    world->menu->height_empty, sfTrue);
    sfSprite_setPosition(world->menu->button_height_empty,
    position_button_height);
    world->menu->width_empty = sfTexture_createFromFile
    ("assets/start/buttom/create/wh_void.png", NULL);
    world->menu->button_width_empty = sfSprite_create();
    sfSprite_setTexture(world->menu->button_width_empty,
    world->menu->width_empty, sfTrue);
    sfSprite_setPosition(world->menu->button_width_empty,
    position_button_width);
    world->menu->input_hei[0] = '\0';
    world->menu->input_width[0] = '\0';
}
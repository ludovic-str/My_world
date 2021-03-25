/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** init_settings2
*/

#include "../../../include/my_world.h"

int creat_sound(world_t *world)
{
    sfVector2f position_sound = {690, 506};

    world->menu->create_sound_on = sfTexture_createFromFile
    ("assets/start/buttom/settings/on.png", NULL);
    world->menu->sound_on = sfSprite_create();
    sfSprite_setTexture(world->menu->sound_on,
    world->menu->create_sound_on, sfTrue);
    sfSprite_setPosition(world->menu->sound_on,
    position_sound);
    world->menu->create_sound_off = sfTexture_createFromFile
    ("assets/start/buttom/settings/off.png", NULL);
    world->menu->sound_off = sfSprite_create();
    sfSprite_setTexture(world->menu->sound_off,
    world->menu->create_sound_off, sfTrue);
    sfSprite_setPosition(world->menu->sound_off,
    position_sound);
}

int creat_volume(world_t *world)
{
    sfVector2f position_volume = {690, 582};

    world->menu->create_volume_25 = sfTexture_createFromFile
    ("assets/start/buttom/settings/25.png", NULL);
    world->menu->volume_25 = sfSprite_create();
    sfSprite_setTexture(world->menu->volume_25,
    world->menu->create_volume_25, sfTrue);
    sfSprite_setPosition(world->menu->volume_25,
    position_volume);
    world->menu->create_volume_50 = sfTexture_createFromFile
    ("assets/start/buttom/settings/50.png", NULL);
    world->menu->volume_50 = sfSprite_create();
    sfSprite_setTexture(world->menu->volume_50,
    world->menu->create_volume_50, sfTrue);
    sfSprite_setPosition(world->menu->volume_50,
    position_volume);
}

int creat_volume2(world_t *world)
{
    sfVector2f position_volume = {690, 582};

    world->menu->create_volume_75 = sfTexture_createFromFile
    ("assets/start/buttom/settings/75.png", NULL);
    world->menu->volume_75 = sfSprite_create();
    sfSprite_setTexture(world->menu->volume_75,
    world->menu->create_volume_75, sfTrue);
    sfSprite_setPosition(world->menu->volume_75,
    position_volume);
    world->menu->create_volume_100 = sfTexture_createFromFile
    ("assets/start/buttom/settings/100.png", NULL);
    world->menu->volume_100 = sfSprite_create();
    sfSprite_setTexture(world->menu->volume_100,
    world->menu->create_volume_100, sfTrue);
    sfSprite_setPosition(world->menu->volume_100,
    position_volume);
}

int creat_volume3(world_t *world)
{
    sfVector2f position_volume = {690, 582};

    world->menu->create_volume_desactivated = sfTexture_createFromFile
    ("assets/start/buttom/settings/desactivated.png", NULL);
    world->menu->volume_desactivated = sfSprite_create();
    sfSprite_setTexture(world->menu->volume_desactivated,
    world->menu->create_volume_desactivated, sfTrue);
    sfSprite_setPosition(world->menu->volume_desactivated,
    position_volume);
    world->menu->create_volume_clicked = sfTexture_createFromFile
    ("assets/start/buttom/settings/clicked.png", NULL);
    world->menu->volume_clicked = sfSprite_create();
    sfSprite_setTexture(world->menu->volume_clicked,
    world->menu->create_volume_clicked, sfTrue);
    sfSprite_setPosition(world->menu->volume_clicked,
    position_volume);
}

int creat_volume4(world_t *world)
{
    sfVector2f position_sound = {690, 506};
    sfVector2f position_resolution = {690, 430};

    world->menu->create_sound_clicked = sfTexture_createFromFile
    ("assets/start/buttom/settings/clicked.png", NULL);
    world->menu->sound_clicked = sfSprite_create();
    sfSprite_setTexture(world->menu->sound_clicked,
    world->menu->create_sound_clicked, sfTrue);
    sfSprite_setPosition(world->menu->sound_clicked,
    position_sound);
    world->menu->create_resolution_clicked = sfTexture_createFromFile
    ("assets/start/buttom/settings/clicked.png", NULL);
    world->menu->resolution_clicked = sfSprite_create();
    sfSprite_setTexture(world->menu->resolution_clicked,
    world->menu->create_resolution_clicked, sfTrue);
    sfSprite_setPosition(world->menu->resolution_clicked,
    position_resolution);
}
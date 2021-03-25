/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** init_settings
*/

#include "../../../include/my_world.h"

int creat_settings(world_t *world)
{
    sfVector2f position_banderol_settings = {450, 359};
    sfVector2f position_texte_resolution = {480, 430};

    world->menu->band_settings = sfTexture_createFromFile
    ("assets/start/buttom/settings/bandeau_settings.png", NULL);
    world->menu->banderol_settings = sfSprite_create();
    sfSprite_setTexture(world->menu->banderol_settings,
    world->menu->band_settings, sfTrue);
    sfSprite_setPosition(world->menu->banderol_settings,
    position_banderol_settings);
    world->menu->txt_resolution = sfTexture_createFromFile
    ("assets/start/buttom/settings/resolution.png", NULL);
    world->menu->texte_resolution = sfSprite_create();
    sfSprite_setTexture(world->menu->texte_resolution,
    world->menu->txt_resolution, sfTrue);
    sfSprite_setPosition(world->menu->texte_resolution,
    position_texte_resolution);
}

int creat_settings2(world_t *world)
{
    sfVector2f position_texte_sound = {480, 506};
    sfVector2f position_texte_volume = {480, 582};

    world->menu->txt_sound = sfTexture_createFromFile
    ("assets/start/buttom/settings/sound.png", NULL);
    world->menu->texte_sound = sfSprite_create();
    sfSprite_setTexture(world->menu->texte_sound,
    world->menu->txt_sound, sfTrue);
    sfSprite_setPosition(world->menu->texte_sound,
    position_texte_sound);
    world->menu->txt_volume = sfTexture_createFromFile
    ("assets/start/buttom/settings/volume.png", NULL);
    world->menu->texte_volume = sfSprite_create();
    sfSprite_setTexture(world->menu->texte_volume,
    world->menu->txt_volume, sfTrue);
    sfSprite_setPosition(world->menu->texte_volume,
    position_texte_volume);
}

int creat_resolution(world_t *world)
{
    sfVector2f position_resolution = {690, 430};

    world->menu->create_resolution_1 = sfTexture_createFromFile
    ("assets/start/buttom/settings/1920x1080.png", NULL);
    world->menu->resolution_1 = sfSprite_create();
    sfSprite_setTexture(world->menu->resolution_1,
    world->menu->create_resolution_1, sfTrue);
    sfSprite_setPosition(world->menu->resolution_1,
    position_resolution);
    world->menu->create_resolution_2 = sfTexture_createFromFile
    ("assets/start/buttom/settings/1280x720.png", NULL);
    world->menu->resolution_2 = sfSprite_create();
    sfSprite_setTexture(world->menu->resolution_2,
    world->menu->create_resolution_2, sfTrue);
    sfSprite_setPosition(world->menu->resolution_2,
    position_resolution);
}

int creat_resolution2(world_t *world)
{
    sfVector2f position_resolution = {690, 430};

    world->menu->create_resolution_3 = sfTexture_createFromFile
    ("assets/start/buttom/settings/1160x630.png", NULL);
    world->menu->resolution_3 = sfSprite_create();
    sfSprite_setTexture(world->menu->resolution_3,
    world->menu->create_resolution_3, sfTrue);
    sfSprite_setPosition(world->menu->resolution_3,
    position_resolution);
}

int creat_error_whidth_height(world_t *world)
{
    sfVector2f position_width = {500, 310};
    sfVector2f position_height = {695, 310};

    world->menu->create_error_width = sfTexture_createFromFile
    ("assets/start/buttom/create/error.png", NULL);
    world->menu->error_width = sfSprite_create();
    sfSprite_setTexture(world->menu->error_width,
    world->menu->create_error_width, sfTrue);
    sfSprite_setPosition(world->menu->error_width,
    position_width);
    world->menu->create_error_height = sfTexture_createFromFile
    ("assets/start/buttom/create/error.png", NULL);
    world->menu->error_height = sfSprite_create();
    sfSprite_setTexture(world->menu->error_height,
    world->menu->create_error_height, sfTrue);
    sfSprite_setPosition(world->menu->error_height,
    position_height);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** init_menu
*/

#include "../../../include/my_world.h"

int creat_button(world_t *world)
{
    sfVector2f position_buttom_create = {90, 273};

    world->menu->create =
    sfTexture_createFromFile("assets/start/buttom/create.png", NULL);
    world->menu->buttom_create = sfSprite_create();
    sfSprite_setTexture(world->menu->buttom_create,
    world->menu->create, sfTrue);
    sfSprite_setPosition(world->menu->buttom_create, position_buttom_create);
    world->menu->create_hover = sfTexture_createFromFile
    ("assets/start/buttom/create_hover.png", NULL);
    world->menu->buttom_create_hover = sfSprite_create();
    sfSprite_setTexture(world->menu->buttom_create_hover,
    world->menu->create_hover, sfTrue);
    sfSprite_setPosition(world->menu->buttom_create_hover,
    position_buttom_create);
}

int settings_button(world_t *world)
{
    sfVector2f position_buttom_settings = {90, 400};

    world->menu->settings = sfTexture_createFromFile
    ("assets/start/buttom/settings.png", NULL);
    world->menu->buttom_settings = sfSprite_create();
    sfSprite_setTexture(world->menu->buttom_settings,
    world->menu->settings, sfTrue);
    sfSprite_setPosition(world->menu->buttom_settings,
    position_buttom_settings);
    world->menu->settings_hover = sfTexture_createFromFile
    ("assets/start/buttom/settings_hover.png", NULL);
    world->menu->buttom_settings_hover = sfSprite_create();
    sfSprite_setTexture(world->menu->buttom_settings_hover,
    world->menu->settings_hover, sfTrue);
    sfSprite_setPosition(world->menu->buttom_settings_hover,
    position_buttom_settings);
}

int background_feature(world_t *world)
{
    sfVector2f position_map_editor = {101.132, 96.9};
    sfVector2f position_copyright = {76, 875};

    world->menu->band = sfTexture_createFromFile
    ("assets/start/buttom/bandeau.png", NULL);
    world->menu->banderol = sfSprite_create();
    sfSprite_setTexture(world->menu->banderol, world->menu->band, sfTrue);
    world->menu->map = sfTexture_createFromFile
    ("assets/start/buttom/texts/map_editor.png", NULL);
    world->menu->map_editor = sfSprite_create();
    sfSprite_setTexture(world->menu->map_editor, world->menu->map, sfTrue);
    sfSprite_setPosition(world->menu->map_editor, position_map_editor);
    world->menu->cop = sfTexture_createFromFile
    ("assets/start/buttom/texts/copyright.png", NULL);
    world->menu->copyright = sfSprite_create();
    sfSprite_setTexture(world->menu->copyright, world->menu->cop, sfTrue);
    sfSprite_setPosition(world->menu->copyright, position_copyright);
}

int background(world_t *world)
{
    char randback[1];
    char *back_path;

    realrandom(world);
    randback[0] = (rand() % 9) + '0';
    randback[1] = '\0';
    back_path = my_strcat("assets/background/", randback);
    back_path = my_strcat(back_path, ".jpg");
    world->menu->back = sfTexture_createFromFile(back_path, NULL);
    world->menu->background = sfSprite_create();
    sfSprite_setTexture(world->menu->background, world->menu->back, sfTrue);
    background_feature(world);
}

int init_all(world_t *world)
{
    settings_button(world);
    creat_button(world);
    creat_click(world);
    creat_create(world);
    creat_create2(world);
    creat_create3(world);
    creat_create4(world);
    creat_settings(world);
    creat_settings2(world);
    creat_resolution(world);
    creat_resolution2(world);
    creat_sound(world);
    creat_volume(world);
    creat_volume2(world);
    creat_volume3(world);
    creat_volume4(world);
    create_cursor(world);
    creat_create4(world);
    initmap_bg(world);
    creat_menu(world);
    creat_zoom(world);
}
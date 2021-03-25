/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** init_popup
*/

#include "../../include/my_world.h"

int creat_popup(world_t *world)
{
    sfVector2f position_ksp_create = {200, 100};

    world->popup->create_ksp = sfTexture_createFromFile
    ("assets/popup/ksp.png", NULL);
    world->popup->ksp = sfSprite_create();
    sfSprite_setTexture(world->popup->ksp,
    world->popup->create_ksp, sfTrue);
    sfSprite_setPosition(world->popup->ksp,
    position_ksp_create);
}

int creat_up(world_t *world)
{
    sfVector2f position_up_create = {40, 780};
    sfVector2f position_down_create = {40, 780};

    world->popup->create_up = sfTexture_createFromFile
    ("assets/popup/1.png", NULL);
    world->popup->up = sfSprite_create();
    sfSprite_setTexture(world->popup->up,
    world->popup->create_up, sfTrue);
    sfSprite_setPosition(world->popup->up,
    position_up_create);
    world->popup->create_down = sfTexture_createFromFile
    ("assets/popup/2.png", NULL);
    world->popup->down = sfSprite_create();
    sfSprite_setTexture(world->popup->down,
    world->popup->create_down, sfTrue);
    sfSprite_setPosition(world->popup->down,
    position_down_create);
}

int creat_buldo(world_t *world)
{
    sfVector2f position_buldo_create = {40, 780};

    world->popup->create_buldo = sfTexture_createFromFile
    ("assets/popup/4.png", NULL);
    world->popup->buldo = sfSprite_create();
    sfSprite_setTexture(world->popup->buldo,
    world->popup->create_buldo, sfTrue);
    sfSprite_setPosition(world->popup->buldo,
    position_buldo_create);
    world->popup->create_shortcuts = sfTexture_createFromFile
    ("assets/popup/7.png", NULL);
    world->popup->shortcuts = sfSprite_create();
    sfSprite_setTexture(world->popup->shortcuts,
    world->popup->create_shortcuts, sfTrue);
    sfSprite_setPosition(world->popup->shortcuts,
    position_buldo_create);
}

int creat_equal(world_t *world)
{
    sfVector2f position_equal_create = {40, 780};

    world->popup->create_equal = sfTexture_createFromFile
    ("assets/popup/3.png", NULL);
    world->popup->equal = sfSprite_create();
    sfSprite_setTexture(world->popup->equal,
    world->popup->create_equal, sfTrue);
    sfSprite_setPosition(world->popup->equal,
    position_equal_create);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** init_cursor
*/

#include "../../../include/my_world.h"

int init_cursor1(world_t *world)
{
    world->cursor->create_up = sfTexture_createFromFile
    ("assets/cursor/up.png", NULL);
    world->cursor->cursor_up = sfSprite_create();
    sfSprite_setTexture(world->cursor->cursor_up,
    world->cursor->create_up, sfTrue);
    world->cursor->create_down = sfTexture_createFromFile
    ("assets/cursor/down.png", NULL);
    world->cursor->cursor_down = sfSprite_create();
    sfSprite_setTexture(world->cursor->cursor_down,
    world->cursor->create_down, sfTrue);
    world->cursor->create_equal = sfTexture_createFromFile
    ("assets/cursor/equal.png", NULL);
    world->cursor->cursor_equal = sfSprite_create();
    sfSprite_setTexture(world->cursor->cursor_equal,
    world->cursor->create_equal, sfTrue);
    world->cursor->create_home = sfTexture_createFromFile
    ("assets/cursor/home.png", NULL);
    world->cursor->cursor_home = sfSprite_create();
    sfSprite_setTexture(world->cursor->cursor_home,
    world->cursor->create_home, sfTrue);
}

int init_cursor2(world_t *world)
{
    world->cursor->create_hotel = sfTexture_createFromFile
    ("assets/cursor/hotel.png", NULL);
    world->cursor->cursor_hotel = sfSprite_create();
    sfSprite_setTexture(world->cursor->cursor_hotel,
    world->cursor->create_hotel, sfTrue);
    world->cursor->create_skyscraper = sfTexture_createFromFile
    ("assets/cursor/skyscraper.png", NULL);
    world->cursor->cursor_skyscraper = sfSprite_create();
    sfSprite_setTexture(world->cursor->cursor_skyscraper,
    world->cursor->create_skyscraper, sfTrue);
}

int create_cursor(world_t *world)
{
    world->cursor->create_cursor = sfTexture_createFromFile
    ("assets/cursor/cursor.png", NULL);
    world->cursor->cursor = sfSprite_create();
    sfSprite_setTexture(world->cursor->cursor,
    world->cursor->create_cursor, sfTrue);
    world->cursor->create_text_cursor = sfTexture_createFromFile
    ("assets/cursor/text_cursor.png", NULL);
    world->cursor->cursor_text = sfSprite_create();
    sfSprite_setTexture(world->cursor->cursor_text,
    world->cursor->create_text_cursor, sfTrue);
    world->cursor->create_buldozer = sfTexture_createFromFile
    ("assets/cursor/buldozer.png", NULL);
    world->cursor->cursor_buldozer = sfSprite_create();
    sfSprite_setTexture(world->cursor->cursor_buldozer,
    world->cursor->create_buldozer, sfTrue);
    init_cursor1(world);
    init_cursor2(world);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** helpbox
*/

#include "../../../include/my_world.h"

void helpbox5(world_t *world, sfVector2i cursor)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 125)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 200) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115)))) {
        sfSprite_setPosition(world->map->helpbox_buildozer,
        (sfVector2f){cursor.x + 10, cursor.y + 30});
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->helpbox_buildozer, NULL);
    }
}

void helpbox4(world_t *world, sfVector2i cursor)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 508)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 585) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115)))) {
        sfSprite_setPosition(world->map->helpbox_building,
        (sfVector2f){cursor.x + 10, cursor.y + 30});
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->helpbox_building, NULL);
    }
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 585)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 661) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115)))) {
        sfSprite_setPosition(world->map->helpbox_cityhall,
        (sfVector2f){cursor.x + 10, cursor.y + 30});
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->helpbox_cityhall, NULL);
    }
    helpbox5(world, cursor);
}

void helpbox3(world_t *world, sfVector2i cursor)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 355)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 431) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115)))) {
        sfSprite_setPosition(world->map->helpbox_equal,
        (sfVector2f){cursor.x + 10, cursor.y + 30});
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->helpbox_equal, NULL);
    }
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 431)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 508) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115)))) {
        sfSprite_setPosition(world->map->helpbox_home,
        (sfVector2f){cursor.x + 10, cursor.y + 30});
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->helpbox_home, NULL);
    }
    helpbox4(world, cursor);
}

void helpbox2(world_t *world, sfVector2i cursor)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 200)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 279) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115)))) {
        sfSprite_setPosition(world->map->helpbox_up,
        (sfVector2f){cursor.x + 10, cursor.y + 30});
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->helpbox_up, NULL);
    }
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 280)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 355) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115)))) {
        sfSprite_setPosition(world->map->helpbox_down,
        (sfVector2f){cursor.x + 10, cursor.y + 30});
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->helpbox_down, NULL);
    }
    helpbox3(world, cursor);
}

void helpbox1(world_t *world)
{
    sfVector2i cursor =
    sfMouse_getPositionRenderWindow(world->window->my_window);

    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 50)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 40)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 126) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 115)))) {
        sfSprite_setPosition(world->map->helpbox_cursor,
        (sfVector2f){cursor.x + 10, cursor.y + 30});
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->helpbox_cursor, NULL);
    }
    helpbox2(world, cursor);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** map
*/

#include "../../include/my_world.h"

void drawcircle(world_t *world)
{
    if (world->status == 3 && world->map->select_menu_cursor == 2
    || world->map->select_menu_cursor == 3 ||
    world->map->select_menu_cursor == 4 ||
    world->map->select_menu_cursor == 1) {
        sfVector2i mouse_pos =
        sfMouse_getPositionRenderWindow(world->window->my_window);
        sfCircleShape_setPosition(world->map->circleshape,
        (sfVector2f){mouse_pos.x - (world->map->shaperadius -
        world->map->shaperadius / 10) ,
        mouse_pos.y - (world->map->shaperadius / 2 -
        world->map->shaperadius / 8)});
        sfRenderWindow_drawCircleShape(world->window->my_window,
        world->map->circleshape, NULL);
    }
}

int clic_settings(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed) {
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 1775)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 20)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 1890) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 135)))) {
            world->map->select_menu_cursor = 0;
            world->status = 4;
        }
    }
}

int accesory_map(world_t *world)
{
    sfVector2f mouse = {adapt_cursor_x(world, world->window->mouse.x),
    adapt_cursor_y(world, world->window->mouse.y)};

    if (world->status == 3) {
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->menu, NULL);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->settings, NULL);
        clic_settings(world);
        shortcut(world);
        zoom(world);
        popup1(world);
        select_cursor(world);
        cursor_status(world, mouse);
        activate_tool(world);
        helpbox1(world);
    }
}

int map(world_t *world)
{
    sfRenderWindow_clear(world->window->my_window, sfBlack);
    draw_2d_map(world);
    accesory_map(world);
    initcircleshape(world);
    drawcircle(world);
    world->map->clothesti[0] = 0;
    world->map->clothestj[0] = 0;
}
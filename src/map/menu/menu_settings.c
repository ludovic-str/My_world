/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** menu_settings
*/

#include "../../../include/my_world.h"

int clicked1(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 822.5)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 310)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 1097)) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 375))) {
        sfSound_play(world->audio->clic);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->map_settings->resume_clicked, NULL);
        world->status = 3;
    }
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 822.5)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 472)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 1097)) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 537))) {
        sfSound_play(world->audio->clic);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->map_settings->settings_clicked, NULL);
        world->status = 6;
    }
}

int restart_menu(world_t *world)
{
    init_all(world);
    init_vertex(world);
    init_text(world);
    world->window->width = 0;
    world->window->height = 0;
    world->status = 0;
    world->audio->audio = 0;
    world->audio->volume = 1;
    world->menu->size = 0;
    world->map->select_menu_cursor = 0;
    world->menu->time_loop = 0;
    world->menu->text = 0;
}

int clicked2(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 822.5)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 633)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 1097)) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 698))) {
        sfSound_play(world->audio->clic);
        background(world);
        restart_menu(world);
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->map_settings->menu_clicked, NULL);
        world->status = 0;
    }
}

int hover(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 822.5)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 310)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 1097)) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 375)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->map_settings->resume_hover, NULL);
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 822.5)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 472)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 1097)) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 537)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->map_settings->settings_hover, NULL);
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 822.5)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 633)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 1097)) &&
    (world->window->mouse.y <= adapt_hitbox_y(world, 698)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->map->map_settings->menu_hover, NULL);
}

int settings(world_t *world)
{
    sfRenderWindow_drawSprite(world->window->my_window,
    world->map->map_settings->blur_font, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->map->map_settings->resume, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->map->map_settings->settings, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->map->map_settings->menu, NULL);
    hover(world);
    if (world->window->event.type == sfEvtMouseButtonPressed) {
        clicked1(world);
        clicked2(world);
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)
    && world->menu->time_loop >= 0.2) {
        world->status = 3;
        world->menu->time_loop = 0;
    }
}
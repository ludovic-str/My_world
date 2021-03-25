/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** check_text
*/

#include "../../include/my_world.h"

int acces_w_enter(world_t *world)
{
    if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
        if (world->menu->input_hei[0] != '\0' &&
        world->menu->input_width[0] != '\0') {
            intmap(world);
            create_2d_map(world);
            world->map->clothesti = malloc(sizeof(int) *
            (world->window->height * world->window->width));
            world->map->clothestj = malloc(sizeof(int) *
            (world->window->height * world->window->width));
            world->status = 3;
        }
    }
}

int acces_authorize(world_t *world)
{
    acces_w_enter(world);
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (world->menu->input_hei[0] != '\0' &&
        world->menu->input_width[0] != '\0' &&
        (((world->window->mouse.x) >= adapt_hitbox_x(world, 555)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 397)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 795)) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 447)))) {
            sfRenderWindow_drawSprite(world->window->my_window,
            world->menu->button_create_map_clicked, NULL);
            sfSound_play(world->audio->clic);
            intmap(world);
            create_2d_map(world);
            world->map->clothesti = malloc(sizeof(int) *
            (world->window->height * world->window->width));
            world->map->clothestj = malloc(sizeof(int) *
            (world->window->height * world->window->width));
            world->status = 3;
        }
}

int convert_text(world_t *world)
{
    world->window->width = my_getnbr(world->menu->input_width);
    world->window->height = my_getnbr(world->menu->input_hei);

    if (world->status == 7) {
        if (world->menu->input_width[0] == '\0')
            sfRenderWindow_drawSprite(world->window->my_window,
            world->menu->error_width, NULL);
        if (world->menu->input_hei[0] == '\0')
            sfRenderWindow_drawSprite(world->window->my_window,
            world->menu->error_height, NULL);
    }
    acces_authorize(world);
}
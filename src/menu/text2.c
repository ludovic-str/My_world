/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** text2
*/

#include "../../include/my_world.h"

void render_height(world_t *world)
{
    sfRenderWindow_drawText(world->window->my_window,
    world->menu->height_txt, NULL);
}

void render_width(world_t *world)
{
    sfRenderWindow_drawText(world->window->my_window,
    world->menu->width_txt, NULL);
}

int enter_text_height(world_t *world)
{
    sfVector2f position_height;

    if (world->window->event.type == sfEvtTextEntered) {
        if (world->menu->text == 2 && world->window->event.text.unicode < 58
        && (world->window->event.text.unicode > 47 &&
        world->menu->time_loop >= 0.15)) {
            update_text(world->menu->input_hei, world->window->event);
            sfText_setString(world->menu->height_txt, world->menu->input_hei);
            world->menu->time_loop = 0;
        }
        if (world->menu->text == 2 && world->window->event.text.unicode == 8
        && world->menu->time_loop >= 0.15) {
            update_text(world->menu->input_hei, world->window->event);
            sfText_setString(world->menu->height_txt, world->menu->input_hei);
            world->menu->time_loop = 0;
        }
        position_height.x = 772 - (my_strlen(world->menu->input_hei) * 8);
        position_height.y = 319;
        sfText_setPosition(world->menu->height_txt, position_height);
    }
    render_height(world);
}
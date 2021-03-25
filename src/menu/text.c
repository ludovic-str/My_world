/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** text
*/

#include "../../include/my_world.h"

int add_char(char c, char *input)
{
    int len = my_textboxlen(input);

    if (len >= 3)
        return (0);
    input[len] = c;
    input[len + 1] = '\0';
    return (0);
}

int delete_char(char *input)
{
    int len = my_strlen(input);

    if (len == 0)
        return (0);
    input[len - 1] = '\0';
    return (0);
}

int update_text(char *input, sfEvent event)
{
    if (event.text.unicode == 8) {
        delete_char(input);
        return (0);
    }
    add_char(event.text.unicode, input);
    return (0);
}

int enter_text_width(world_t *world)
{
    sfVector2f position_width;

    if (world->window->event.type == sfEvtTextEntered) {
        if (world->menu->text == 1 && world->window->event.text.unicode < 58
        && (world->window->event.text.unicode > 47 &&
        world->menu->time_loop >= 0.15)) {
            update_text(world->menu->input_width, world->window->event);
            sfText_setString(world->menu->width_txt, world->menu->input_width);
            world->menu->time_loop = 0;
        }
        if (world->menu->text == 1 && world->window->event.text.unicode == 8
        && world->menu->time_loop >= 0.15) {
            update_text(world->menu->input_width, world->window->event);
            sfText_setString(world->menu->width_txt, world->menu->input_width);
            world->menu->time_loop = 0;
        }
        position_width.x = 575 - (my_strlen(world->menu->input_width) * 8);
        position_width.y = 319;
        sfText_setPosition(world->menu->width_txt, position_width);
    }
    render_width(world);
}

void create_tool_text(world_t *world)
{
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 500)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 310)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 655)) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 355)))
            world->menu->text = 1;
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 695)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 310)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 849)) &&
        (world->window->mouse.y <= adapt_hitbox_y(world, 356)))
            world->menu->text = 2;
    if (world->menu->input_width[0] != '\0')
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->button_width_empty, NULL);
    if (world->menu->input_hei[0] != '\0')
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->button_height_empty, NULL);
    enter_text_width(world);
    enter_text_height(world);
}
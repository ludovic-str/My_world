/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** create
*/

#include "../../include/my_world.h"

int click_and_hover(world_t *world)
{
    if (((world->window->mouse.x) >= adapt_hitbox_x(world, 555)) &&
    ((world->window->mouse.y) >= adapt_hitbox_y(world, 397)) &&
    (world->window->mouse.x <= adapt_hitbox_x(world, 240) +
    adapt_hitbox_x(world, 555)) && (world->window->mouse.y <=
    adapt_hitbox_y(world, 50) + adapt_hitbox_y(world, 397)))
        sfRenderWindow_drawSprite(world->window->my_window,
        world->menu->button_create_map_hover, NULL);
    if (world->window->event.type == sfEvtMouseButtonPressed)
        if (((world->window->mouse.x) >= adapt_hitbox_x(world, 555)) &&
        ((world->window->mouse.y) >= adapt_hitbox_y(world, 397)) &&
        (world->window->mouse.x <= adapt_hitbox_x(world, 240) +
        adapt_hitbox_x(world, 555)) && (world->window->mouse.y <=
        adapt_hitbox_y(world, 50) + adapt_hitbox_y(world, 397))) {
            sfRenderWindow_drawSprite(world->window->my_window,
            world->menu->button_create_map_clicked, NULL);
            sfSound_play(world->audio->clic);
            world->status = 7;
        }
}

void init_text(world_t *world)
{
    sfFont *font;

    world->menu->width_txt = sfText_create();
    font = sfFont_createFromFile("assets/aqua.ttf");
    sfText_setFont(world->menu->width_txt, font);
    sfText_setCharacterSize(world->menu->width_txt, 26);
    world->menu->height_txt = sfText_create();
    font = sfFont_createFromFile("assets/aqua.ttf");
    sfText_setFont(world->menu->height_txt, font);
    sfText_setCharacterSize(world->menu->height_txt, 26);
    init_helpbox1(world);
    init_helpbox2(world);
}

int menu_create(world_t *world)
{
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->banderol_create, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->button_width, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->button_height, NULL);
    sfRenderWindow_drawSprite(world->window->my_window,
    world->menu->button_create_map, NULL);
    click_and_hover(world);
    create_tool_text(world);
    convert_text(world);
}
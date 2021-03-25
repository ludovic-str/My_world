/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** music
*/

#include "../include/my_world.h"

int open_music(world_t *world)
{
    world->audio->create_clic =
    sfSoundBuffer_createFromFile("assets/music/clic.ogg");
    world->audio->clic = sfSound_create();
    sfSound_setBuffer(world->audio->clic, world->audio->create_clic);
    world->audio->create_sound =
    sfSoundBuffer_createFromFile("assets/music/music.ogg");
    world->audio->sound = sfSound_create();
    sfSound_setBuffer(world->audio->sound, world->audio->create_sound);
    sfSound_setLoop(world->audio->sound, sfTrue);
}
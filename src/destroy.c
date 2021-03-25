/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** destroy
*/

#include "../include/my_world.h"

void destroy_sounds(world_t *world)
{
    sfSoundBuffer_destroy(world->audio->create_clic);
    sfSoundBuffer_destroy(world->audio->create_sound);
    sfSound_destroy(world->audio->clic);
    sfSound_destroy(world->audio->sound);
}
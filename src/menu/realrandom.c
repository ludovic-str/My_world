/*
** EPITECH PROJECT, 2021
** realrandom
** File description:
** realramdom
*/

#include "../../include/my_world.h"

void realrandom(world_t *world)
{
    FILE *fd = fopen("/dev/urandom", "r");
    int seed;

    fread(&seed, sizeof(seed), 1, fd);
    fclose(fd);
    srand(seed);
}
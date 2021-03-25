/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** tools
*/

#include "../include/my_world.h"

int my_textboxlen(char const *str)
{
    const char *char_ptr = str;

    while (*char_ptr)
        char_ptr++;
    return (char_ptr - str);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    char *str =
    malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 3));

    while (dest && dest[i]) {
        str[i] = dest[i];
        i++;
    }
    while (src && src[j]) {
        str[i] = src[j];
        j++;
        i++;
    }
    str[i] = 0;
    return (str);
}

char *my_strcpy(char *dest, const char *src)
{
    char *d = dest;

    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (d);
}

int my_getnbr(char const *str)
{
    int i = 0;
    long nbr = 0;
    int sign = 1;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') {
            sign *= -1;
        }
        i += 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nbr = nbr * 10 + str[i] - 48;
        i += 1;
    }
    nbr *= sign;
    if (nbr < -2147483648 || nbr > 2147483647)
        return (0);
    return ((int)nbr);
}
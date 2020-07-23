/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** my_strcpy.c
*/

#include "../include/matchstick.h"

char **my_strcpy_map(char **map)
{
    int tmp1 = -1;
    int tmp2 = -1;
    char **new_map = NULL;

    while (map[++tmp1]);
    new_map = malloc((sizeof(char *) * (tmp1 + 1) + 1));
    while (++tmp1 < tmp2)
        new_map[tmp2] = my_strdup(map[tmp2]);
    new_map[tmp2] = NULL;
    return (new_map);
}

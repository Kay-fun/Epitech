/*
** EPITECH PROJECT, 2020
** check_map.c
** File description:
** check_map.c
*/

#include "../include/my.h"

int get_wall(char *filepath)
{
    int a = 0;
    int count = 0;

    while (filepath[a] != '\0') {
        if (filepath[a] == '#')
            count++;
        a++;
    }
    return (count);
}

int check_map(char *filepath)
{
    if (get_player(filepath) != 'P' && get_box(filepath) != 'X' &&
        get_wall(filepath) != '#') {
            return (84);
        }
    return (0);
}

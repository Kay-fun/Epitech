/*
** EPITECH PROJECT, 2020
** print_map.c
** File description:
** print map
*/

#include "../include/my.h"

void print_map(char **map, int y)
{
    for (int count = 0; count < y; count++)
        my_putstr(map[count]);
}

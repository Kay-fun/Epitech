/*
** EPITECH PROJECT, 2019
** get_player.c
** File description:
** get_player.c
*/

#include "../include/my.h"

int get_player(char *filepath)
{
    int a = 0;

    for (; filepath[a] != 'P'; a++);
    return (a);
}

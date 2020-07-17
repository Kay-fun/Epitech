/*
** EPITECH PROJECT, 2019
** get_box.c
** File description:
** get_box.c
*/

#include "../include/my.h"

int get_box(char *filepath)
{
    int a = 0;

    for (a; filepath[a] != 'X'; a++);
    return (a);
}

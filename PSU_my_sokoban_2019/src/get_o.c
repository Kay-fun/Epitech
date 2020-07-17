/*
** EPITECH PROJECT, 2020
** get_O.c
** File description:
** get_O.c
*/

#include "../include/my.h"

int get_o(char *filepath)
{
    int a = 0;

    for (; filepath[a] != 'O'; a++);
    return (a);
}
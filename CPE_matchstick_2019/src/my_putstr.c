/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "../include/matchstick.h"

void my_putstr(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++)
        my_putchar(str[a]);
}

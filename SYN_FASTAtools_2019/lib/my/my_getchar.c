/*
** EPITECH PROJECT, 2020
** my_getchar
** File description:
** my_getchar
*/

#include "my.h"

int my_getchar(void)
{
    int input = 0;
    int size = 1;
    char c;

    if (read(input, &c, size) == 1)
        return (c);
    else
        return (0);
}

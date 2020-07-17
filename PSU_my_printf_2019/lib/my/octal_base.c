/*
** EPITECH PROJECT, 2019
** octal_base.c
** File description:
** convert to octal base
*/

#include "../../include/my.h"
#include <stdlib.h>

void octal_base(int nb)
{
    char *base = "01234567";
    int power = 1;
    int result = 0;
    int length_base = my_strlen(base);

    if (nb == -1) {
        my_putstr("FFFFFFFF");
        exit(84);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    while ((nb / power) >= length_base)
        power *= length_base;
    while (power > 0) {
        result = (nb / power) % length_base;
        my_putchar(base[result]);
        power = power / length_base;
    }
}

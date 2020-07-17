/*
** EPITECH PROJECT, 2019
** calc_i.c
** File description:
** calc_i
*/

#include "my.h"

int calc_i(int nb)
{
    int i = 1;

    while (nb >= my_compute_power_it(16, i))
        i++;
    i = i - 1;
    return (i);
}

/*
** EPITECH PROJECT, 2019
** my_intlenforbin.c
** File description:
** found bin len need of int
*/

#include "my.h"

int my_intlenforbin(int nb)
{
    int nblen = 0;
    int run = 1;

    while (run == 1) {
        if (nb < my_compute_power_it(2, nblen))
            run = 0;
        else
            nblen++;
    }
    return (nblen);
}

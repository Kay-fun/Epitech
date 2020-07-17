/*
** EPITECH PROJECT, 2019
** my_put_big_hex.c
** File description:
** put hex with big letter
*/

#include "my.h"

void my_put_big_hex(int nb)
{
    int i = calc_i(nb);
    int i2 = i;
    int digit = 0;
    int inb = nb;
    int tab[i + 1];

    for (; nb > 0; i--) {
        digit = nb / my_compute_power_it(16, i);
        inb = nb - digit * my_compute_power_it(16, i);
        nb = inb;
        tab[i2 - i] = digit;
    }
    for (int compteur = 0; compteur <= i2; compteur++) {
        if (tab[compteur] <= 9)
            my_put_nbr(tab[compteur]);
        else
            my_putchar(tab[compteur] + 55);
    }
}

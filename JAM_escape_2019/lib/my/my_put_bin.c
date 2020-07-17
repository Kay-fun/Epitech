/*
** EPITECH PROJECT, 2019
** my_put_bin.c
** File description:
** put binary from unsigned int
*/

#include "my.h"

void my_put_bin_hat(unsigned int nb)
{
    int inb = nb;
    int nblen = my_intlenforbin(nb);
    int tab[nblen];

    for (int i = 1; i <= nblen; i++) {
        nb = nb / 2;
        tab[nblen - i] = inb - 2 * nb;
        inb = nb;
    }
    for (int j = 0; j <= nblen - 1; j++)
        my_put_nbr(tab[j]);
}

void my_put_bin(int nb)
{
    if (nb == 0)
        my_putchar('0');
    else
        my_put_bin_hat(nb);
}

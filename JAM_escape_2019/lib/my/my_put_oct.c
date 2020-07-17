/*
** EPITECH PROJECT, 2019
** my_put_oct.c
** File description:
** put octal
*/

#include "my.h"

void my_put_oct_c(int nb)
{
    if (nb == 8)
        my_put_nbr(10);
    else if (nb == 9)
        my_put_nbr(11);
    else
        my_put_nbr(nb);
}

void my_put_oct_hat(unsigned int nb, int i, int rest, int inb)
{
    int nblen = my_intlen(nb);
    int tab[nblen];

    if (nb <= 9)
        my_put_oct_c(nb);
    else if (nb >= 10) {
        for (; i != nblen; i++) {
            inb = inb / 8;
            rest = nb - inb * 8;
            tab[i] = rest;
            nb = inb;
        }
        i = nblen - 1;
        for (; i >= 0; i--) {
            my_put_nbr(tab[i]);
        }
    }
}

void my_put_oct(int nb)
{
    int rest = 0;
    int i = 0;
    int inb = nb;

    if (nb == 0)
        my_putchar('0');
    else if (nb > 0)
        my_put_oct_hat(nb, i, rest, inb);
}

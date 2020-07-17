/*
** EPITECH PROJECT, 2020
** my_putnbr.c
** File description:
** display number as a result
*/

#include <unistd.h>

void my_putchar(char c);

void my_put_nbr(int nb);

void my_put_nbr_hat(int nb)
{
    int a = 0;

    if (nb > 0) {
        a = nb % 10;
        nb = (nb - a) / 10;
        my_put_nbr_hat(nb);
        my_putchar(a + 48);
    }
    if (nb < 0) {
        a = -nb;
        my_putchar ('-');
        my_put_nbr(a);
    }
}

void my_put_nbr(int nb)
{
    if (nb == 0)
        my_putchar('0');
    else
        my_put_nbr_hat(nb);
}
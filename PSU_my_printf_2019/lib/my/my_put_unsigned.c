/*
** EPITECH PROJECT, 2019
** nbr_unsigned.c
** File description:
** print unsigned number in parameter
*/

#include "../../include/my.h"

void nbr_unsigned(unsigned long int nb)
{
    unsigned long int a = 0;

    a = nb % 10;
    nb = nb / 10;
    if (nb != 0)
        nbr_unsigned(nb);
    my_putchar(a + '0');
}

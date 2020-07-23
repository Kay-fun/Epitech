/*
** EPITECH PROJECT, 2020
** my_get_nbr.c
** File description:
** my_get_nbr.c
*/

#include "../include/matchstick.h"

int my_is_neg(char *str)
{
    int i = 0;
    int count = 0;

    if (str[i] > '9' || str[i] < '0') {
        if (str[i] == '-')
            count++;
        i++;
    }
    if (count % 2 != 0)
        return (1);
    return (0);
}

int my_is_num(char nb)
{
    if (nb >= '0' && nb <= '9')
        return (1);
    else if (nb == '+' || nb == '-')
        return (2);
    return (0);
}

int my_get_nbr(char *str)
{
    int i = 0;
    int nb = 0;

    while (my_is_num(str[i]) == 2)
        i++;
    while (my_is_num(str[i]) == 1)
    {
        nb = ((nb * 10) + (str[i] - 48));
        i++;
    }
    if (my_is_neg(str) == 1)
        return (nb * -1);
    return (nb);
}

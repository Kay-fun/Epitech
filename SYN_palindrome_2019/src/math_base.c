/*
** EPITECH PROJECT, 2020
** maths base palindrome
** File description:
** palindrome
*/

#include "palindrome.h"

int check_nb(char c)
{
    int tmp = 0;

    if (c >= '0' && c <= '9') {
        tmp = c - '0';
        return (tmp);
    } else {
        tmp = c - '9';
        return (tmp);
    }
}

int convert_base_to_decimal(char *nb, int base)
{
    int nb_1 = 1;
    int len = my_strlen(nb) - 1;
    int nb_3 = 0;

    while (len >= 0) {
        if (check_nb(nb[len]) >= base)
            return (-1);
        nb_3 += check_nb(nb[len]) * nb_1;
        nb_1 *= base;
        len--;
    }
    return (nb_3);
}

int recursive_base(int nb, int base)
{
    int nb_1 = 0;
    int nb_2 = 0;
    int nb_3 = 0;

    if (base < 2 || base > 10)
        return (-1);
    if (nb == 0)
        return (nb);
    nb_2 = nb % base;
    nb_3 = nb / base;
    nb_1 = (recursive_base(nb_3, base) * 10) + nb_2;
    return (nb_1);
}

void convert_base(char *result, int nb, int base)
{
    int a = 0;
    char *nb_base = "0123456789";

    while (nb != 0) {
        result[a] = nb_base[nb % base];
        nb /= base;
        a++;
    }
    result[a] = '\0';
}
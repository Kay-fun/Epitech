/*
** EPITECH PROJECT, 2020
** my_inttostr.c
** File description:
** my_inttostr
*/

#include "../../include/my.h"

#define NTA(c1) (c1 + '0')

char *my_inttostr(int nb, char *s_nb)
{
    int nb_ac = 1;
    int test_nb = 9;
    int rest = nb;
    int chiffre = 0;
    int x = 1;

    while (rest >= 0) {
        if ((rest = nb - test_nb) > 0)
            nb_ac++;
        test_nb = (test_nb * 10) + 9;
    }
    s_nb = malloc(sizeof(char) * nb_ac + 1);
    for (int c1 = 0; c1 != nb_ac; c1++) {
        chiffre = nb / my_compute_power_it(10, (nb_ac - x));
        nb = nb - chiffre * my_compute_power_it(10, (nb_ac - x));
        x++;
        s_nb[c1] = NTA(chiffre);
    }
    s_nb[nb_ac] = '\0';
    return (s_nb);
}

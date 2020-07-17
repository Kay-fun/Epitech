/*
** EPITECH PROJECT, 2020
** my_inttostr_dollars.c
** File description:
** my_inttostr_dollars
*/

#include "../../include/my.h"

#define NTA(c1) (c1 + '0')

char *add_dollars(char *s_nb, int nb_ac)
{
    s_nb[nb_ac] = '$';
    s_nb[nb_ac + 1] = '\0';
    return (s_nb);
}

char *my_inttostr_dollars(int nb, char *s_nb)
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
    s_nb = malloc(sizeof(char) * nb_ac + 2);
    for (int c1 = 0; c1 != nb_ac; c1++) {
        chiffre = nb / my_compute_power_it(10, (nb_ac - x));
        nb = nb - chiffre * my_compute_power_it(10, (nb_ac - x));
        x++;
        s_nb[c1] = NTA(chiffre);
    }
    s_nb = add_dollars(s_nb, nb_ac);
    return (s_nb);
}

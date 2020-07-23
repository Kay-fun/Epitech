/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** convert int for csfml
*/

#include "../include/my.h"

int nb_power(int nb, int power)
{
    int tmp_nb = nb;

    if (power == 0)
        return (1);
    else if (power < 0)
        return (0);
    else {
        for (int a = 1; a != power; a++)
            tmp_nb = tmp_nb * nb;
    }
    return (tmp_nb);
}

char *convert_nb_csfml(int nb, char *str)
{
    int max = 1;
    int tmp_nb = 9;
    int result = nb;
    int digit = 0;
    int x = 1;

    str = malloc(sizeof(char) * max + 1);
    while (result >= 0) {
        if ((result = nb - tmp_nb) > 0)
            max++;
        tmp_nb = (tmp_nb * 10) + 9;
    }
    for (int i = 0; i != max; i++) {
        digit = nb / nb_power(10, (max - x));
        nb = nb - digit * nb_power(10, (max - x));
        x++;
        str[i] = digit + '0';
    }
    str[max] = '\0';
    return (str);
}

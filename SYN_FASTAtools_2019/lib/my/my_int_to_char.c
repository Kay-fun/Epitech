/*
** EPITECH PROJECT, 2020
** my_int_to_char.c
** File description:
** my_int_to_char.c
*/

#include <stdlib.h>
#include <stddef.h>

int my_nb_digits(int nb);

char *my_int_to_char(int nb)
{
    int digits = my_nb_digits(nb);
    char *buff = NULL;

    buff = malloc(sizeof(char) * (digits + 1));
    if (!buff)
        return (NULL);
    buff[digits] = '\0';
    while (digits--) {
        buff[digits] = nb % 10 + '0';
        nb /= 10;
    }
    return (buff);
}

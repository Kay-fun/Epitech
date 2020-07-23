/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** my_strdup.c
*/

#include "../include/matchstick.h"

char *my_strdup(char *str)
{
    int a = 0;
    char *dup = NULL;

    dup = malloc(sizeof(char) * (my_strlen(str) + 1));
    if (!dup)
        return (NULL);
    while (str[a]) {
        dup[a] = str[a];
        a++;
    }
    dup[a] = '\0';
    return (dup);
}

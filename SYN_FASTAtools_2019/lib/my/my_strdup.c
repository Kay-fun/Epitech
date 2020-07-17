/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** my_strdup.c
*/

#include <stdlib.h>
#include <stddef.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char *src);

char *my_strdup(char *src)
{
    char *dup = NULL;

    dup = malloc(sizeof(char) * (my_strlen(src) + 1));
    if (!dup)
        return (NULL);
    dup = my_strcpy(dup, src);
    return (dup);
}

/*
** EPITECH PROJECT, 2020
** add_link.c
** File description:
** add_link
*/

#include "my.h"
#include <stdlib.h>

char *add_link(char *str, char *str_add)
{
    int size_str = calc_size_str(str);
    int size_str_add = calc_size_str(str_add);
    char *newstr = malloc(sizeof(char) * (size_str + size_str_add + 1));
    int count = 0;
    int count2 = 0;

    for (; count != size_str_add; count++)
        newstr[count] = str_add[count];
    for (; count != size_str + size_str_add; count++) {
        newstr[count] = str[count2];
        count2++;
    }
    newstr[count + 1] = '\0';
    return (newstr);
}

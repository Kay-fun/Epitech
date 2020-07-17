/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** my_strcmp.c
*/

#include "../include/my.h"

int my_strcmp(char *str1, char *str2)
{
    int a = 0;

    while (str1[a]) {
        if (str1[a] < str2[a])
            return (-1);
        else if (str1[a] > str2[a])
            return (1);
        a++;
    }
    if (str1[a] < str2[a])
        return (-1);
    else if (str1[a] > str2[a])
        return (1);
    return (0);
}

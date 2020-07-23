/*
** EPITECH PROJECT, 2020
** help
** File description:
** help
*/

#include "../include/my.h"

void my_putstr(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++)
        write(1, &str[a], 1);
}

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

void help(char **av)
{
    if (my_strcmp(av[1], "-h") == 0 ||
        my_strcmp(av[1], "--help") == 0) {
        my_putstr("USAGE:\n");
        my_putstr("./my_rpg [map]\n");
    }
}

/*
** EPITECH PROJECT, 2020
** my_isnum.c
** File description:
** my_isnum.c
*/

int my_isnum(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] == '-' && str[1] != '\0')
            a++;
        if (str[a] < '0' || str[a] > '9')
            return (1);
        a++;
    }
    return (0);
}

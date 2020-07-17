/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** my_strncmp.c
*/

int my_strncmp(char const *str1, char const *str2, int stop)
{
    int a = 0;

    while (str1[a] != '\0' && stop > 0) {
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
    if (a < stop)
        return (str1[a] - str2[a]);
    return (0);
}

/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** my_strcmp.c
*/

int my_strcmp(char const *str1, char const *str2)
{
    int a = 0;

    while (str1[a] != '\0') {
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

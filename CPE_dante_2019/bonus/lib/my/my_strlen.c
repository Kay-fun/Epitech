/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** compte le nombre de caractère d'une chaîne de caractère
*/

int my_strlen(char const *str)
{
    int nb = 0;

    for (int c1 = 0; str[c1] != '\0'; c1++)
        nb = nb + 1;
    return (nb);
}

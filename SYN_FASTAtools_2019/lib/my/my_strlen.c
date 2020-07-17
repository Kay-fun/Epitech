/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int a = 0;

    for (; str[a] != '\0'; a++);
    return (a);
}

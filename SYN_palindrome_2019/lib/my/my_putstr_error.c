/*
** EPITECH PROJECT, 2020
** my_putstr_error
** File description:
** my_putstr_error
*/

#include <unistd.h>

void my_putchar_error(char c)
{
    write(2, &c, 1);
}

void my_putstr_error(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++)
        my_putchar_error(str[a]);
}

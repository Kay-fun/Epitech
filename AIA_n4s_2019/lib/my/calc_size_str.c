/*
** EPITECH PROJECT, 2019
** calc_size_str.c
** File description:
** calc size str
*/

int calc_size_str(char *str)
{
    int size = 0;

    while (str[size] != '\0')
        size++;
    return (size);
}

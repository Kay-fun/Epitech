/*
** EPITECH PROJECT, 2020
** display
** File description:
** display
*/

#include "fat.h"

int display_codon(int a, char c)
{
    if (a != 0)
        my_putchar('\n');
    a++;
    my_putchar(c);
    while (c != '\n') {
        c = getchar();
        my_putchar(c);
    }
    return (a);
}
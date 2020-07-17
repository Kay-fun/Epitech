/*
** EPITECH PROJECT, 2020
** rna
** File description:
** rna
*/

#include "fat.h"

void check_rna(char c)
{
    if (c == 'a' || c == 'c' || c == 'g' || c == 'n') {
        c -= 32;
        my_putchar(c);
    } else if (c == 'A' || c == 'C' || c == 'G' || c == 'N') {
        my_putchar(c);
    } else if (c == 't' || c == 'T') {
        my_putchar('U');
    }
}

void rna_option(void)
{
    int a = 0;
    int c = 0;
    int loop = 0;

    while (loop == 0) {
        c = getchar();
        if (c == EOF) {
            my_putchar('\n');
            loop = 1;
        }
        if (c == '>') {
            a = display_codon(a, c);
        }
        check_rna(c);
    }
}
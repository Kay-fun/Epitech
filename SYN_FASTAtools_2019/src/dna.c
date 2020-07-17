/*
** EPITECH PROJECT, 2020
** dna
** File description:
** dna
*/

#include "fat.h"

void check_dna(char c)
{
    if (c == 'a' || c == 'c' || c == 'g' || c == 'n' || c == 't') {
        c -= 32;
        my_putchar(c);
    } else if (c == 'A' || c == 'C' || c == 'G' || c == 'N' || c == 'T')
        my_putchar(c);
}

void dna_option(void)
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
        check_dna(c);
    }
}
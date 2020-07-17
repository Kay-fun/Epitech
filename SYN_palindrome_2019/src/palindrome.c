/*
** EPITECH PROJECT, 2020
** palindrome.c
** File description:
** palindrome.c
*/

#include "palindrome.h"

void free_char(char *before, char *after)
{
    free(before);
    free(after);
}

void option_flags(int ac, char **av, t_pal *pal)
{
    int option = 0;
    int option_index = 0;
    int loop = 0;
    static struct option flags[] = {{"imin", required_argument, 0, '1'},
        {"imax", required_argument, 0, '2'}, {0, 0, 0, 0}};

    while (loop == 0) {
        option = getopt_long_only(ac, av, "n:p:b:", flags, &option_index);
        if (option == -1)
            loop = 1;
        flags_parsing(option, pal);
    }
    if ((pal->n == 0 && pal->p == 0) || pal->imin > pal->imax)
        display_invalid();
}

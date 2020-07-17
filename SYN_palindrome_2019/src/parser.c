/*
** EPITECH PROJECT, 2020
** palindrome
** File description:
** parser
*/

#include "palindrome.h"

void flags_parsing_3(int option, t_pal *pal)
{
    switch (option) {
    case '2':
        pal->imax = my_getnbr(optarg);
        if (pal->imax < 0)
            display_invalid();
        break;
    case '?':
        display_invalid();
        break;
    }
}

void flags_parsing_2(int option, t_pal *pal)
{
    switch (option) {
    case 'b':
        pal->b = my_getnbr(optarg);
        if (pal->b < 2 || pal->b > 10)
            display_invalid();
        break;
    case '1':
        pal->imin = my_getnbr(optarg);
        if (pal->imin < 0)
            display_invalid();
        break;
    }
    flags_parsing_3(option, pal);
}

void flags_parsing(int option, t_pal *pal)
{
    switch (option) {
    case 'n':
        if (pal->p == 0)
            pal->n = 1;
        pal->nb = my_getnbr(optarg);
        if (pal->nb < 0)
            display_invalid();
        break;
    case 'p':
        if (pal->n == 0)
            pal->p = 1;
        pal->nb = my_getnbr(optarg);
        if (pal->nb < 0)
            display_invalid();
        break;
    }
    flags_parsing_2(option, pal);
}

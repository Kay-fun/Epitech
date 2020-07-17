/*
** EPITECH PROJECT, 2020
** palindrome
** File description:
** palindrome
*/

#include "palindrome.h"

void display_invalid(void)
{
    my_putstr_error("invalid argument\n");
    exit(84);
}

void display_iteration(int a, int b, t_pal *pal)
{
    my_put_nbr(a);
    my_putstr(" leads to ");
    my_put_nbr(pal->nb);
    my_putstr(" in ");
    my_put_nbr(b);
    my_putstr(" iteration(s) in base ");
    my_put_nbr(pal->b);
    my_putchar('\n');
    pal->tmp++;
}

void display_last_process(char *before, char *after, int a, t_pal *pal)
{
    my_put_nbr(pal->nb);
    my_putstr(" leads to ");
    my_put_nbr(convert_base_to_decimal(after, pal->b));
    my_putstr(" in ");
    my_put_nbr(a);
    my_putstr(" iteration(s) in base ");
    my_put_nbr(pal->b);
    my_putchar('\n');
    free_char(before, after);
    exit(0);
}

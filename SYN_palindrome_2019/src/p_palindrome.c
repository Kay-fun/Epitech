/*
** EPITECH PROJECT, 2020
** palindrome
** File description:
** p palindrome
*/

#include "palindrome.h"

int p_next (int result, char *before, t_pal *pal)
{
    result = convert_base_to_decimal(before, pal->b);
    result += convert_base_to_decimal(my_revstr(before), pal->b);
    convert_base(before, result, pal->b);
    return (result);
}

int p_palindrome_function(t_pal *pal, int a)
{
    int result = 0;
    int nb = 0;
    char *before = malloc(sizeof(char));
    char *after = malloc(sizeof(char));

    if (!before || !after)
        return (0);
    convert_base(before, a, pal->b);
    convert_base(after, pal->nb, pal->b);
    while (nb <= pal->imax) {
        if (my_strcmp(my_revstr(before), after) == 0 && nb >= pal->imin) {
            display_iteration(a, nb, pal);
            free_char(before, after);
            return (0);
        }
        result = p_next(result, before, pal);
        nb++;
    }
    free_char(before, after);
    return (0);
}

void process_p_palindrome(t_pal *pal)
{
    int a = 0;

    while (a <= pal->nb) {
        p_palindrome_function(pal, a);
        a++;
    }
    if (pal->tmp > 0)
        exit(0);
    my_putstr("no solution\n");
    exit(0);
}

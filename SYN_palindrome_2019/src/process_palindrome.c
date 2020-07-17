/*
** EPITECH PROJECT, 2020
** palindrome
** File description:
** process
*/

#include "palindrome.h"

void exit_solution(char *before, char *after)
{
    my_putstr("no solution\n");
    free_char(before, after);
    exit(0);
}

void process_palindrome(t_pal *pal)
{
    int result = 0;
    char *before = malloc(sizeof(char));
    char *after = NULL;

    if (!before)
        exit(84);
    convert_base(before, pal->nb, pal->b);
    after = my_revstr(my_strdup(before));
    for (int a = 0; a <= pal->imax; a++) {
        if (my_strcmp(after, before) == 0)
            display_last_process(before, after, a, pal);
        result = convert_base_to_decimal(after, pal->b);
        result += convert_base_to_decimal(before, pal->b);
        convert_base(after, result, pal->b);
        free(before);
        before = my_revstr(my_strdup(after));
        free(after);
        after = my_revstr(my_strdup(before));
    }
    exit_solution(before, after);
}
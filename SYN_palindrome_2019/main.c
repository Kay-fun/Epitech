/*
** EPITECH PROJECT, 2020
** main
** File description:
** palindrome
*/

#include "palindrome.h"

t_pal *init_pal(void)
{
    t_pal *pal = malloc(sizeof(t_pal));

    if (!pal)
        return (NULL);
    pal->b = 10;
    pal->n = 0;
    pal->p = 0;
    pal->nb = 0;
    pal->tmp = 0;
    pal->imin = 0;
    pal->imax = 100;
    return (pal);
}

void process_main(int ac, char **av, t_pal *pal)
{
    option_flags(ac, av, pal);
    if (pal->n == 1 && pal->p == 0)
        process_palindrome(pal);
    if (pal->p == 1 && pal->n == 0)
        process_p_palindrome(pal);
}

int pre_main(int ac, char **av)
{
    t_pal *pal = init_pal();

    if (ac < 2 || !pal)
        return (84);
    if (my_strcmp(av[1], "-h") == 0) {
        display_help();
        return (0);
    }
    process_main(ac, av, pal);
    return (0);
}

int main(int ac, char **av)
{
    pre_main(ac, av);
    return (0);
}

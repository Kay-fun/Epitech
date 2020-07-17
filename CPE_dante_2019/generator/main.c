/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include "../include/my.h"

int calc_perfect(char **av)
{
    int perfect = 84;

    if (my_strcmp(av[3], "perfect") == 0)
        perfect = 1;
    return (perfect);
}

int main(int ac, char **av)
{
    size s_map;
    int perfect = 0;

    s_map.x = 0;
    s_map.y = 0;
    if (ac < 3 || ac > 4)
        return (84);
    s_map.x = my_getnbr(av[1]);
    s_map.y = my_getnbr(av[2]);
    if (s_map.x == 0 || s_map.y == 0)
        return (84);
    perfect = (ac == 4) ? calc_perfect(av) : perfect;
    if (perfect == 1)
        create_map_perfect(s_map);
    else if (perfect == 84)
        return (84);
    else
        create_map(s_map);
    return (0);
}

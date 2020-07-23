/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include "../include/matchstick.h"

int main(int ac, char **av)
{
    int size_map = 0;
    int max_matches = 0;
    char **map = NULL;

    if (ac != 3)
        return (84);
    size_map = my_get_nbr(av[1]);
    max_matches = my_get_nbr(av[2]);
    if (size_map < 1 || size_map > 100)
        return (84);
    else if (max_matches <= 0)
        return (84);
    map = draw_map(size_map);
    map = print_matches_function(size_map, map);
    print_map(map);
    my_putchar('\n');
    game_loop(size_map, max_matches, map);
    return (0);
}

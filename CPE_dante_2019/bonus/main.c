/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include "../include/my.h"

void verif_change(solver *solve)
{
    for (int y = 0; y != solve->height - 1; y++)
        for (int x = 0; x != solve-> width; x++)
            solve->maze[y][x] = (solve->maze[y][x] == '0') ?
                '*' : solve->maze[y][x];
}

void print_map(solver *solve)
{
    for (int c = 0; c < solve->height + 1; c++)
        my_putstr(solve->maze[c]);
}

int basic_verif(solver *solve)
{
    if (solve->map == NULL || solve->map[0] != '*'
        || solve->map[calc_size_str(solve->map) - 2] != '*') {
        my_put_error("Invalid map\n");
        return (84);
    }
    return (0);
}

int main(int ac, char **av)
{
    solver *solve = malloc(sizeof(*solve));
    int key = 0;

    if (ac != 2)
        return (84);
    solve = init_struct(solve);
    if (open_map(av[1], solve) == 84
        || check_map(solve) == 84)
        return (84);
    if (basic_verif(solve) == 84)
        return (84);
    solve->maze = found_way(solve);
    resolution_maze(0, 0, solve);
    verif_change(solve);
    display_ncurse(key, solve);
    return (0);
}

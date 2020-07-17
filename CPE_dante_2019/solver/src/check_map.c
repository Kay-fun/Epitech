/*
** EPITECH PROJECT, 2020
** check_map.c
** File description:
** check_map
*/

#include "my.h"

void init_width(solver *solve)
{
    for (int count = 0; solve->map[count] != '\n'
            && solve->map[count] != '\0'; count++) {
        solve->width++;
    }
}

int check_map_char(int count, solver *solve)
{
    if (solve->map[count] != '\n' && solve->map[count] != '*' &&
        solve->map[count] != 'X' && solve->map[count] != '\0') {
        return (84);
    }
    return (0);
}

int check_map(solver *solve)
{
    int verif_line = 0;

    init_width(solve);
    for (int count = 0; solve->map[count] != '\0'; count++) {
        if (check_map_char(count, solve) == 84) {
            my_put_error("Invalid map\n");
            return (84);
        }
        if (solve->map[count] == '\n' || solve->map[count] == '\0') {
            if (verif_line != solve->width)
                return (84);
            verif_line = -1;
            solve->height++;
        }
        verif_line++;
    }
    return (0);
}

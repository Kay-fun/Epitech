/*
** EPITECH PROJECT, 2020
** dante
** File description:
** found way
*/

#include "my.h"

char **replace_maze(char **map_solve, solver *solve)
{
    int x = 0;
    int y = 0;

    for (int count = 0; solve->map[count] != '\0'; count++) {
        if (solve->map[count] != '\n') {
            map_solve[x][y] = solve->map[count];
        } else {
            map_solve[x][y] = '\n';
            x++;
            y = -1;
        }
        y++;
    }
    return (map_solve);
}

char **found_way(solver *solve)
{
    char **map_solve = NULL;

    map_solve = malloc(sizeof(char *) * (solve->height + 1));
    for (int count = 0; count != solve->height + 1; count++)
        map_solve[count] = malloc(sizeof(char) * (solve->width + 1));
    map_solve = replace_maze(map_solve, solve);
    return (map_solve);
}

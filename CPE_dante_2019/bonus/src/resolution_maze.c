/*
** EPITECH PROJECT, 2020
** dante
** File description:
** resolution function
*/

#include "../include/my.h"

int resolution_maze(int a, int b, solver *solve)
{
    if (a < 0 || b < 0 || a > solve->height - 2
        || b > solve->width - 1 || solve->maze[a][b] != '*') {
        return (1);
    }
    solve->maze[a][b] = '0';
    if (resolution_maze(a + 1, b, solve) == 0 ||
        resolution_maze(a - 1, b, solve) == 0 ||
        resolution_maze(a, b + 1, solve) == 0 ||
        resolution_maze(a, b - 1, solve) == 0 ||
        (a == solve->height - 2 && b == solve->width - 1)) {
        solve->maze[a][b] = 'o';
        return (0);
    }
    solve->maze[solve->height - 1][solve->width - 1] = 'o';
    return (1);
}

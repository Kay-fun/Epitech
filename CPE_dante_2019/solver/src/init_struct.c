/*
** EPITECH PROJECT, 2020
** dante
** File description:
** init structure
*/

#include "../include/my.h"

solver *init_struct(solver *solve)
{
    solve->width = 0;
    solve->height = 1;
    solve->map = NULL;
    solve->maze = NULL;
    return (solve);
}

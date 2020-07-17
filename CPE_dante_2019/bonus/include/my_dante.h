/*
** EPITECH PROJECT, 2020
** my_dante.h
** File description:
** my_dante
*/

#ifndef MYDANTE_H_
#define MYDANTE_H_

typedef struct size
{
    int x;
    int y;
}size;

typedef struct solver
{
    char *map;
    char **maze;
    int width;
    int height;
}solver;

#endif

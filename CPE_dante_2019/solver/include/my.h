/*
** EPITECH PROJECT, 2020
** my dante
** File description:
** my.h
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my_dante.h"

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
void my_putstr(char *str);
void my_put_error(char const *str);
int calc_size_str(char *str);

int check_map(solver *solve);
int resolution_maze(int a, int b, solver *solve);
solver *init_struct(solver *solve);
char **found_way(solver *solve);
int open_map(char *file, solver *solve);

#endif

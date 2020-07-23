/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#include <unistd.h>
#include  <stdlib.h>
#include <time.h>
#include "my_dante.h"

#ifndef MY_H_
#define MY_H_

// LIB

int my_getnbr(char const *str);
int my_strcmp(char *str1, char *str2);
void my_putchar(char c);
void my_putstr(char const *str);

// MAP NOT PERFECT

void create_map(size s_map);
void change_map(char **map, size s_map);

// MAP PERFECT

void create_map_perfect(size s_map);
void change_map_perfect(char **map, size s_map);

// PRINT MAP

void print_map(char **map, int y);

#endif

/*
** EPITECH PROJECT, 2020
** matchstick.h
** File description:
** matchstick.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

char *get_next_line(int fd);
int check_win_function(char **map);
int get_index(int size_map);
int my_get_nbr(char *str);
int matches_remaining_function(char *line);
void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char *str);
void print_map(char **map);
void set_loop_function(t_matchstick *game, int size_map,
    int max_matches, char *line);
char **draw_map(int size_map);
void my_put_nbr(int nb);
int game_loop(int size_map, int max_matches, char **map);
int game_loop_ia(int next, int size_map, int max_matches, char **map);
char **ia_round(int size_map, int max_matches, char **map);
char **player_round(int size_map, int max_matches, char **map);
int count_matches_function_player(int size_map, int max_matches,
    char *line, t_matchstick *game);
char **remove_matches(int size_map, int line, int count, char **map);
char *set_map_memory(int size_map, char c, char *buff);
char *my_strdup(char *str);
char **print_matches_function(int size_map, char **map);
char **my_strcpy_map(char **map);

#endif

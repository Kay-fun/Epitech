/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** compilation of fonction
*/

#include <ncurses.h>
#include <unistd.h>

#ifndef MY_H_
#define MY_H_

int error_open(int fd, char *filepath);
void move_game(char *filepath, int key);
int soko_game(char *filepath, int key);
char *check_file(char *filepath);
int get_nbline(char *filepath);
int get_player(char *filepath);
int get_box(char *filepath);
int get_o(char *filepath);
int check_map(char *filepath);
void go_up(char *filepath);
void go_down(char *filepath);
void go_right(char *filepath);
void go_left(char *filepath);
void restart_game(char *filepath, int key);
void my_putchar(char c);
void my_putstr(char *str);
void help_function(void);

#endif

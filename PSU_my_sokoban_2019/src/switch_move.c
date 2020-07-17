/*
** EPITECH PROJECT, 2019
** keyboard.c
** File description:
** keyboard move
*/

#include <ncurses.h>
#include "../include/my.h"

void move_game(char *filepath, int key)
{
    switch(key) {
    case KEY_UP:
        go_up(filepath);
        break;
    case KEY_DOWN:
        go_down(filepath);
        break;
    case KEY_LEFT:
        go_left(filepath);
        break;
    case KEY_RIGHT:
        go_right(filepath);
        break;
    }
}

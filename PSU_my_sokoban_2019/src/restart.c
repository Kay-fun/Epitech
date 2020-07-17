/*
** EPITECH PROJECT, 2019
** restart.c
** File description:
** function to restart game
*/

#include "../include/my.h"
#include <ncurses.h>

void restart_game(char *filepath, int key)
{
    switch(key) {
        case KEY_RESTART:
        soko_game(filepath, key);
        break;
    }
}

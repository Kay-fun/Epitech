/*
** EPITECH PROJECT, 2019
** game.c
** File description:
** function for game
*/

#include "../include/my.h"
#include <ncurses.h>

int get_nbline(char *filepath)
{
    int a = 0;

    for (; filepath[a] != '\n'; a++);
    return (a);
}

void go_up(char *filepath)
{
    int line = get_nbline(filepath);
    int player = get_player(filepath);
    int box = get_box(filepath);
    int pos_o = get_o(filepath);
    char interm;

    if (filepath[player - line - 1] == ' ') {
        interm = filepath[player];
        filepath[player] = filepath[player - line - 1];
        filepath[player - line - 1] = interm;
    }
    if (filepath[box - line - 1] == ' ' && filepath[player - line - 1] == 'X') {
        interm = filepath[box];
        filepath[box] = filepath[player];
        filepath[player] = filepath[box - line - 1];
        filepath[box - line - 1] = interm;
    }
}

void go_down(char *filepath)
{
    int line = get_nbline(filepath);
    int player = get_player(filepath);
    int box = get_box(filepath);
    char interm;

    if (filepath[player + line + 1] == ' ') {
        interm = filepath[player];
        filepath[player] = filepath[player + line + 1];
        filepath[player + line + 1] = interm;
    }
    if (filepath[box + line + 1] == ' ' && filepath[player + line + 1] == 'X') {
        interm = filepath[box];
        filepath[box] = filepath[player];
        filepath[player] = filepath[box + line + 1];
        filepath[box + line + 1] = interm;
    }
}

void go_right(char *filepath)
{
    int line = get_nbline(filepath);
    int player = get_player(filepath);
    int box = get_box(filepath);
    char interm;

    if (filepath[player + 1] == ' ') {
        interm = filepath[player];
        filepath[player] = filepath[player + 1];
        filepath[player + 1] = interm;
    }
    if (filepath[box + 1] == ' ' && filepath[player + 1] == 'X') {
        interm = filepath[box];
        filepath[box] = filepath[player];
        filepath[player] = filepath[box + 1];
        filepath[box + 1] = interm;
    }
}

void go_left(char *filepath)
{
    int line = get_nbline(filepath);
    int player = get_player(filepath);
    int box = get_box(filepath);
    char interm;

    if (filepath[player - 1] == ' ') {
        interm = filepath[player];
        filepath[player] = filepath[player - 1];
        filepath[player - 1] = interm;
    }
    if (filepath[box - 1] == ' ' && filepath[player - 1] == 'X') {
        interm = filepath[box];
        filepath[box] = filepath[player];
        filepath[player] = filepath[box - 1];
        filepath[box - 1] = interm;
        }
}

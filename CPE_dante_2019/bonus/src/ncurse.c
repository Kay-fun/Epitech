/*
** EPITECH PROJECT, 2020
** dante
** File description:
** display ncurse
*/

#include "../include/my.h"
#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>

void init_ncurse(void)
{
    initscr();
    noecho();
    curs_set(FALSE);
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);
    start_color();
}

void exit_ncurse(int key)
{
    if (key == 27) {
        endwin();
        my_putchar('\n');
    }
}

void color(int x, int y, solver *solve)
{
    if (solve->maze[x][y] == 'o') {
        init_pair(1, COLOR_GREEN, COLOR_GREEN);
        attron(COLOR_PAIR(1));
        mvprintw(x, y, " ");
        attroff(COLOR_PAIR(1));
    } else if (solve->maze[x][y] == 'X') {
        init_pair(3, COLOR_WHITE, COLOR_WHITE);
        attron(COLOR_PAIR(3));
        mvprintw(x, y, " ");
        attroff(COLOR_PAIR(3));
    }
}

void display_ncurse(int key, solver *solve)
{
    int x = 0;
    int y = 0;

    init_ncurse();
    while (key != 27) {
        key = getch();
        for (x = 0; x < solve->height + 1; x++) {
            for (y = 0; y < solve->width + 1; y++)
                color(x, y, solve);
            printw("\n");
        }
        exit_ncurse(key);
        refresh();
    }
}

/*
** EPITECH PROJECT, 2019
** my_sokoban.c
** File description:
** video game in terminal
*/

#include <ncurses.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../include/my.h"

int soko_game(char *filepath, int key)
{
    initscr();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    while (key != 27) {
        clear();
        printw(filepath);
        refresh();
        key = getch();
        move_game(filepath, key);
        if (key == 27) {
            endwin();
        }
    }
}

char *check_file(char *filepath)
{
    int fd;
    int s;
    char *buff;
    struct stat BUFF_SIZE;

    fd = open(filepath, O_RDONLY);
    error_open(fd, filepath);
    stat(filepath, &BUFF_SIZE);
    s = BUFF_SIZE.st_size;
    buff = malloc(sizeof(char) * s + 1);
    read(fd, buff, s);
    close(fd);
    return (buff);
}

int main(int ac, char **av)
{
    char *filepath;
    int key;

    if (ac != 2) {
        return (84);
    } else if (av[1][0] == '-' && av[1][1] == 'h') {
        help_function();
        return (0);
    }
    filepath = check_file(av[1]);
    check_map(filepath);
    soko_game(filepath, key);
    if (key == 32) {
        restart_game(filepath, key);
    }
    return (0);
}

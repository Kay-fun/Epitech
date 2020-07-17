/*
** EPITECH PROJECT, 2019
** error.c
** File description:
** error case
*/

#include "../include/my.h"
#include "unistd.h"
#include <ncurses.h>

int error_open(int fd, char *filepath)
{
    int a = 0;

    if (fd == -1 || fd == 0) {
        write(2, "Open error", 12);
        my_putchar('\n');
        return (84);
    }
    if (!filepath) {
        write(2, "File missing", 14);
        my_putchar('\n');
        return (84);
    }
}

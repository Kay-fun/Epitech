/*
** EPITECH PROJECT, 2020
** dante
** File description:
** open map
*/

#include "my.h"

int open_map(char *file, solver *solve)
{
    int fd = 0;
    struct stat status;

    fd = open(file, O_RDONLY);
    if (fd == -1) {
        my_put_error("Invalid map\n");
        return (84);
    }
    stat(file, &status);
    solve->map = malloc(sizeof(char) * (status.st_size));
    read(fd, solve->map, status.st_size);
    return (0);
}

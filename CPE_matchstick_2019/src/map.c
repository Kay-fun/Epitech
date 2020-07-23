/*
** EPITECH PROJECT, 2020
** map.c
** File description:
** map.c
*/

#include "../include/matchstick.h"

char *set_map_memory(int size_map, char c, char *buff)
{
    int a = 0;

    for (; a < size_map; a++) {
        buff[a] = c;
    }
    buff[a] = '\0';
    return (buff);
}

char **malloc_map(int size_map)
{
    int a = 0;
    char **map;

    map = malloc(sizeof(char *) * (size_map * 2) + 3);
    if (!map && !size_map) {
        return (NULL);
    }
    for (; a < (size_map + 2); a++) {
        map[a] = malloc(sizeof(char) * (size_map * 2) + 3);
        if (!map[a]) {
            return (NULL);
        }
    }
    map[a] = NULL;
    return (map);
}

char **draw_map(int size_map)
{
    int a = 0;
    char **map;

    map = malloc_map(size_map);
    map[0] = set_map_memory((size_map * 2) + 1, '*', map[0]);
    if (!map[0])
        return (NULL);
    map[size_map + 1] = set_map_memory(
        (size_map * 2) + 1, '*', map[size_map + 1]);
    if (!map[size_map + 1])
        return (NULL);
    for (a = 1; a < (size_map + 1); a++) {
        map[a] = set_map_memory((size_map * 2) + 2, ' ', map[a]);
        map[a][0] = '*';
        map[a][size_map * 2] = '*';
    }
    return (map);
}

char **print_matches_function(int size_map, char **map)
{
    int x = 1;
    int y = size_map;
    int a = 0;

    if (map[x] != NULL) {
        for (; x < size_map + 1; x++) {
            for (y = size_map - a; y <= size_map + a; y++) {
                map[x][y] = '|';
            }
            a++;
        }
    }
    return (map);
}

void print_map(char **map)
{
    int a = 0;

    for (; map[a] != NULL; a++) {
        my_putstr(map[a]);
        my_putchar('\n');
    }
}

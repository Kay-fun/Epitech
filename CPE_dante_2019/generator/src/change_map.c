/*
** EPITECH PROJECT, 2020
** change_map.c
** File description:
** change_map in lab
*/

#include "../include/my.h"

char **change_wall(char **map, coords c_map, int nb_rand, size s_map)
{
    if (c_map.y == s_map.y - 1 && c_map.x < s_map.x - 1)
        map[c_map.y][c_map.x + 1] = '*';
    else if (c_map.x == s_map.x - 1 && c_map.y < s_map.y - 1)
        map[c_map.y + 1][c_map.x] = '*';
    else
        if (c_map.x < s_map.x - 1 && c_map.y < s_map.y - 1) {
            map[c_map.y][c_map.x + 1] = (nb_rand == 1) ?
                '*' : map[c_map.y][c_map.x + 1];
            map[c_map.y + 1][c_map.x] = (nb_rand != 1) ?
                '*' : map[c_map.y + 1][c_map.x];
        }
    return (map);
}

char **not_perfect(char **map, size s_map)
{
    map[s_map.y / 2][s_map.x / 2] = 'X';
    map[s_map.y / 2 - 1][s_map.x / 2] = '*';
    map[s_map.y / 2 - 1][s_map.x / 2 - 1] = '*';
    map[s_map.y / 2 - 1][s_map.x / 2 + 1] = '*';
    map[s_map.y / 2 + 1][s_map.x / 2] = '*';
    map[s_map.y / 2 + 1][s_map.x / 2 - 1] = '*';
    map[s_map.y / 2 + 1][s_map.x / 2 + 1] = '*';
    map[s_map.y / 2][s_map.x / 2 - 1] = '*';
    map[s_map.y / 2][s_map.x / 2 + 1] = '*';
    return (map);
}

void change_map(char **map, size s_map)
{
    int nb_rand = 0;
    coords c_map;

    srand(time(0));
    for (int c1 = 0; c1 < s_map.y; c1 += 2) {
        c_map.y = c1;
        for (int c2 = 0; c2 < s_map.x; c2 += 2) {
            c_map.x = c2;
            nb_rand = (rand() % 2) + 1;
            map = change_wall(map, c_map, nb_rand, s_map);
            map = (s_map.y >= 3 && s_map.x >= 3) ?
                not_perfect(map, s_map) : map;
        }
    }
    print_map(map, s_map.y);
}

/*
** EPITECH PROJECT, 2020
** create_map_perfect.c
** File description:
** create map perfect function
*/

#include "../include/my.h"

char **add_end_line_perfect(char **map, int c2, int c3, size s_map)
{
    if (c3 == s_map.x && c2 != s_map.y - 1)
        map[c2][c3] = '\n';
    else if (c3 == s_map.x && c2 == s_map.y - 1)
        map[c2][c3] = '\0';
    return (map);
}

char **filled_line_perfect(char **map, int c2, int c3, size s_map)
{
    if ((c2 % 2 != 0 && c3 != s_map.x) || (c3 % 2 != 0 && c3 != s_map.x))
        map[c2][c3] = 'X';
    else if (c3 != s_map.x)
        map[c2][c3] = '*';
    return (map);
}

char **map_error_perfect(char **map, size s_map)
{
    if (s_map.x % 2 == 0 && s_map.y % 2 != 0)
        for (int c4 = 0; c4 < s_map.y; c4++)
            map[c4][s_map.x - 1] = '*';
    else if (s_map.y % 2 == 0 && s_map.x % 2 != 0)
        for (int c5 = 0; c5 < s_map.x; c5++)
            map[s_map.y - 1][c5] = '*';
    else {
        for (int c6 = 0; c6 < s_map.x; c6++)
            map[s_map.y - 1][c6] = '*';
        for (int c7 = 0; c7 < s_map.y; c7++)
            map[c7][s_map.x - 1] = '*';
    }
    return (map);
}

void create_map_perfect(size s_map)
{
    char **map = malloc(sizeof(char *) * s_map.y);

    for (int c1 = 0; c1 != s_map.y; c1++)
        map[c1] = malloc(sizeof(char) * s_map.x + 1);
    for (int c2 = 0; c2 != s_map.y; c2++)
        for (int c3 = 0; c3 != s_map.x + 1; c3++) {
            add_end_line_perfect(map, c2, c3, s_map);
            filled_line_perfect(map, c2, c3, s_map);
        }
    map = map_error_perfect(map, s_map);
    change_map_perfect(map, s_map);
}

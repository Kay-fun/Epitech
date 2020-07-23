/*
** EPITECH PROJECT, 2020
** matchstick.c
** File description:
** matchstick.c
*/

#include "../include/matchstick.h"

int matches_remaining_function(char *line)
{
    int count = 0;
    int a = 0;

    if (line) {
        while (line[a] != '\0') {
            if (line[a] == '|') {
                count++;
            }
            a++;
        }
    }
    return (count);
}

int check_win_function(char **map)
{
    int a = 0;
    int win = 0;

    while (map[a] && map != NULL) {
        win += matches_remaining_function(map[a]);
        a++;
    }
    if (win == 0)
        return (0);
    else if (win > 0)
        return (win);
    else
        return (-1);
}

/*
** EPITECH PROJECT, 2020
** loop.c
** File description:
** loop.c
*/

#include "../include/matchstick.h"

void set_loop_function(t_matchstick *game, int size_map, int max_matches,
    char *line)
{
    if (game->count == 0 || !game->count) {
        my_putstr("Error: you have to remove at least one match\n");
        game->line = get_index(size_map);
    } else if (game->count > max_matches) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(max_matches);
        my_putstr(" matches per turn\n");
        game->line = get_index(size_map);
    } else if (game->count > matches_remaining_function(line)) {
        my_putstr("Error: not enough matches on this line\n");
        game->line = get_index(size_map);
    }
}

int game_loop(int size_map, int max_matches, char **map)
{
    int next = 1;

    while (next == 1) {
        map = player_round(size_map, max_matches, map);
        if (!map)
            return (0);
        if (check_win_function(map) == 0) {
            my_putstr("You lost, too bad...\n");
            next--;
            return (2);
            }
        game_loop_ia(next, size_map, max_matches, map);
    }
    return (0);
}

int game_loop_ia(int next, int size_map, int max_matches, char **map)
{
    if (next == 1) {
        map = ia_round(size_map, max_matches, map);
        if (!map)
            return (0);
        if (check_win_function(map) == 0) {
            my_putstr("I lost... snif... but I'll get you next time!!\n");
            next--;
            return (1);
        }
    }
    return (0);
}

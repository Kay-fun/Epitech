/*
** EPITECH PROJECT, 2020
** player.c
** File description:
** player.c
*/

#include "../include/matchstick.h"

int get_index(int size_map)
{
    int line = 0;
    char *str = NULL;
    size_t len = 0;

    my_putstr("Line: ");
    if (getline(&str, &len, stdin) == -1) {
        my_putstr("\n");
        return (get_index(size_map));
    }
    line = my_get_nbr(str);
    if (line < 1 || line > size_map || !line) {
        my_putstr("Error: this line is out of range\n");
        return (get_index(size_map));
        }
        return (line);
    return (-1);
}

void display_move(t_matchstick *game)
{
    my_putstr("Player removed ");
    my_put_nbr(game->count);
    my_putstr(" match(es) from line ");
    my_put_nbr(game->line);
    my_putchar('\n');
}

char **player_round(int size_map, int max_matches, char **map)
{
    char **map_changed = NULL;
    t_matchstick game;

    my_putstr("Your turn:\n");
    game.line = get_index(size_map);
    if (game.line == -1) {
        my_putstr("\n");
        return (NULL);
    }
    game.count = count_matches_function_player
        (size_map, max_matches, map[game.line], &game);
    if (game.count == -1) {
        my_putstr("\n");
        return (NULL);
    }
    display_move(&game);
    map_changed = map;
    print_map(map_changed);
    return (map_changed);
}

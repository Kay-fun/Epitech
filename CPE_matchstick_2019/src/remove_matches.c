
/*
** EPITECH PROJECT, 2020
** remove_matches.c
** File description:
** remove_matches.c
*/

#include "../include/matchstick.h"

int count_matches_function_player(int size_map, int max_matches,
    char *line, t_matchstick *game)
{
    char *str = NULL;
    size_t len = 0;

    my_putstr("Matches: ");
    if (getline(&str, &len, stdin) == -1) {
        my_putstr("\n");
        return (get_index(size_map));
    }
    game->count = my_get_nbr(str);
    set_loop_function(game, size_map, max_matches, line);
    if (game->count != 0)
        return (game->count);
    my_putstr("Matches: ");
    game->count = 0;
    return (-1);
}

char **remove_matches(int size_map, int line, int count, char **map)
{
    int remain = 0;
    int pos = 0;
    char **map_changed = NULL;

    if (!map || !line || !size_map || !count)
        return (NULL);
    map_changed = map;
    pos = (size_map * 2);
    remain = count;
    while (remain > 0) {
        if (map_changed[line][pos] != '|')
            pos--;
        map_changed[line][pos] = ' ';
        remain--;
    }
    return (map_changed);
}

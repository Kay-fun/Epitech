/*
** EPITECH PROJECT, 2020
** ia.c
** File description:
** ia.c
*/

#include "../include/matchstick.h"

void print_ia_blabla(int line, int matches)
{
    my_putstr("IA removed ");
    my_put_nbr(matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(line);
    my_putchar('\n');
}

int random_rmv(int min_matches, int max_matches)
{
    int rdm = 0;

    min_matches = 1;
    rdm = ((rand() % (max_matches - min_matches)) + min_matches);
    return (rdm);
}
void *check_win_after_removed(int line, int size_map, char **map,
    char **map_changed)
{
    if (check_win_function(map) == 2) {
        map_changed = remove_matches(size_map, line, 1, map);
        return (map_changed);
    }
    return (map_changed);
}

char **ia_round(int size_map, int max_matches, char **map)
{
    int line = 0;
    int matches = 0;
    char **new_map = NULL;

    my_putstr("AI's turn...\n");
    line = random_rmv(1, (size_map + 1));
    while ((matches_remaining_function(map[line]) == 0))
        line = random_rmv(1, (size_map + 1));
    matches = random_rmv(1, (max_matches + 1));
    while (matches > matches_remaining_function(map[line]))
        matches = random_rmv(1, (max_matches + 1));
    if ((check_win_function(map)) == 2)
        new_map = remove_matches(size_map, line, 1, map);
    else
        new_map = remove_matches(size_map, line, matches, map);
    print_ia_blabla(line, matches);
    print_map(new_map);
    return (new_map);
}

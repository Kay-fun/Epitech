/*
** EPITECH PROJECT, 2020
** jam
** File description:
** manage gestion keys
*/

#include "my.h"

void gestion_keys2(sfClock *clock_player, game_t *ga)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight))
        mv_player_right(clock_player, ga);
    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        mv_player_left(clock_player, ga);
}

void gestion_keys(sfClock *clock_player, game_t *ga)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        mv_player_up(clock_player, ga);
    if (sfKeyboard_isKeyPressed(sfKeyDown))
        mv_player_down(clock_player, ga);
    gestion_keys2(clock_player, ga);
}
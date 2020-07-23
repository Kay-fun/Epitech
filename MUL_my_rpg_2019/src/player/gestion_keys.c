/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** keys
*/

#include "../../include/my.h"

void gestion_keys2(sfClock *clock_player, t_player *player, carte_t *carte)
{
    if (!sfKeyboard_isKeyPressed(sfKeyUp) &&
        !sfKeyboard_isKeyPressed(sfKeyDown) &&
        sfKeyboard_isKeyPressed(sfKeyRight) &&
        !sfKeyboard_isKeyPressed(sfKeyLeft))
        mv_player_right(clock_player, player, carte);
    if (!sfKeyboard_isKeyPressed(sfKeyUp) &&
        !sfKeyboard_isKeyPressed(sfKeyDown) &&
        !sfKeyboard_isKeyPressed(sfKeyRight) &&
        sfKeyboard_isKeyPressed(sfKeyLeft))
        mv_player_left(clock_player, player, carte);
    jump_player(player);
}

int gestion_keys(sfClock *clock_player, t_player *player, carte_t *carte)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp) &&
        !sfKeyboard_isKeyPressed(sfKeyDown) &&
        !sfKeyboard_isKeyPressed(sfKeyRight) &&
        !sfKeyboard_isKeyPressed(sfKeyLeft))
        mv_player_up(clock_player, player, carte);
    if (!sfKeyboard_isKeyPressed(sfKeyUp) &&
        sfKeyboard_isKeyPressed(sfKeyDown) &&
        !sfKeyboard_isKeyPressed(sfKeyRight) &&
        !sfKeyboard_isKeyPressed(sfKeyLeft))
        mv_player_down(clock_player, player, carte);
    gestion_keys2(clock_player, player, carte);
}
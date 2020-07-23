/*
** EPITECH PROJECT, 2020
** jam
** File description:
** movement player
*/

#include "my.h"

void mv_player_up(sfClock *clock_player, game_t *ga)
{
    static int pos = 0;
    int x = sfSprite_getPosition(ga->ma.player).x + 14;
    int y = sfSprite_getPosition(ga->ma.player).y + 54;

    sfSprite_setTextureRect(ga->ma.player, (sfIntRect){pos, 36, 28, 36});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock_player)) > 80) {
        sfClock_restart(clock_player);
        pos = pos + 28;
        if (pos >= 84) {
            pos = 28;
        }
    }
    x = x / 64;
    y = y / 64;
    if (ga->ma.map[y - 1][x] == '1' && y - 1 != 0) {
        sfSprite_move(ga->ma.player, (sfVector2f){0, -2});
    }
}

void mv_player_down(sfClock *clock_player, game_t *ga)
{
    static int pos = 0;
    int x = sfSprite_getPosition(ga->ma.player).x + 14;
    int y = sfSprite_getPosition(ga->ma.player).y - 18;

    sfSprite_setTextureRect(ga->ma.player, (sfIntRect){pos, 0, 28, 36});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock_player)) > 80) {
        sfClock_restart(clock_player);
        pos = pos + 28;
    if (pos >= 84) {
        pos = 0;
        }
    }
    x = x / 64;
    y = y / 64;
    if (ga->ma.map[y + 1][x] == '1')
        sfSprite_move(ga->ma.player, (sfVector2f){0, 2});
}

void mv_player_left(sfClock *clock_player, game_t *ga)
{
    static int pos = 0;
    int x = sfSprite_getPosition(ga->ma.player).x + 60;
    int y = sfSprite_getPosition(ga->ma.player).y + 18;

    sfSprite_setTextureRect(ga->ma.player, (sfIntRect){pos, 108, 28, 36});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock_player)) > 80) {
        sfClock_restart(clock_player);
        pos = pos + 28;
        if (pos >= 84) {
            pos = 28;
        }
    }
    x = x / 64;
    y = y / 64;
    if (ga->ma.map[y][x - 1] == '1')
        sfSprite_move(ga->ma.player, (sfVector2f){-2, 0});
}

void mv_player_right(sfClock *clock_player, game_t *ga)
{
    static int pos = 0;
    int x = sfSprite_getPosition(ga->ma.player).x - 14;
    int y = sfSprite_getPosition(ga->ma.player).y + 18;

    sfSprite_setTextureRect(ga->ma.player, (sfIntRect){pos, 72, 28, 36});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock_player)) > 80) {
        sfClock_restart(clock_player);
        pos = pos + 28;
        if (pos >= 84) {
            pos = 28;
        }
    }
    x = x / 64;
    y = y / 64;
    if (ga->ma.map[y][x + 1] == '1')
        sfSprite_move(ga->ma.player, (sfVector2f){2, 0});
}

/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** movement player function
*/

#include "../../include/my.h"

int jump_player(t_player *player)
{
    static int a = 0;
    static int b = 0;

    if (sfKeyboard_isKeyPressed(sfKeySpace) && b == 0)
        b++;
    if (b == 1 && a < 10) {
        sfSprite_move(player->player, (sfVector2f){0, -5});
        a++;
        if (a == 10)
            b = 2;
    } else if (b == 2 && a > 0) {
        sfSprite_move(player->player, (sfVector2f){0, 5});
        a--;
        if (a == 0)
            b = 0;
    }
}

void mv_player_up(sfClock *clock_player, t_player *player, carte_t *carte)
{
    static int pos = 180;
    int x = sfSprite_getPosition(player->player).x + 25;
    int y = sfSprite_getPosition(player->player).y + 45;

    sfSprite_setTextureRect(player->player, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock_player)) > 50) {
        sfClock_restart(clock_player);
        pos = pos + 45;
        if (pos >= 270) {
            pos = 180;
        }
    }
    x = x / 64;
    y = y / 64;
    if (carte->map[y - 1][x] == '1')
        sfSprite_move(player->player, (sfVector2f){0, -2});
}

void mv_player_down(sfClock *clock_player, t_player *player, carte_t *carte)
{
    static int pos = 0;
    int x = sfSprite_getPosition(player->player).x + 25;
    int y = sfSprite_getPosition(player->player).y;

    sfSprite_setTextureRect(player->player, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock_player)) > 50) {
        sfClock_restart(clock_player);
        pos = pos + 45;
        if (pos >= 90) {
            pos = 0;
        }
    }
    x = x / 64;
    y = y / 64;
    if (carte->map[y + 1][x] == '1')
        sfSprite_move(player->player, (sfVector2f){0, 2});
}

void mv_player_left(sfClock *clock_player, t_player *player, carte_t *carte)
{
    static int pos = 90;
    int x = sfSprite_getPosition(player->player).x + 45;
    int y = sfSprite_getPosition(player->player).y + 25;

    sfSprite_setTextureRect(player->player, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock_player)) > 50) {
        sfClock_restart(clock_player);
        pos = pos + 45;
        if (pos >= 180) {
            pos = 90;
        }
    }
    x = x / 64;
    y = y / 64;
    if (carte->map[y][x - 1] == '1')
        sfSprite_move(player->player, (sfVector2f){-2, 0});
}

void mv_player_right(sfClock *clock_player, t_player *player, carte_t *carte)
{
    static int pos = 1000;
    int x = sfSprite_getPosition(player->player).x;
    int y = sfSprite_getPosition(player->player).y + 25;

    sfSprite_setTextureRect(player->player, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock_player)) > 50) {
        sfClock_restart(clock_player);
        pos = pos + 45;
        if (pos >= 1090) {
            pos = 1000;
        }
    }
    x = x / 64;
    y = y / 64;
    if (carte->map[y][x + 1] == '1')
        sfSprite_move(player->player, (sfVector2f){2, 0});
}
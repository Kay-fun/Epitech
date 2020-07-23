/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** shock wave attack
*/

#include "../../include/my.h"

void animation_shockwave(sfClock *clock, t_player *player)
{
    int pos_x = 0;
    int pos_y = 0;

    sfSprite_setTextureRect(player->player, (sfIntRect){951, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 60) {
        sfClock_restart(clock);
        pos_x = pos_x + 160;
        if (pos_x >= 800) {
            pos_x = 0;
            pos_y = pos_y + 106;
            if (pos_y >= 530)
                pos_y = 0;
        }
    }
}

void display_shockwave(sfRenderWindow *window, t_player *player)
{
    static int a = 0;
    static int b = 0;

    if (sfKeyboard_isKeyPressed(sfKeyA) && b == 0 &&
        player->stat->display_shkwv == 0) {
        player->stat->display_shkwv = 1;
        b = 1;
        }
    if (b == 1 && a < 20) {
        sfRenderWindow_drawSprite(window, player->stat->shockwave, NULL);
        animation_shockwave(player->stat->clock_shkwv, player);
        a++;
        if (a == 20)
            b = 2;
    } else if (b == 2 && a > 0) {
        a--;
        if (a == 0) {
            b = 0;
            player->stat->display_shkwv = 0;
        }
    }
}
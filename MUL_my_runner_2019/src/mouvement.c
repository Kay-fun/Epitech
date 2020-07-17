/*
** EPITECH PROJECT, 2019
** my_runner.c
** File description:
** remake of runner game
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/my_runner.h"

void jump_condition(sfSprite *player)
{
    static int a = 0;
    static int b = 0;

    if (sfKeyboard_isKeyPressed(sfKeySpace) && b == 0)
        b++;
    if (b == 1 && a < 30) {
        sfSprite_move(player, (sfVector2f){0, -10});
        a++;
        if (a == 30)
            b = 2;
    } else if (b == 2 && a > 0) {
        sfSprite_move(player, (sfVector2f){0, 10});
        a--;
        if (a == 0)
            b = 0;
    }
}

void backgrnd_mv(sfSprite *background, sfRenderWindow *window)
{
    int speed_x = -1;

    sfSprite_move(background, (sfVector2f){speed_x, 0});
    if (sfSprite_getPosition(background).x <= -1920)
        sfSprite_setPosition(background, (sfVector2f){0, 0});
    sfRenderWindow_drawSprite(window, background, NULL);
}

void forground_mv(sfSprite *forground, sfRenderWindow *window)
{
    static int pos_y = 0;
    int speed_x = -4;

    sfSprite_move(forground, (sfVector2f){speed_x, 0});
    if (sfSprite_getPosition(forground).x <= -1920)
        sfSprite_setPosition(forground, (sfVector2f){0, 0});
    sfRenderWindow_drawSprite(window, forground, NULL);
}

void player_mv(sfSprite *player, sfRenderWindow *window, sfClock *clock)
{
    static int pos_x = 0;

    sfSprite_setTextureRect(player, (sfIntRect){pos_x, 0, 102, 139});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 50) {
        sfClock_restart(clock);
        pos_x = pos_x + 110;
        if (pos_x == 880) {
            pos_x = 0;
        }
    }
    sfRenderWindow_drawSprite(window, player, NULL);
}

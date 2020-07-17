/*
** EPITECH PROJECT, 2020
** mouvement_tree.c
** File description:
** mouvement funtion
*/

#include "../include/my_runner.h"
#include <stdlib.h>

void city_mv(sfSprite *city, sfRenderWindow *window)
{
    int speed_x = -2.5;

    sfSprite_move(city, (sfVector2f){speed_x, 0});
    if (sfSprite_getPosition(city).x <= -1920)
        sfSprite_setPosition(city, (sfVector2f){0, 0});
    sfRenderWindow_drawSprite(window, city, NULL);
}

void monster_mv(sfSprite *monster, sfRenderWindow *window, sfClock *clock)
{
    int speed_x = -5;
    static int pos_x = 79;
    static int pos_y = 885;

    if (sfRenderWindow_isOpen(window)) {
        sfSprite_setTextureRect(monster, (sfIntRect){pos_x, 70, 70, 83});
        sfSprite_move(monster, (sfVector2f){speed_x, 0});
    }
    if (sfSprite_getPosition(monster).x < -70) {
        sfSprite_setPosition(monster, (sfVector2f){1920, pos_y});
    } else {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 50) {
            pos_x = pos_x + 75;
            if (pos_x >= 890) {
                pos_x = 0;
            }
        }
    }
    sfRenderWindow_drawSprite(window, monster, NULL);
}
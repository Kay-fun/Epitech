/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** movement pnj 1
*/

#include "../../include/my.h"

void mv_pnj_1_up(sfClock *clock, t_pnj *pnj)
{
    static int pos = 180;

    sfSprite_move(pnj->pnj_1, (sfVector2f){0, -1});
    sfSprite_setTextureRect(pnj->pnj_1, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 70) {
        sfClock_restart(clock);
        pos = pos + 45;
        if (pos >= 270)
            pos = 180;
    }
}

void mv_pnj_1_down(sfClock *clock, t_pnj *pnj)
{
    static int pos = 0;

    sfSprite_move(pnj->pnj_1, (sfVector2f){0, 1});
    sfSprite_setTextureRect(pnj->pnj_1, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 70) {
        sfClock_restart(clock);
        pos = pos + 45;
        if (pos >= 90)
            pos = 0;
    }
}

void mv_pnj_1_left(sfClock *clock, t_pnj *pnj)
{
    static int pos = 90;

    sfSprite_setTextureRect(pnj->pnj_1, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 70) {
        sfClock_restart(clock);
        pos = pos + 45;
        if (pos >= 180)
            pos = 90;
    }
    sfSprite_move(pnj->pnj_1, (sfVector2f){-1, 0});
}

void mv_pnj_1_right(sfClock *clock, t_pnj *pnj)
{
    static int pos = 1000;

    sfSprite_setTextureRect(pnj->pnj_1, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 70) {
        sfClock_restart(clock);
        pos = pos + 45;
        if (pos >= 1090)
            pos = 1000;
    }
    sfSprite_move(pnj->pnj_1, (sfVector2f){1, 0});
}
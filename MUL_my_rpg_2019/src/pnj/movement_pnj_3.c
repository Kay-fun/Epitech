/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** movement pnj 3
*/

#include "../../include/my.h"

void mv_pnj_3_up(sfClock *clock, t_pnj *pnj)
{
    static int pos = 180;

    sfSprite_setTextureRect(pnj->pnj_3, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 50) {
        sfClock_restart(clock);
        pos = pos + 45;
        if (pos >= 270)
            pos = 180;
    }
    sfSprite_move(pnj->pnj_3, (sfVector2f){0, -1});
}

void mv_pnj_3_down(sfClock *clock, t_pnj *pnj)
{
    static int pos = 0;

    sfSprite_setTextureRect(pnj->pnj_3, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 50) {
        sfClock_restart(clock);
        pos = pos + 45;
        if (pos >= 90)
            pos = 0;
    }
    sfSprite_move(pnj->pnj_3, (sfVector2f){0, 1});
}

void mv_pnj_3_left(sfClock *clock, t_pnj *pnj)
{
    static int pos = 90;

    sfSprite_setTextureRect(pnj->pnj_3, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 50) {
        sfClock_restart(clock);
        pos = pos + 45;
        if (pos >= 180)
            pos = 90;
    }
    sfSprite_move(pnj->pnj_3, (sfVector2f){-1, 0});
}

void mv_pnj_3_right(sfClock *clock, t_pnj *pnj)
{
    static int pos = 1000;

    sfSprite_setTextureRect(pnj->pnj_3, (sfIntRect){pos, 0, 45, 50});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 50) {
        sfClock_restart(clock);
        pos = pos + 45;
        if (pos >= 1090)
            pos = 1000;
    }
    sfSprite_move(pnj->pnj_3, (sfVector2f){1, 0});
}
/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** movement pnj
*/

#include "../../include/my.h"

void ia_pnj_1(t_pnj *pnj)
{
    static int a = 0;
    static int b = 1;

    if (b == 1 && a < 100) {
        mv_pnj_1_down(pnj->clock_pnj_1, pnj);
        a++;
        if (a == 100)
            b = 2;
    } else if (b == 2 && a > 0) {
        mv_pnj_1_up(pnj->clock_pnj_1, pnj);
        a--;
        if (a == 0)
            b = 1;
    }
}

void ia_pnj_2(t_pnj *pnj, t_player *player)
{
    int x_player = sfSprite_getPosition(player->player).x;
    int y_player = sfSprite_getPosition(player->player).y;
    int x_pnj = sfSprite_getPosition(pnj->pnj_2).x;
    int y_pnj = sfSprite_getPosition(pnj->pnj_2).y;

    if (x_pnj >= x_player)
        mv_pnj_2_left(pnj->clock_pnj_2, pnj);
    else if (x_pnj < x_player)
        mv_pnj_2_right(pnj->clock_pnj_2, pnj);
    if (y_pnj <= y_player)
        mv_pnj_2_down(pnj->clock_pnj_2, pnj);
    else if (y_pnj > y_player)
        mv_pnj_2_up(pnj->clock_pnj_2, pnj);
}

void ia_pnj_3(t_pnj *pnj)
{
    static int a = 0;
    static int b = 1;

    if (b == 1 && a < 120) {
        mv_pnj_3_up(pnj->clock_pnj_3, pnj);
        a++;
        if (a == 120)
            b = 2;
    } else if (b == 2 && a < 240) {
        mv_pnj_3_left(pnj->clock_pnj_3, pnj);
        a++;
        if (a == 240)
            b = 1;
    } else if (b == 1 && a < 360) {
        mv_pnj_3_down(pnj->clock_pnj_3, pnj);
        a++;
        if (a == 360)
            b = 2;
    } else if (b == 2 && a < 480) {
        mv_pnj_3_right(pnj->clock_pnj_3, pnj);
        a++;
        if (a == 480) {
            b = 1;
            a = 0;
        }
    }
}
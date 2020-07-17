/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** display_pnj.c
*/

#include "../../include/my.h"

void display_pnj(sfRenderWindow *window, t_pnj *pnj, t_player *player)
{
    sfText_setPosition(pnj->life,
        (sfVector2f){sfSprite_getPosition(pnj->pnj_2).x + 4,
        sfSprite_getPosition(pnj->pnj_2).y - 20});
    sfRenderWindow_drawSprite(window, pnj->pnj_1, NULL);
    if (pnj->dead == 0) {
        sfRenderWindow_drawSprite(window, pnj->pnj_2, NULL);
        sfRenderWindow_drawText(window, pnj->life, NULL);
    }
    sfRenderWindow_drawSprite(window, pnj->pnj_3, NULL);
}

void load_pnj(sfRenderWindow *window, t_pnj *pnj, t_player *player,
    sfClock *clock)
{
    if (sfRenderWindow_isOpen(window)) {
        display_pnj(window, pnj, player);
        ia_pnj_1(pnj);
        ia_pnj_2(pnj, player);
        ia_pnj_2(pnj, player);
        ia_pnj_3(pnj);
        update_life_pnj(pnj, player, clock);
    }
}

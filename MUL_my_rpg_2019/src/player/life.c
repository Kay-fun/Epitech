/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** life
*/

#include "../../include/my.h"

void update_life_player(t_player *player, t_pnj *pnj, sfClock *clock)
{
    static char *life_player = NULL;

    if (sfSprite_getPosition(player->player).x >
        sfSprite_getPosition(pnj->pnj_2).x &&
        sfSprite_getPosition(player->player).y >
        sfSprite_getPosition(pnj->pnj_2).y - 45 &&
        sfSprite_getPosition(player->player).x <
        sfSprite_getPosition(pnj->pnj_2).x + 45) {
            if (sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 1) {
                sfClock_restart(clock);
                player->stat->hp -= 1;
                if (player->stat->hp < 0)
                    player->scene = 20;
            }
        life_player = convert_nb_csfml(player->stat->hp, life_player);
        sfText_setString(player->life, life_player);
        free(life_player);
    }
}
/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** update score when player do something
*/

#include "../../include/my.h"

void update_score(t_player *player)
{
    static char *score_player = NULL;

    if (player->stat->kill_pnj == 1) {
        player->stat->kill += 1;
        score_player = convert_nb_csfml(player->stat->kill, score_player);
        sfText_setString(player->nb_kill, score_player);
        free(score_player);
        player->stat->kill_pnj = 0;
    }
}
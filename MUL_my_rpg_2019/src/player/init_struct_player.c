/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** init struct player
*/

#include <stdlib.h>
#include <stddef.h>
#include "../../include/my.h"

t_cinematic *init_cinematic(void)
{
    t_cinematic *cin;

    cin->cin_1 = s_dialog_1();
    cin->text_cin = create_cin_text();
    cin->text_cin_2 = create_cin_text_2();
    cin->cin_press = create_cin_text_press();
    return (cin);
}

stat_t *init_player_stat(stat_t *data)
{
    data->lvl = 1;
    data->hp_max = 200;
    data->hp = 200;
    data->kill = 0;
    data->atk = 20;
    data->def = 20;
    data->exp = 0;
    data->exp_next = 20;
    data->exp_tot = 0;
    data->kill_pnj = 0;
    data->display_shkwv = 0;
    data->clock_shkwv = sfClock_create();
    data->shockwave = create_shockwave();
    return (data);
}

t_player *init_struct_player(t_player *player)
{
    player = malloc(sizeof(t_player));
    if (!player)
        return (NULL);
    player->scene = 0;
    player->battle = 0;
    player->player = create_player();
    player->life = create_life();
    player->clock = sfClock_create();
    player->clock_1 = sfClock_create();
    player->clock_2 = sfClock_create();
    player->nb_kill = create_score_nb();
    player->display_kill = create_score_text();
    player->clock_nb = sfClock_create();
    player->stat = malloc(sizeof(stat_t));
    if (!player->player || !player->clock || !player->stat)
        return (NULL);
    player->stat = init_player_stat(player->stat);
    player->cinematic = init_cinematic();
    return (player);
}
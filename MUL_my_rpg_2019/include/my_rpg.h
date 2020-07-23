/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** my_rpg.h
*/

#include "struct.h"

#ifndef MYRPG_H_
#define MYRPG_H_

typedef struct s_pnj
{
    int dead;
    int hp;
    sfText *life;
    sfSprite *pnj_1;
    sfSprite *pnj_2;
    sfSprite *pnj_3;
    sfClock *clock_pnj_1;
    sfClock *clock_pnj_2;
    sfClock *clock_pnj_3;
} t_pnj;

typedef struct start_menu
{
    int display_htp;
    sfSprite *start_bg;
    sfSprite *start_button;
    sfSprite *quit_button;
    sfSprite *htp;
    sfSprite *htp_button;
} start;

typedef struct stat_s
{
    int lvl;
    int hp_max;
    int hp;
    int kill;
    int atk;
    int def;
    int exp;
    int exp_next;
    int exp_tot;
    int kill_pnj;
    int display_shkwv;
    sfSprite *shockwave;
    sfClock *clock_shkwv;
} stat_t;

typedef struct s_player
{
    int scene;
    int battle;
    sfSprite *player;
    sfText *nb_kill;
    sfText *display_kill;
    sfText *life;
    sfClock* clock;
    sfClock *clock_nb;
    sfClock *clock_1;
    sfClock *clock_2;
    stat_t *stat;
    t_cinematic *cinematic;
} t_player;

typedef struct carte_s
{
    char **map;
    sfTexture *texarbre;
    sfSprite *arbre;
    sfTexture *texsol;
    sfSprite *sol;
    sfTexture *texrocher;
    sfSprite *rocher;
    sfSprite *pause_menu;
    sfSprite *resume_pause;
    sfSprite *restart_pause;
    sfSprite *exit_pause;
    sfSprite *bg_pause;
    sfSprite *quit_end;
    sfSprite *restart_end;
    sfSprite *game_over;
} carte_t;

#endif

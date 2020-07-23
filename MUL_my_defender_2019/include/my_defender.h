/*
** EPITECH PROJECT, 2020
** my_defender.h
** File description:
** my_defender
*/

#ifndef MYDEFENDER_H_
#define MYDEFENDER_H_

typedef struct menu menu;
struct menu
{
    sfSprite *background_menu;
    sfSprite *start_button;
    sfSprite *exit_button;
};

typedef struct game game;
struct game
{
    sfSprite *background_game;
    sfSprite *mushroom;
    sfSprite *pause;
    sfSprite *resume_button;
    sfSprite *restart_button;
    sfSprite *quit_button;
    sfSprite *door_castle;
    sfSprite *door_mushroom;
    sfText *money;
    sfText *life_castle;
    sfText *life_mushroom;
    sfSprite *boost_tower;
    sfSprite *damage_tower;
    sfSprite *money_tower;
    sfSprite *slow_tower;
    sfSprite *background_game_circle;
};

typedef struct clock clock;
struct clock
{
    sfClock *c_moove;
    sfClock *c_money;
    sfClock *c_life_castle;
    sfClock *c_life_mushroom;
};

typedef struct nb nb;
struct nb
{
    int l_castle;
    int l_mushroom;
};

#endif

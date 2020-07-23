/*
** EPITECH PROJECT, 2020
** struct.h
** File description:
** fonction for stucture
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct start_menu_s
{
    sfSprite *htp_but;
    sfSprite *htp_txt;
    sfSprite *back;
    sfSprite *start;
    sfSprite *logo;
    sfSprite *quit;
    sfTexture *texquit;
    sfTexture *texlogo;
    sfTexture *texstart;
    sfTexture *texback;
    int menu;
    int htp;
}start_menu_t;

typedef struct maze_s
{
    char **map;
    int got_key;
    int key1;
    int chest1;
    int time;
    sfTexture *txt_wall;
    sfSprite *wall;
    sfTexture *txt_floor;
    sfSprite *floor;
    sfSprite *player;
    sfClock *clock_game;
    sfSprite *light;
    sfSprite *chest;
    sfSprite *key;
    sfSprite *door;
    sfSprite *win;
    sfSprite *lose;
}maze_t;

typedef struct c_clock_s
{
    int nb_time;
    char *str_time;
    sfText *text_time;
    sfClock *c_time;
}c_clock_t;

typedef struct game
{
    start_menu_t sm;
    maze_t ma;
    c_clock_t cl;
}game_t;

#endif

/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** compilation of fonction
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "./my_defender.h"

#ifndef MY_H_
#define MY_H_

sfSprite *create_bg_menu(void);
sfSprite *create_start_button(void);
sfSprite *create_exit_button(void);
menu st_menu(menu images);
game st_game(game assets);
void gestion_button_menu(menu images, sfRenderWindow *window);
int gestion_exit(menu images, sfRenderWindow *window);
int gestion_start(menu images, sfRenderWindow *window);
sfSprite *create_bg_game(void);
sfSprite *create_castle(void);
sfSprite *create_mushroom(void);
void moove_mushroom(game assets, sfClock *clock_game, nb life);
sfSprite *create_pause_background(void);
sfSprite *create_resume_button(void);
sfSprite *create_restart_button(void);
sfSprite *create_quit_button(void);
void gestion_button_game(game assets, sfRenderWindow *window);
sfSprite *create_door_castle(void);
sfSprite *create_door_mushroom(void);
sfMusic *set_music(sfMusic *mushroom_revolt);
sfText *create_money(void);
void maj_money(game assets, sfClock *clock_money);
char *my_inttostr(int nb, char *s_nb);
int my_compute_power_it (int nb, int p);
sfText *create_life_castle(void);
void maj_life_castle(game assets, nb life);
char *my_inttostr_dollars(int nb, char *s_nb);
sfText *create_life_mushroom(void);
sfSprite *create_boost_tower(void);
sfSprite *create_damage_tower(void);
sfSprite *create_money_tower(void);
sfSprite *create_slow_tower(void);
sfSprite *create_bg_game_circle(void);
clock st_clock(clock clock_game);
sfClock *create_c_clock(void);
void use_tower_dmg(game assets, clock clock_game, sfRenderWindow *window,
                    nb life);
void gestion_escape(game assets, sfMusic *mushroom_revolt,
                    sfRenderWindow *window);
void display_loop_pause(sfRenderWindow *window, game assets);
void display_loop_menu(sfRenderWindow *window, menu images);
void display_loop_game(sfRenderWindow *window, game assets);

#endif

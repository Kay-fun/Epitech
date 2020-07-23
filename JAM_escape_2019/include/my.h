/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "struct.h"

#ifndef MY_H_
#define MY_H_

//****LIB****

int my_getnbr(char const *str);
int my_strcmp(char *str1, char *str2);
void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nb);
char *my_inttostr(int nb, char *s_nb);
int my_compute_power_it(int nb, int p);
int calc_size(char const *filepath);
int calc_size_str(char *str);
void my_put_error(char const *str);
int my_strlen(char const *str);
char *add_char(char *str, char char_add);
char *add_link(char *str, char *str_add);
int charisnb(char letter);
void my_put_big_hex(int nb);
void my_put_hex(int nb);
void my_put_bin(int nb);
void my_put_oct(int nb);
int calc_i(int nb);
int my_intlenforbin(int nb);
int my_intlen(int nb);
int verif_env(char **env);
int modif_strcmp(char const *s1, char const *s2);

//****CSFML****

// CREATE
sfMusic *create_layton(sfMusic *music);
sfSprite *create_player(void);
sfSprite *create_chest(void);
sfSprite *create_key(void);
void init_start_menu(game_t *ga);
void init_struct_maze(game_t *ga);
void init_start_menu_bis(game_t *ga);
char **malloc_map(char *str);
void malloc_mp(char **map);
char *open_read(int fd, char const *filepath);
void init_clock(game_t *ga);
sfClock *create_clock(void);
sfSprite *create_light(void);
sfText *create_time(void);
sfSprite *create_htp_b(void);
sfSprite *create_htp_t(void);
sfSprite *create_door(void);
sfSprite *create_lose(void);
sfSprite *create_win(void);

// EVENT
void event_window(sfRenderWindow *window, sfEvent event);

// DISPLAY
void display_maze(sfRenderWindow *window, game_t *ga);
void display_player(sfRenderWindow *window, sfClock *clock_player, game_t *ga);
void display_menu(sfRenderWindow *window, game_t *ga);
void display_game(sfRenderWindow *window, game_t *ga);
void print_timer(game_t *ga);
void display_chest_key(sfRenderWindow *window, game_t *ga);

// DESTROY
void destroy_all(sfRenderWindow *window, sfMusic *music, game_t *ga);

//INFO
int mouseonsprite(sfRenderWindow *w, sfSprite *sprite, int width_s, int height_s);

//MANAGE
void change_button(sfRenderWindow *window, game_t *ga);
void gestion_keys(sfClock *clock_player, game_t *ga);
void mv_player_up(sfClock *clock_player, game_t *ga);
void mv_player_down(sfClock *clock_player, game_t *ga);
void mv_player_right(sfClock *clock_player, game_t *ga);
void mv_player_left(sfClock *clock_player, game_t *ga);
void gestion_light(game_t *ga);
void gestion_htp(sfRenderWindow *window, game_t *ga);
void gestion_lose(sfRenderWindow *window, game_t *ga);
void hitbox_chest(game_t *ga);
void hitbox_key(game_t *ga);
void hitbox_door(game_t *ga);

#endif

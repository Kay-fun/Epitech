/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** compilation of fonction
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my_rpg.h"

#ifndef MY_H_
#define MY_H_

//*****CSFML*****//
sfRenderWindow *create_window(void);
sfSprite *bg_start(void);
sfSprite *create_quit_button(void);
sfSprite *create_start_button(void);
sfSprite *create_player(void);
sfSprite *create_pnj_1(void);
sfSprite *create_pnj_2(void);
sfSprite *create_pnj_3(void);
sfSprite *create_resume_pause(void);
sfSprite *create_restart_pause(void);
sfSprite *create_exit_pause(void);
sfSprite *create_bg_pause(void);
sfSprite *create_restart_end(void);
sfSprite *create_quit_button_end(void);
sfSprite *create_game_over(void);
sfSprite *create_shockwave(void);
sfSprite *create_htp(void);
sfSprite *s_dialog_1(void);
sfSprite *create_htp_button(void);
sfClock *create_clock_1(void);
sfClock *create_clock_2(void);
sfClock *create_clock_3(void);
sfMusic *create_music(sfMusic *music);
sfMusic *create_music_game(sfMusic *music);
sfMusic*create_music_end(sfMusic *music);
sfText *create_score_nb(void);
sfText *create_score_text(void);
sfText *create_life(void);
sfText *create_cin_text(void);
sfText *create_cin_text_press(void);
sfText *create_cin_text_2(void);
sfText *create_life_pnj(void);

//*****STRUCTURE*****//
start init_struct_start(start menu);
t_player *init_struct_player(t_player *player);
t_pnj init_struct_pnj(t_pnj pnj);
carte_t *init_struct_carte(void);

//*****INT*****//
int load_start_menu(sfRenderWindow *window, start *menu, t_player *player);
int manage_click_quit(sfRenderWindow *window, start *menu, int swap);
int manage_click_start(sfRenderWindow *window, start *menu, int swap);
int manage_click_help(sfRenderWindow *window, start *menu, int swap);
int jump_player(t_player *player);
int gestion_keys(sfClock *clock_player, t_player *player, carte_t *carte);
int load_cinematic(sfRenderWindow *window, t_player *player, carte_t *carte);
int load_help(sfRenderWindow *window, start *menu);
void manage_click_htp(sfRenderWindow *window, start *menu);
int my_rand(int nb1, int nb2);
int my_strcmp(char *str1, char *str2);

//*****VOID*****//
void help(char **av);
void event_window(sfRenderWindow *window, sfEvent event);
void display_start_menu(sfRenderWindow *window, start *menu);
void destroy_start_menu(start *menu);
void load_player(sfRenderWindow *window, sfClock *clock_player,
    t_player *player, carte_t *carte);
void display_player(sfRenderWindow *window, t_player *player);
void destroy_all(sfRenderWindow *window, start *menu, t_player *player);
void gestion_mouse_menu(sfRenderWindow *window, start *menu);
void display_player(sfRenderWindow *window, t_player *game);
void mv_player_up(sfClock *clock_player, t_player *player, carte_t *carte);
void mv_player_right(sfClock *clock_player, t_player *player, carte_t *carte);
void mv_player_left(sfClock *clock_player, t_player *player, carte_t *carte);
void mv_player_down(sfClock *clock_player, t_player *player, carte_t *carte);
void malloc_mp(char **map);
void display_shockwave(sfRenderWindow *window, t_player *player);
void display_map(sfRenderWindow *window, carte_t *carte);
void display_pnj(sfRenderWindow *window, t_pnj *pnj, t_player *player);
void update_life_pnj(t_pnj *pnj, t_player *player, sfClock *clock);
void load_pnj(sfRenderWindow *window, t_pnj *pnj, t_player *player,
    sfClock *clock);
void mv_pnj_1_up(sfClock *clock, t_pnj *pnj);
void mv_pnj_1_down(sfClock *clock, t_pnj *pnj);
void mv_pnj_1_left(sfClock *clock, t_pnj *pnj);
void mv_pnj_1_right(sfClock *clock, t_pnj *pnj);
void mv_pnj_2_up(sfClock *clock, t_pnj *pnj);
void mv_pnj_2_down(sfClock *clock, t_pnj *pnj);
void mv_pnj_2_left(sfClock *clock, t_pnj *pnj);
void mv_pnj_2_right(sfClock *clock, t_pnj *pnj);
void mv_pnj_3_up(sfClock *clock, t_pnj *pnj);
void mv_pnj_3_down(sfClock *clock, t_pnj *pnj);
void mv_pnj_3_left(sfClock *clock, t_pnj *pnj);
void mv_pnj_3_right(sfClock *clock, t_pnj *pnj);
void display_pause(sfRenderWindow *window, carte_t *carte);
void gestion_mouse_pause(sfRenderWindow *window, carte_t *carte);
void destroy_game(t_player *player, carte_t *carte);
void pause_function(t_player *player);
void load_pause_menu(sfRenderWindow *window, carte_t *carte,
    t_player *player);
void click_exit_pause(sfRenderWindow *window, carte_t *carte);
void click_restart_pause(sfRenderWindow *window, carte_t *carte,
    t_player *player);
void click_resume_pause(sfRenderWindow *window, carte_t *carte,
    t_player *player);
void ia_pnj_1(t_pnj *pnj);
void ia_pnj_2(t_pnj *pnj, t_player *player);
void ia_pnj_3(t_pnj *pnj);
void update_life_player(t_player *player, t_pnj *pnj, sfClock *clock);
void update_score(t_player *player);
void load_number(sfClock *clock_2, t_pnj *pnj, t_player *player);
void load_end_menu(sfRenderWindow *window, carte_t *carte);
void manage_click_quit_end(sfRenderWindow *window, carte_t *carte);
void gestion_mouse_end(sfRenderWindow *window, carte_t *carte);
void update_life_pnj(t_pnj *pnj, t_player *player, sfClock *clock);

//*****CHAR*****//
char *convert_nb_csfml(int nb, char *str);
char **malloc_map(char *str);
char *open_read(int fd, char const *filepath);

#endif

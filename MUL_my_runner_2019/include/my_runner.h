/*
** EPITECH PROJECT, 2019
** my_runner.h
** File description:
** my_runner.h
*/

#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <unistd.h>

#ifndef MY_RUNNER_H_
#define MY_RUNNER_H_

void cleaner(sfRenderWindow *window, sfClock *clock, sfMusic *music,
    sfSprite *monster);
void cleaner1(sfSprite *background, sfSprite *tree,
    sfSprite *forground, sfSprite *city);
void cleaner2(sfMusic *prout);
void backgrnd_mv(sfSprite *background, sfRenderWindow *window);
void forground_mv(sfSprite *forground, sfRenderWindow *window);
void city_mv(sfSprite *city, sfRenderWindow *window);
void player_mv(sfSprite *player, sfRenderWindow *window, sfClock *clock);
void monster_mv(sfSprite *monster, sfRenderWindow *window, sfClock *clock);
void jump_condition(sfSprite *player);
void display_sprite(sfRenderWindow *window, sfSprite *background,
    sfSprite *forground, sfSprite *city);
void display_sprite_2(sfRenderWindow *window, sfSprite *player,
    sfSprite *monster, sfClock *clock);
void detect_collision(sfSprite *player, sfSprite *monster,
    sfRenderWindow *window, sfMusic *prout);
sfSprite *background_create(sfRenderWindow *window);
sfSprite *forground_create(sfRenderWindow *window);
sfSprite *city_create(sfRenderWindow *window);
sfSprite *player_create(sfRenderWindow *window);
sfSprite *monster_create(sfRenderWindow *window);
sfClock *clock_function(void);
sfMusic *music_function(void);
sfMusic *prout_sound(void);
//sfMusic *jump_sound(void);
void help_function(void);
void choose_runner(void);
void pre_main(sfRenderWindow *window);
void display_part_2(sfRenderWindow *window, sfSprite *player,
    sfSprite *monster, sfClock *clock);
void display_part_1(sfRenderWindow *window, sfSprite *background,
    sfSprite *forground, sfSprite *city);
int display_menu(sfRenderWindow *window_start);
void main_start(void);
void detect_click_start(sfRenderWindow *window_start, sfSprite *start);
void detect_click_end(sfRenderWindow *window_end, sfSprite *end,
    sfSprite *restart);
int display_menu_end(sfRenderWindow *window_end);
void display_end(sfRenderWindow *window_end, sfSprite *end,
    sfSprite *restart, sfSprite *game_over);
sfSprite *end_create(sfRenderWindow *window_end);
sfSprite *restart_create(sfRenderWindow *window_end);
sfSprite *game_over_create(sfRenderWindow *window_end);
void main_end(void);
void event_window(sfRenderWindow *window, sfEvent event);
void detect_click_end_2(sfRenderWindow *window_end, sfSprite *restart);

#endif

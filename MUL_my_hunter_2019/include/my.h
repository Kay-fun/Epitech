/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** compilation of fonction
*/

#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Audio.h>

#ifndef MY_H_
#define MY_H_

void load_sprite_duck(sfSprite *sprite_duck, sfRenderWindow *window,
    sfClock *clock);
void ccleaner(sfSprite *sprite_back, sfSprite *sprite_duck, sfMusic *music);
void ccleaner_win( sfClock *clock, sfRenderWindow *window);
sfSprite *back_create(sfRenderWindow *window);
sfSprite *duck_create(sfRenderWindow *window);
sfClock *create_clock(void);
sfMusic *create_music(void);
sfMusic *create_bim(void);
void pre_main(sfRenderWindow *window);

#endif

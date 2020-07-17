/*
** EPITECH PROJECT, 2019
** ccleaner.c
** File description:
** clean all things
*/

#include "../../include/my.h"

void ccleaner(sfSprite *sprite_back, sfSprite *sprite_duck, sfMusic *music)
{
    sfSprite_destroy(sprite_duck);
    sfSprite_destroy(sprite_back);
    sfMusic_destroy(music);
}

void ccleaner_win( sfClock *clock, sfRenderWindow *window)
{
    sfClock_destroy(clock);
    sfRenderWindow_destroy(window);
}

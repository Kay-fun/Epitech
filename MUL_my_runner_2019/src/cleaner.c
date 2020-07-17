/*
** EPITECH PROJECT, 2019
** my_runner.c
** File description:
** cleaner
*/

#include "../include/my_runner.h"

void cleaner(sfRenderWindow *window, sfClock *clock, sfMusic *music,
    sfSprite *monster)
{
    sfMusic_destroy(music);
    sfClock_destroy(clock);
    sfSprite_destroy(monster);
    sfRenderWindow_destroy(window);
}

void cleaner1(sfSprite *background, sfSprite *player,
    sfSprite *forground, sfSprite *city)
{
    sfSprite_destroy(forground);
    sfSprite_destroy(background);
    sfSprite_destroy(player);
    sfSprite_destroy(city);
}

void cleaner2(sfMusic *prout)
{
    sfMusic_destroy(prout);
}
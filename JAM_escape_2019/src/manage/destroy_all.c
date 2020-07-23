/*
** EPITECH PROJECT, 2020
** jam
** File description:
** destroy sprite window
*/

#include "my.h"

void destroy_all(sfRenderWindow *window, sfMusic *music, game_t *ga)
{
    sfSprite_destroy(ga->ma.wall);
    sfSprite_destroy(ga->ma.floor);
    sfMusic_destroy(music);
    sfRenderWindow_destroy(window);
}

/*
** EPITECH PROJECT, 2020
** gestion_htp.c
** File description:
** gestion htp button
*/

#include "my.h"

void gestion_htp(sfRenderWindow *window, game_t *ga)
{
    if (mouseonsprite(window, ga->sm.htp_but, 55, 95) == 0) {
        sfSprite_setTextureRect(ga->sm.htp_but, (sfIntRect){55, 0, 55, 95});
        ga->sm.htp = 1;
    } else {
        sfSprite_setTextureRect(ga->sm.htp_but, (sfIntRect){0, 0, 55, 95});
        ga->sm.htp = 0;
    }
}

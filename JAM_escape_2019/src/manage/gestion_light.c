/*
** EPITECH PROJECT, 2020
** gestion_light.c
** File description:
** gestion_light
*/

#include "my.h"

void gestion_light(game_t *ga)
{
    sfSprite_setPosition(ga->ma.light, (sfVector2f)
        {sfSprite_getPosition(ga->ma.player).x - 1985,
        sfSprite_getPosition(ga->ma.player).y - 1485});
}

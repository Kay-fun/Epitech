/*
** EPITECH PROJECT, 2020
** jam
** File description:
** hitbox managmeent between key and player
*/

#include "my.h"

void hitbox_key(game_t *ga)
{
    if (sfSprite_getPosition(ga->ma.player).x >=
        sfSprite_getPosition(ga->ma.key).x &&
        sfSprite_getPosition(ga->ma.player).x <=
        sfSprite_getPosition(ga->ma.key).x + 81 &&
        sfSprite_getPosition(ga->ma.player).y >=
        sfSprite_getPosition(ga->ma.key).y &&
        sfSprite_getPosition(ga->ma.player).y <=
        sfSprite_getPosition(ga->ma.key).y + 49) {
        ga->ma.got_key = 1;
        ga->ma.key1 = 1;
    }
}

void hitbox_chest(game_t *ga)
{
    if (sfSprite_getPosition(ga->ma.player).x >=
        sfSprite_getPosition(ga->ma.chest).x &&
        sfSprite_getPosition(ga->ma.player).x <=
        sfSprite_getPosition(ga->ma.chest).x + 79 &&
        sfSprite_getPosition(ga->ma.player).y >=
        sfSprite_getPosition(ga->ma.chest).y &&
        sfSprite_getPosition(ga->ma.player).y <=
        sfSprite_getPosition(ga->ma.chest).y + 75
        && ga->ma.got_key == 1) {
        ga->ma.chest1 = 1;
        ga->ma.got_key = 2;
    }
}

void hitbox_door(game_t *ga)
{
    if (sfSprite_getPosition(ga->ma.player).x >=
        sfSprite_getPosition(ga->ma.door).x &&
        sfSprite_getPosition(ga->ma.player).x <=
        sfSprite_getPosition(ga->ma.door).x + 93 &&
        sfSprite_getPosition(ga->ma.player).y >=
        sfSprite_getPosition(ga->ma.door).y &&
        sfSprite_getPosition(ga->ma.player).y >=
        sfSprite_getPosition(ga->ma.door).y + 66
        && ga->ma.got_key == 2) {
            ga->ma.got_key = 3;
    }
}

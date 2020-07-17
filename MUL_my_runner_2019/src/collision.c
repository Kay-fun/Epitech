/*
** EPITECH PROJECT, 2020
** collision.c
** File description:
** collision.c
*/

#include "../include/my_runner.h"

void detect_collision(sfSprite *player, sfSprite *monster,
    sfRenderWindow *window, sfMusic *prout)
{
    if (sfSprite_getPosition(player).x > sfSprite_getPosition(monster).x - 70 &&
        sfSprite_getPosition(player).y > sfSprite_getPosition(monster).y - 70 &&
            sfSprite_getPosition(player).x <
                sfSprite_getPosition(monster).x + 70) {
        sfRenderWindow_close(window);
        sfMusic_play(prout);
        main_end();
        cleaner2(prout);
    }
}
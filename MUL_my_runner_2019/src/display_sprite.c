/*
** EPITECH PROJECT, 2020
** display_sprite.c
** File description:
** display_sprite.c
*/

#include "../include/my_runner.h"

void display_sprite(sfRenderWindow *window, sfSprite *background,
    sfSprite *forground, sfSprite *city)
{
    backgrnd_mv(background, window);
    city_mv(city, window);
    forground_mv(forground, window);
}

void display_sprite_2(sfRenderWindow *window, sfSprite *player,
    sfSprite *monster, sfClock *clock)
{
    monster_mv(monster, window, clock);
    player_mv(player, window, clock);
    jump_condition(player);
}
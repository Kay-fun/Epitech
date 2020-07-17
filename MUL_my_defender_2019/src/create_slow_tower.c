/*
** EPITECH PROJECT, 2020
** create_slow_tower.c
** File description:
** create slow tower
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_slow_tower(void)
{
    sfTexture *t_slow_tower;
    sfSprite *s_slow_tower;

    t_slow_tower = sfTexture_createFromFile("assets/slow_tower.png", NULL);
    s_slow_tower = sfSprite_create();
    sfSprite_setTexture(s_slow_tower, t_slow_tower, sfTrue);
    sfSprite_setPosition(s_slow_tower, (sfVector2f){200, 0});
    sfSprite_setTextureRect(s_slow_tower, (sfIntRect){625, 625, 625, 625});
    return (s_slow_tower);
}

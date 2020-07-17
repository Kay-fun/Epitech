/*
** EPITECH PROJECT, 2020
** create_boost_tower.c
** File description:
** create boost tower
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_boost_tower(void)
{
    sfTexture *t_boost_tower;
    sfSprite *s_boost_tower;

    t_boost_tower = sfTexture_createFromFile("assets/boost_tower.png", NULL);
    s_boost_tower = sfSprite_create();
    sfSprite_setTexture(s_boost_tower, t_boost_tower, sfTrue);
    sfSprite_setPosition(s_boost_tower, (sfVector2f){200, 200});
    sfSprite_setTextureRect(s_boost_tower, (sfIntRect){625, 625, 625, 625});
    return (s_boost_tower);
}

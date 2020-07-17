/*
** EPITECH PROJECT, 2020
** create_mushroom.c
** File description:
** create mushroom
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_mushroom(void)
{
    sfTexture *t_mushroom;
    sfSprite *s_mushroom;

    t_mushroom = sfTexture_createFromFile("assets/mushroom.png", NULL);
    s_mushroom = sfSprite_create();
    sfSprite_setTexture(s_mushroom, t_mushroom, sfTrue);
    sfSprite_setPosition(s_mushroom, (sfVector2f){-200, 435});
    sfSprite_setTextureRect(s_mushroom, (sfIntRect){0, 256, 160, 128});
    return (s_mushroom);
}

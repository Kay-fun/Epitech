/*
** EPITECH PROJECT, 2020
** create_life_mushroom.c
** File description:
** create_life_mushroom
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

sfText *create_life_mushroom(void)
{
    sfFont *font_life_mushroom;
    sfText *text_life_mushroom;
    sfColor color_life_mushroom;

    font_life_mushroom = sfFont_createFromFile("assets/grobold.ttf");
    text_life_mushroom = sfText_create();
    sfText_setString(text_life_mushroom, "100");
    sfText_setFont(text_life_mushroom, font_life_mushroom);
    sfText_setCharacterSize(text_life_mushroom, 20);
    color_life_mushroom = sfColor_fromRGB(255, 0, 0);
    sfText_setColor(text_life_mushroom, color_life_mushroom);
    sfText_setPosition(text_life_mushroom, (sfVector2f){0, 0});
    return (text_life_mushroom);
}

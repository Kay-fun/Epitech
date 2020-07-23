/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** create life
*/

#include "../../include/my.h"

sfText *create_life(void)
{
    sfText *life;
    sfFont *font;
    sfColor color;

    life = sfText_create();
    font = sfFont_createFromFile("font/Final-Fantasy.ttf");
    sfText_setString(life, "200");
    sfText_setFont(life, font);
    sfText_setCharacterSize(life, 18);
    color = sfColor_fromRGB(255, 10, 10);
    sfText_setColor(life, color);
    sfText_setPosition(life, (sfVector2f){300, 10});
    return (life);
}
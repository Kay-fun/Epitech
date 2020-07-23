/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** create score function
*/

#include "../../include/my.h"

sfText *create_score_nb(void)
{
    sfText *nb;
    sfFont *font;
    sfColor color;

    nb = sfText_create();
    font = sfFont_createFromFile("font/Final-Fantasy.ttf");
    sfText_setString(nb, "0");
    sfText_setFont(nb, font);
    sfText_setCharacterSize(nb, 18);
    color = sfColor_fromRGB(255, 255, 255);
    sfText_setColor(nb, color);
    sfText_setPosition(nb, (sfVector2f){90, 10});
    return (nb);
}

sfText *create_score_text(void)
{
    sfText *text;
    sfFont *font;
    sfColor color;

    text = sfText_create();
    font = sfFont_createFromFile("font/Final-Fantasy.ttf");
    color = sfColor_fromRGB(255, 255, 255);
    sfText_setString(text, "KILL");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 18);
    sfText_setColor(text, color);
    sfText_setPosition(text, (sfVector2f){20, 10});
    return (text);
}
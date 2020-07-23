/*
** EPITECH PROJECT, 2020
** create_time.c
** File description:
** create_time
*/

#include "my.h"

sfText *create_time(void)
{
    sfFont *font_t;
    sfText *text_t;
    sfColor color_t;

    font_t = sfFont_createFromFile("assets/grobold.ttf");
    text_t = sfText_create();
    sfText_setString(text_t, "180");
    sfText_setFont(text_t, font_t);
    sfText_setCharacterSize(text_t, 50);
    color_t = sfColor_fromRGB(255, 255, 255);
    sfText_setColor(text_t, color_t);
    sfText_setPosition(text_t, (sfVector2f){1180, 820});
    return (text_t);
}

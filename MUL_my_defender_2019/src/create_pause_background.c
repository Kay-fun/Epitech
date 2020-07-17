/*
** EPITECH PROJECT, 2020
** create_pause_background.c
** File description:
** create pause_background
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_pause_background(void)
{
    sfTexture *t_pause_bg;
    sfSprite *s_pause_bg;

    t_pause_bg = sfTexture_createFromFile("assets/pause.png", NULL);
    s_pause_bg = sfSprite_create();
    sfSprite_setTexture(s_pause_bg, t_pause_bg, sfTrue);
    sfSprite_setPosition(s_pause_bg, (sfVector2f){0, 0});
    return (s_pause_bg);
}

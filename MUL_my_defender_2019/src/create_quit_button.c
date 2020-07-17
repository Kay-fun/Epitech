/*
** EPITECH PROJECT, 2020
** create_quit_button.c
** File description:
** create quit button
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_quit_button(void)
{
    sfTexture *t_quit_button;
    sfSprite *s_quit_button;

    t_quit_button = sfTexture_createFromFile("assets/quit_button.png", NULL);
    s_quit_button = sfSprite_create();
    sfSprite_setTexture(s_quit_button, t_quit_button, sfTrue);
    sfSprite_setPosition(s_quit_button, (sfVector2f){896, 616});
    sfSprite_setTextureRect(s_quit_button, (sfIntRect){0, 0, 128, 32});
    return (s_quit_button);
}

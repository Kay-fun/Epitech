/*
** EPITECH PROJECT, 2020
** create_restart_button.c
** File description:
** create restart button
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_restart_button(void)
{
    sfTexture *t_restart_button;
    sfSprite *s_restart_button;

    t_restart_button = sfTexture_createFromFile
        ("assets/restart_button.png", NULL);
    s_restart_button = sfSprite_create();
    sfSprite_setTexture(s_restart_button, t_restart_button, sfTrue);
    sfSprite_setPosition(s_restart_button, (sfVector2f){896, 560});
    sfSprite_setTextureRect(s_restart_button, (sfIntRect){0, 0, 128, 32});
    return (s_restart_button);
}

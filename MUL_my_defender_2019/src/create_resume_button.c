/*
** EPITECH PROJECT, 2020
** create_resume_button.c
** File description:
** create resume button
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_resume_button(void)
{
    sfTexture *t_resume_button;
    sfSprite *s_resume_button;

    t_resume_button = sfTexture_createFromFile
        ("assets/resume_button.png", NULL);
    s_resume_button = sfSprite_create();
    sfSprite_setTexture(s_resume_button, t_resume_button, sfTrue);
    sfSprite_setPosition(s_resume_button, (sfVector2f){896, 504});
    sfSprite_setTextureRect(s_resume_button, (sfIntRect){0, 0, 128, 32});
    return (s_resume_button);
}

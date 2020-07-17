/*
** EPITECH PROJECT, 2020
** create_bg_game.c
** File description:
** create bg game
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_bg_game(void)
{
    sfTexture *t_bg_game;
    sfSprite *s_bg_game;

    t_bg_game = sfTexture_createFromFile("assets/background_game.png", NULL);
    s_bg_game = sfSprite_create();
    sfSprite_setTexture(s_bg_game, t_bg_game, sfTrue);
    return (s_bg_game);
}

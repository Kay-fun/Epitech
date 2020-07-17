/*
** EPITECH PROJECT, 2020
** gestion_escape.c
** File description:
** gestion escape
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

void gestion_escape(game assets, sfMusic *mushroom_revolt,
                    sfRenderWindow *window)
{
    if (sfKeyboard_isKeyPressed (sfKeyEscape)) {
        while (sfKeyboard_isKeyPressed (sfKeyEscape)) {
            sfMusic_pause(mushroom_revolt);
            gestion_button_game(assets, window);
            display_loop_pause(window, assets);
        }
        sfMusic_play(mushroom_revolt);
    }
}

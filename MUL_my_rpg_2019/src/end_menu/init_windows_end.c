/*
** EPITECH PROJECT, 2020
** init_windows
** File description:
** open and decorate windows
*/

#include "../../include/my.h"

sfSprite *create_quit_button_end(void)
{
    sfSprite *quit_button;
    sfTexture *txt_quit_button;

    quit_button = sfSprite_create();
    txt_quit_button = sfTexture_createFromFile("assets/quit_game.png", NULL);
    sfSprite_setTexture(quit_button, txt_quit_button, sfTrue);
    sfSprite_setPosition(quit_button, (sfVector2f){750, 840});
    sfSprite_setTextureRect(quit_button, (sfIntRect){0, 0, 451, 125});
    return (quit_button);
}

sfSprite *create_game_over(void)
{
    sfSprite *game_over;
    sfTexture *txt_gameover;

    game_over = sfSprite_create();
    txt_gameover = sfTexture_createFromFile("assets/death.png", NULL);
    sfSprite_setTexture(game_over, txt_gameover, sfTrue);
    return (game_over);
}

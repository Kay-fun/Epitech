/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** create sprite button
*/

#include "../../include/my.h"

sfSprite *create_start_button(void)
{
    sfSprite *start_button;
    sfTexture *txt_start_button;

    start_button = sfSprite_create();
    txt_start_button = sfTexture_createFromFile("assets/play_game.png", NULL);
    sfSprite_setTexture(start_button, txt_start_button, sfTrue);
    sfSprite_setPosition(start_button, (sfVector2f){120, 442});
    sfSprite_setTextureRect(start_button, (sfIntRect){0, 0, 451, 124});
    return (start_button);
}

sfSprite *create_quit_button(void)
{
    sfSprite *quit_button;
    sfTexture *txt_quit_button;

    quit_button = sfSprite_create();
    txt_quit_button = sfTexture_createFromFile("assets/quit_game.png", NULL);
    sfSprite_setTexture(quit_button, txt_quit_button, sfTrue);
    sfSprite_setPosition(quit_button, (sfVector2f){120, 566});
    sfSprite_setTextureRect(quit_button, (sfIntRect){0, 0, 451, 125});
    return (quit_button);
}

sfSprite *create_htp_button(void)
{
    sfSprite *htp_button;
    sfTexture *txt_htp_button;

    htp_button = sfSprite_create();
    txt_htp_button = sfTexture_createFromFile("assets/htp_button.png", NULL);
    sfSprite_setTexture(htp_button, txt_htp_button, sfTrue);
    sfSprite_setPosition(htp_button, (sfVector2f){250, 700});
    sfSprite_setTextureRect(htp_button, (sfIntRect){0, 0, 190, 190});
    return (htp_button);
}
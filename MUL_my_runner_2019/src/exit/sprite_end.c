/*
** EPITECH PROJECT, 2020
** sprite_end.c
** File description:
** sprite_end.c
*/

#include "../../include/my_runner.h"

sfSprite *end_create(sfRenderWindow *window_end)
{
    sfSprite *end;
    sfTexture *txt_end;

    end = sfSprite_create();
    txt_end = sfTexture_createFromFile("image/exit.png", NULL);
    sfSprite_setTexture(end, txt_end, sfTrue);
    sfSprite_setPosition(end, (sfVector2f){630, 720});
    return (end);
}

sfSprite *restart_create(sfRenderWindow *window_end)
{
    sfSprite *restart;
    sfTexture *txt_restart;

    restart = sfSprite_create();
    txt_restart = sfTexture_createFromFile("image/restart.png", NULL);
    sfSprite_setTexture(restart, txt_restart, sfTrue);
    sfSprite_setPosition(restart, (sfVector2f){960, 720});
    return (restart);
}

sfSprite *game_over_create(sfRenderWindow *window_end)
{
    sfSprite *game_over;
    sfTexture *txt_game_over;

    game_over = sfSprite_create();
    txt_game_over = sfTexture_createFromFile("image/game over.png", NULL);
    sfSprite_setTexture(game_over, txt_game_over, sfTrue);
    sfSprite_setPosition(game_over, (sfVector2f){550, 240});
    return (game_over);
}

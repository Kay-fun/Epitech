/*
** EPITECH PROJECT, 2020
** jam
** File description:
** create_player
*/

#include "my.h"

sfSprite *create_player(void)
{
    sfSprite *player;
    sfTexture *txt_player;

    player = sfSprite_create();
    txt_player = sfTexture_createFromFile("assets/player.png", NULL);
    sfSprite_setTexture(player, txt_player, sfTrue);
    sfSprite_setPosition(player, (sfVector2f){960, 850});
    sfSprite_setTextureRect(player, (sfIntRect){0, 0, 28, 36});
    return (player);
}

void display_player(sfRenderWindow *window, sfClock *clock_player, game_t *ga)
{
    if (sfRenderWindow_isOpen(window)) {
        gestion_keys(clock_player, ga);
        sfRenderWindow_drawSprite(window, ga->ma.player, NULL);
    }
}

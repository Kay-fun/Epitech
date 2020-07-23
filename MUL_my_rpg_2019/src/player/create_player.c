/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** create player
*/

#include "../../include/my.h"

sfSprite *create_player(void)
{
    sfSprite *sf_player;
    sfTexture *txt_player;

    sf_player = sfSprite_create();
    txt_player = sfTexture_createFromFile("assets/player.png", NULL);
    sfSprite_setTexture(sf_player, txt_player, sfTrue);
    sfSprite_setPosition(sf_player, (sfVector2f){1840, 710});
    sfSprite_setTextureRect(sf_player, (sfIntRect){0, 0, 45, 50});
    return (sf_player);
}

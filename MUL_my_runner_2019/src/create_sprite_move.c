/*
** EPITECH PROJECT, 2020
** create_sprite_move.c
** File description:
** create_sprite_move.c
*/

#include "../include/my_runner.h"

sfSprite *monster_create(sfRenderWindow *window)
{
    sfSprite *monster;
    sfTexture *txt_monster;

    monster = sfSprite_create();
    txt_monster = sfTexture_createFromFile("image/monster1.png", NULL);
    sfSprite_setTexture(monster, txt_monster, sfTrue);
    sfSprite_setPosition(monster, (sfVector2f){1920, 885});
    return (monster);
}

sfSprite *player_create(sfRenderWindow *window)
{
    sfSprite *player;
    sfTexture *txt_player;

    player = sfSprite_create();
    txt_player = sfTexture_createFromFile("image/player.png", NULL);
    sfSprite_setTexture(player, txt_player, sfTrue);
    sfSprite_setPosition(player, (sfVector2f){80, 830});
    return (player);
}

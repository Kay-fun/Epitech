/*
** EPITECH PROJECT, 2020
** draw_sprite.c
** File description:
** draw_sprite.c
*/

#include "../../include/my.h"

sfSprite *back_create(sfRenderWindow *window)
{
    sfSprite *sprite_back;
    sfTexture *texture_back;

    sprite_back = sfSprite_create();
    texture_back = sfTexture_createFromFile("image/background.png", NULL);
    sfSprite_setTexture(sprite_back, texture_back, sfTrue);
    return (sprite_back);
}

sfSprite *duck_create(sfRenderWindow *window)
{
    sfSprite *sprite_duck;
    sfTexture *texture_duck;

    sprite_duck = sfSprite_create();
    texture_duck = sfTexture_createFromFile("image/canard.png", NULL);
    sfSprite_setTexture(sprite_duck, texture_duck, sfTrue);
    return (sprite_duck);
}

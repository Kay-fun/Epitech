/*
** EPITECH PROJECT, 2020
** jam
** File description:
** create sprite chest and key
*/

#include "my.h"

sfSprite *create_chest(void)
{
    sfSprite *chest;
    sfTexture *txt_chest;

    chest = sfSprite_create();
    txt_chest = sfTexture_createFromFile("assets/chest.png", NULL);
    sfSprite_setTexture(chest, txt_chest, sfTrue);
    sfSprite_setPosition(chest, (sfVector2f){550, 250});
    return (chest);
}

sfSprite *create_key(void)
{
    sfSprite *key;
    sfTexture *txt_key;

    key = sfSprite_create();
    txt_key = sfTexture_createFromFile("assets/key.png", NULL);
    sfSprite_setTexture(key, txt_key, sfTrue);
    sfSprite_setPosition(key, (sfVector2f){1500, 75});
    return (key);
}

void display_chest_key(sfRenderWindow *window, game_t *ga)
{
    if (ga->ma.key1 == 0)
        sfRenderWindow_drawSprite(window, ga->ma.key, NULL);
    if (ga->ma.chest1 == 0)
        sfRenderWindow_drawSprite(window, ga->ma.chest, NULL);
}

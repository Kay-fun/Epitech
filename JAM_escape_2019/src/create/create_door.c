/*
** EPITECH PROJECT, 2020
** jam
** File description:
** create door
*/

#include "my.h"

sfSprite *create_door(void)
{
    sfSprite *door;
    sfTexture *txt_door;

    door = sfSprite_create();
    txt_door = sfTexture_createFromFile("assets/door.png", NULL);
    sfSprite_setTexture(door, txt_door, sfTrue);
    sfSprite_setPosition(door, (sfVector2f){931, 960});
    sfSprite_setTextureRect(door, (sfIntRect){0, 0, 98, 68});
    return (door);
}
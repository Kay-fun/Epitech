/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** create shock wave
*/

#include "../../include/my.h"

sfSprite *create_shockwave(void)
{
    sfSprite *sf_shockwave;
    sfTexture *txt_shockwave;

    sf_shockwave = sfSprite_create();
    txt_shockwave = sfTexture_createFromFile("assets/shockwave.png", NULL);
    sfSprite_setTexture(sf_shockwave, txt_shockwave, sfTrue);
    sfSprite_setPosition(sf_shockwave, (sfVector2f){0, 0});
    sfSprite_setTextureRect(sf_shockwave, (sfIntRect){0, 106, 160, 106});
    return (sf_shockwave);
}
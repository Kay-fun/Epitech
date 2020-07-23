/*
** EPITECH PROJECT, 2020
** create_light.c
** File description:
** create light
*/

#include "my.h"

sfSprite *create_light(void)
{
    sfTexture *t_light;
    sfSprite *s_light;

    t_light = sfTexture_createFromFile("assets/light_effect.png", NULL);
    s_light = sfSprite_create();
    sfSprite_setTexture(s_light, t_light, sfTrue);
    sfSprite_setPosition(s_light, (sfVector2f){4000, 3000});
    return (s_light);
}

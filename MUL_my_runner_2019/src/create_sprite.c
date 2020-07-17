/*
** EPITECH PROJECT, 2020
** create_sprite.c
** File description:
** create_sprite.c
*/

#include "../include/my_runner.h"

sfSprite *background_create(sfRenderWindow *window)
{
    sfSprite *background;
    sfTexture *txt_background;

    background = sfSprite_create();
    txt_background = sfTexture_createFromFile("image/background.png", NULL);
    sfSprite_setTexture(background, txt_background, sfTrue);
    return (background);
}

sfSprite *forground_create(sfRenderWindow *window)
{
    sfSprite *forground;
    sfTexture *txt_forground;

    forground = sfSprite_create();
    txt_forground = sfTexture_createFromFile("image/floor.png",  NULL);
    sfSprite_setTexture(forground, txt_forground, sfTrue);
    return (forground);
}

sfSprite *city_create(sfRenderWindow *window)
{
    sfSprite *city;
    sfTexture *txt_city;

    city = sfSprite_create();
    txt_city = sfTexture_createFromFile("image/city.png", NULL);
    sfSprite_setTexture(city, txt_city, sfTrue);
    return (city);
}
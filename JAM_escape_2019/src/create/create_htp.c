/*
** EPITECH PROJECT, 2020
** create_htp.c
** File description:
** create htp
*/

#include "my.h"

sfSprite *create_htp_b(void)
{
    sfTexture *t_htp_b;
    sfSprite *s_htp_b;

    t_htp_b = sfTexture_createFromFile("assets/how_to_play_but.png", NULL);
    s_htp_b = sfSprite_create();
    sfSprite_setTexture(s_htp_b, t_htp_b, sfTrue);
    sfSprite_setPosition(s_htp_b, (sfVector2f){1825, 25});
    sfSprite_setTextureRect(s_htp_b, (sfIntRect){0, 0, 55, 95});
    return (s_htp_b);
}

sfSprite *create_htp_t(void)
{
    sfTexture *t_htp_t;
    sfSprite *s_htp_t;

    t_htp_t = sfTexture_createFromFile("assets/how_to_play_txt.png", NULL);
    s_htp_t = sfSprite_create();
    sfSprite_setTexture(s_htp_t, t_htp_t, sfTrue);
    sfSprite_setPosition(s_htp_t, (sfVector2f){1450, 50});
    sfSprite_setTextureRect(s_htp_t, (sfIntRect){0, 0, 350, 203});
    return (s_htp_t);
}

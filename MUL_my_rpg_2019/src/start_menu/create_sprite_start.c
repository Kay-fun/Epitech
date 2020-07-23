/*
** EPITECH PROJECT, 2020
** create start sprite
** File description:
** create start sprite
*/

#include "../../include/my.h"

sfSprite *bg_start(void)
{
    sfTexture *txt_bg_start;
    sfSprite *bg_start;

    bg_start = sfSprite_create();
    txt_bg_start = sfTexture_createFromFile("assets/bg_start.jpg", NULL);
    sfSprite_setTexture(bg_start, txt_bg_start, sfTrue);
    return (bg_start);
}

sfSprite *create_htp(void)
{
    sfSprite *htp;
    sfTexture *txt_htp;

    htp = sfSprite_create();
    txt_htp = sfTexture_createFromFile("assets/how_to_play.png", NULL);
    sfSprite_setTexture(htp, txt_htp, sfTrue);
    sfSprite_setPosition(htp, (sfVector2f){500, 700});
    return (htp);
}
/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** create pnj
*/

#include "../../include/my.h"

sfSprite *create_pnj_1(void)
{
    sfSprite *pnj_1;
    sfTexture *txt_pnj_1;

    pnj_1 = sfSprite_create();
    txt_pnj_1 = sfTexture_createFromFile("assets/pnj_1.png", NULL);
    sfSprite_setTexture(pnj_1, txt_pnj_1, sfTrue);
    sfSprite_setPosition(pnj_1, (sfVector2f){250, 140});
    sfSprite_setTextureRect(pnj_1, (sfIntRect){0, 0, 45, 50});
    return (pnj_1);
}

sfSprite *create_pnj_2(void)
{
    sfSprite *pnj_2;
    sfTexture *txt_pnj_2;

    pnj_2 = sfSprite_create();
    txt_pnj_2 = sfTexture_createFromFile("assets/pnj_2.png", NULL);
    sfSprite_setTexture(pnj_2, txt_pnj_2, sfTrue);
    sfSprite_setPosition(pnj_2, (sfVector2f){1000, 850});
    sfSprite_setTextureRect(pnj_2, (sfIntRect){0, 0, 45, 50});
    return (pnj_2);
}

sfSprite *create_pnj_3(void)
{
    sfSprite *pnj_3;
    sfTexture *txt_pnj_3;

    pnj_3 = sfSprite_create();
    txt_pnj_3 = sfTexture_createFromFile("assets/pnj_3.png", NULL);
    sfSprite_setTexture(pnj_3, txt_pnj_3, sfTrue);
    sfSprite_setPosition(pnj_3, (sfVector2f){700, 540});
    sfSprite_setTextureRect(pnj_3, (sfIntRect){0, 0, 45, 50});
    return (pnj_3);
}

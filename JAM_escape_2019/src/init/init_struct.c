/*
** EPITECH PROJECT, 2020
** init_struct
** File description:
** file for initialize the structures
*/

#include <stddef.h>
#include <stdlib.h>
#include <SFML/Graphics.h>

#include "my.h"

void init_start_menu(game_t *ga)
{
    ga->sm.texback = sfTexture_createFromFile("./assets/bg_menu.jpg", NULL);
    ga->sm.back = sfSprite_create();
    ga->sm.texlogo = sfTexture_createFromFile("./assets/logo_menu.png", NULL);
    ga->sm.logo = sfSprite_create();
    ga->sm.texstart = sfTexture_createFromFile("./assets/star_but.png", NULL);
    ga->sm.start = sfSprite_create();
    ga->sm.texquit = sfTexture_createFromFile("./assets/quit_but.png", NULL);
    ga->sm.quit = sfSprite_create();
    sfSprite_setTexture(ga->sm.quit, ga->sm.texquit, sfTrue);
    sfSprite_setTexture(ga->sm.start, ga->sm.texstart, sfTrue);
    sfSprite_setTexture(ga->sm.back, ga->sm.texback, sfTrue);
    sfSprite_setTexture(ga->sm.logo, ga->sm.texlogo, sfTrue);
    sfSprite_setTextureRect(ga->sm.start, (sfIntRect){0, 0, 422, 138});
    sfSprite_setTextureRect(ga->sm.quit, (sfIntRect){0, 0, 445, 197});
    init_start_menu_bis(ga);
}

void init_start_menu_bis(game_t *ga)
{
    sfSprite_setScale(ga->sm.quit, (sfVector2f){0.15, 0.15});
    sfSprite_setScale(ga->sm.logo, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(ga->sm.logo, (sfVector2f){850, 700});
    sfSprite_setPosition(ga->sm.start, (sfVector2f){750, 470});
    ga->sm.menu = 0;
    ga->sm.htp_but = create_htp_b();
    ga->sm.htp_txt = create_htp_t();
    ga->sm.htp = 0;
}

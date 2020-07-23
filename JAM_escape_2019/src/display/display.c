/*
** EPITECH PROJECT, 2020
** display.c
** File description:
** display
*/

#include "my.h"

void display_game(sfRenderWindow *window, game_t *ga)
{
    sfRenderWindow_clear(window, sfBlack);
    display_maze(window, ga);
    display_chest_key(window, ga);
    sfRenderWindow_drawSprite(window, ga->ma.door, NULL);
    display_player(window, ga->ma.clock_game, ga);
    sfRenderWindow_drawSprite(window, ga->ma.light, NULL);
    sfRenderWindow_drawText(window, ga->cl.text_time, NULL);
}

void display_menu(sfRenderWindow *window, game_t *ga)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, ga->sm.back, NULL);
    sfRenderWindow_drawSprite(window, ga->sm.logo, NULL);
    sfRenderWindow_drawSprite(window, ga->sm.start, NULL);
    sfRenderWindow_drawSprite(window, ga->sm.quit, NULL);
    sfRenderWindow_drawSprite(window, ga->sm.htp_but, NULL);
    if (ga->sm.htp == 1)
        sfRenderWindow_drawSprite(window, ga->sm.htp_txt, NULL);
}

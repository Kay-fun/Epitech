/*
** EPITECH PROJECT, 2020
** jam
** File description:
** lose or win display
*/

#include "my.h"

sfSprite *create_lose(void)
{
    sfSprite *lose;
    sfTexture *txt_lose;

    lose = sfSprite_create();
    txt_lose = sfTexture_createFromFile("assets/you_died.png", NULL);
    sfSprite_setTexture(lose, txt_lose, sfTrue);
    return (lose);
}

sfSprite *create_win(void)
{
    sfSprite *win;
    sfTexture *txt_win;

    win = sfSprite_create();
    txt_win = sfTexture_createFromFile("assets/you_win.png", NULL);
    sfSprite_setTexture(win, txt_win, sfTrue);
    return (win);
}

void display_lose(sfRenderWindow *window, game_t *ga)
{
    sfRenderWindow_drawSprite(window, ga->ma.lose, NULL);
}

void display_win(sfRenderWindow *window, game_t *ga)
{
    sfRenderWindow_drawSprite(window, ga->ma.win, NULL);
}

void gestion_lose(sfRenderWindow *window, game_t *ga)
{
    if (ga->cl.nb_time == 0)
        display_lose(window, ga);
    else if (ga->ma.got_key == 3)
        display_win(window, ga);
}
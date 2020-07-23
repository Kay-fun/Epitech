/*
** EPITECH PROJECT, 2020
** jam
** File description:
** display maze level
*/

#include "my.h"

void put_frame(sfRenderWindow *window, int a, int b, game_t *ga)
{
    int x = b * 63;
    int y = a * 63;

    switch (ga->ma.map[a][b])
    {
    case '0':
        sfSprite_setPosition(ga->ma.floor, (sfVector2f){x, y});
        sfRenderWindow_drawSprite(window, ga->ma.floor, NULL);
        break;
    case '1':
        sfSprite_setPosition(ga->ma.wall, (sfVector2f){x, y});
        sfRenderWindow_drawSprite(window, ga->ma.wall, NULL);
        break;
    case '2':
        sfSprite_setPosition(ga->ma.wall, (sfVector2f){x, y});
        sfRenderWindow_drawSprite(window, ga->ma.wall, NULL);
        break;
    }
}

void display_maze(sfRenderWindow *window, game_t *ga)
{
    for (int a = 0; a != 17; a++)
        for (int b = 0; b != 31; b++)
            put_frame(window, a, b, ga);
}

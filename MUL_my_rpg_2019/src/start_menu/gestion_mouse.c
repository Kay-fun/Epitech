/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** gestion mouse on button
*/

#include "../../include/my.h"

int gestion_start_button(int x_mouse, int y_mouse, start *menu)
{
    if (x_mouse >= sfSprite_getPosition(menu->start_button).x &&
        x_mouse <= sfSprite_getPosition(menu->start_button).x + 451 &&
        y_mouse >= sfSprite_getPosition(menu->start_button).y &&
        y_mouse <= sfSprite_getPosition(menu->start_button).y + 124)
        return (1);
    return (0);
}

int gestion_exit_button(int x_mouse, int y_mouse, start *menu)
{
    if (x_mouse >= sfSprite_getPosition(menu->quit_button).x &&
        x_mouse <= sfSprite_getPosition(menu->quit_button).x + 451 &&
        y_mouse >= sfSprite_getPosition(menu->quit_button).y &&
        y_mouse <= sfSprite_getPosition(menu->quit_button).y + 125)
        return (1);
    return (0);
}

int gestion_htp_button(int x_mouse, int y_mouse, start *menu)
{
    if (x_mouse >= sfSprite_getPosition(menu->htp_button).x &&
        x_mouse <= sfSprite_getPosition(menu->htp_button).x + 190 &&
        y_mouse >= sfSprite_getPosition(menu->htp_button).y &&
        y_mouse <= sfSprite_getPosition(menu->htp_button).y + 190)
        return (1);
    return (0);
}

void gestion_mouse_menu(sfRenderWindow *window, start *menu)
{
    static int x_mouse;
    static int y_mouse;
    static int x;
    int start_value = 0;
    int exit_value = 0;
    int htp_value = 0;

    x_mouse = sfMouse_getPositionRenderWindow(window).x;
    y_mouse = sfMouse_getPositionRenderWindow(window).y;
    start_value = gestion_start_button(x_mouse, y_mouse, menu);
    exit_value = gestion_exit_button(x_mouse, y_mouse, menu);
    htp_value = gestion_htp_button(x_mouse, y_mouse, menu);
    x = (start_value == 1) ? 451 : 0;
    sfSprite_setTextureRect(menu->start_button, (sfIntRect){x, 0, 451, 124});
    x = (exit_value == 1) ? 451 : 0;
    sfSprite_setTextureRect(menu->quit_button, (sfIntRect){x, 0, 451, 125});
    x = (htp_value == 1) ? 190 : 0;
    sfSprite_setTextureRect(menu->htp_button, (sfIntRect){x, 0, 190, 190});
}

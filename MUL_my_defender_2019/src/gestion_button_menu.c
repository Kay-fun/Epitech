/*
** EPITECH PROJECT, 2020
** gestion_button_menu.c
** File description:
** gestion button menu
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

int gestion_start_button(int xmouse, int ymouse, menu images)
{
    if (xmouse >= sfSprite_getPosition(images.start_button).x &&
        xmouse <= sfSprite_getPosition(images.start_button).x + 358 &&
        ymouse >= sfSprite_getPosition(images.start_button).y &&
        ymouse <= sfSprite_getPosition(images.start_button).y + 140)
        return (1);
    return (0);
}

int gestion_exit_button(int xmouse, int ymouse, menu images)
{
    if (xmouse >= sfSprite_getPosition(images.exit_button).x &&
        xmouse <= sfSprite_getPosition(images.exit_button).x + 332 &&
        ymouse >= sfSprite_getPosition(images.exit_button).y &&
        ymouse <= sfSprite_getPosition(images.exit_button).y + 127)
        return (1);
    return (0);
}

void gestion_button_menu(menu images, sfRenderWindow *window)
{
    static int xmouse;
    static int ymouse;
    static int x;
    int start_value = 0;
    int exit_value = 0;

    xmouse = sfMouse_getPositionRenderWindow(window).x;
    ymouse = sfMouse_getPositionRenderWindow(window).y;
    start_value = gestion_start_button(xmouse, ymouse, images);
    exit_value = gestion_exit_button(xmouse, ymouse, images);
    x = (start_value == 1) ? 358 : 0;
    sfSprite_setTextureRect(images.start_button, (sfIntRect){x, 0, 358, 140});
    x = (exit_value == 1) ? 332 : 0;
    sfSprite_setTextureRect(images.exit_button, (sfIntRect){x, 0, 332, 127});
}

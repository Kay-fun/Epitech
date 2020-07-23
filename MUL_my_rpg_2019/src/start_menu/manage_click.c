/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** manage click
*/

#include "../../include/my.h"

int manage_click_start(sfRenderWindow *window, start *menu, int swap)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window).x >
            sfSprite_getPosition(menu->start_button).x
            && sfMouse_getPositionRenderWindow(window).x <
            sfSprite_getPosition(menu->start_button).x
            + 451 && sfMouse_getPositionRenderWindow(window).y >
            sfSprite_getPosition(menu->start_button).y &&
            sfMouse_getPositionRenderWindow(window).y <
            sfSprite_getPosition(menu->start_button).y + 124) {
                destroy_start_menu(menu);
                swap = 1;
                return (swap);
        }
    }
    return (0);
}

int manage_click_quit(sfRenderWindow *window, start *menu, int swap)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window).x >
            sfSprite_getPosition(menu->quit_button).x
            && sfMouse_getPositionRenderWindow(window).x <
            sfSprite_getPosition(menu->quit_button).x
            + 451 && sfMouse_getPositionRenderWindow(window).y >
            sfSprite_getPosition(menu->quit_button).y &&
            sfMouse_getPositionRenderWindow(window).y <
            sfSprite_getPosition(menu->quit_button).y + 125) {
                destroy_start_menu(menu);
                swap = 1;
                return (swap);
        }
    }
    return (0);
}

void manage_click_htp(sfRenderWindow *window, start *menu)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window).x >
            sfSprite_getPosition(menu->htp_button).x
            && sfMouse_getPositionRenderWindow(window).x <
            sfSprite_getPosition(menu->htp_button).x
            + 190 && sfMouse_getPositionRenderWindow(window).y >
            sfSprite_getPosition(menu->htp_button).y &&
            sfMouse_getPositionRenderWindow(window).y <
            sfSprite_getPosition(menu->htp_button).y + 190) {
            menu->display_htp = 1;
        }
    }
}

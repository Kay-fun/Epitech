/*
** EPITECH PROJECT, 2020
** manage_click_mouse.c
** File description:
** manage_click_mouse.c
*/

#include "../../include/my_runner.h"

void detect_click_start(sfRenderWindow *window_start, sfSprite *start)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window_start).x >
            sfSprite_getPosition(start).x
            && sfMouse_getPositionRenderWindow(window_start).x <
            sfSprite_getPosition(start).x
            + 358 && sfMouse_getPositionRenderWindow(window_start).y >
            sfSprite_getPosition(start).y &&
            sfMouse_getPositionRenderWindow(window_start).y <
            sfSprite_getPosition(start).y + 141) {
                sfRenderWindow_close(window_start);
                choose_runner();
            }
    }
}
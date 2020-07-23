/*
** EPITECH PROJECT, 2020
** main_end.c
** File description:
** main_end.c
*/

#include "../../include/my_runner.h"

void detect_click_end_2(sfRenderWindow *window_end, sfSprite *restart)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window_end).x >
            sfSprite_getPosition(restart).x
            && sfMouse_getPositionRenderWindow(window_end).x <
            sfSprite_getPosition(restart).x
            + 364 && sfMouse_getPositionRenderWindow(window_end).y >
            sfSprite_getPosition(restart).y &&
            sfMouse_getPositionRenderWindow(window_end).y <
            sfSprite_getPosition(restart).y + 138) {
                sfRenderWindow_close(window_end);
                choose_runner();
            }
    }
}

void detect_click_end(sfRenderWindow *window_end, sfSprite *end,
    sfSprite *restart)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window_end).x >
            sfSprite_getPosition(end).x
            && sfMouse_getPositionRenderWindow(window_end).x <
            sfSprite_getPosition(end).x
            + 330 && sfMouse_getPositionRenderWindow(window_end).y >
            sfSprite_getPosition(end).y &&
            sfMouse_getPositionRenderWindow(window_end).y <
            sfSprite_getPosition(end).y + 130) {
                sfRenderWindow_close(window_end);
            }
    }
    detect_click_end_2(window_end, restart);
}

void main_end(void)
{
    sfRenderWindow *window_end;
    sfVideoMode video_end = {1920, 1080, 32};

    window_end = sfRenderWindow_create(video_end, "My_Runner",
        sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window_end, 60);
    display_menu_end(window_end);
}
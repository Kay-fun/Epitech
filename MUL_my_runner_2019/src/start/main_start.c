/*
** EPITECH PROJECT, 2020
** main_start.c
** File description:
** main_start.c
*/

#include "../../include/my_runner.h"

void main_start(void)
{
    sfRenderWindow *window_start;
    sfVideoMode video_start = {1920, 1080, 32};

    window_start = sfRenderWindow_create(video_start, "My_Runner",
        sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window_start, 60);
    display_menu(window_start);
}
/*
** EPITECH PROJECT, 2020
** choose_runner_main.c
** File description:
** choose_runner_main.c
*/

#include "../include/my_runner.h"

void choose_runner(void)
{
    sfRenderWindow *window;
    sfVideoMode video = {1920, 1080, 32};

    window = sfRenderWindow_create(video, "My_Runner", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    pre_main(window);
}
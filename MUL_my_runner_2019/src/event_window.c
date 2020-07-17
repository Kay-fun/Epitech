/*
** EPITECH PROJECT, 2020
** event_window.c
** File description:
** event_window.c
*/

#include "../include/my_runner.h"

void event_window(sfRenderWindow *window, sfEvent event)
{
    if (sfRenderWindow_isOpen(window)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
    }
}
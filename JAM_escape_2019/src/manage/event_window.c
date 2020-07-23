/*
** EPITECH PROJECT, 2020
** event_window.c
** File description:
** event_window.c
*/

#include "my.h"

void event_window(sfRenderWindow *window, sfEvent event)
{
    if (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
    }
}
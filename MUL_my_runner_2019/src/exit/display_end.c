/*
** EPITECH PROJECT, 2020
** display_end.c
** File description:
** display_end.c
*/

#include "../../include/my_runner.h"

void display_end(sfRenderWindow *window_end, sfSprite *end,
    sfSprite *restart, sfSprite *game_over)
{
    sfRenderWindow_drawSprite(window_end, end, NULL);
    sfRenderWindow_drawSprite(window_end, restart, NULL);
    sfRenderWindow_drawSprite(window_end, game_over, NULL);
    detect_click_end(window_end, end, restart);
}

int display_menu_end(sfRenderWindow *window_end)
{
    sfSprite *end = end_create(window_end);
    sfSprite *restart = restart_create(window_end);
    sfSprite *game_over = game_over_create(window_end);
    sfEvent event;

    while (sfRenderWindow_isOpen(window_end)) {
        while (sfRenderWindow_pollEvent(window_end, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window_end);
        }
        sfRenderWindow_clear(window_end, sfBlack);
        display_end(window_end, end, restart, game_over);
        sfRenderWindow_display(window_end);
    }
    sfSprite_destroy(end);
    sfSprite_destroy(restart);
    return (0);
}
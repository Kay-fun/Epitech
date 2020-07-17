/*
** EPITECH PROJECT, 2020
** display_menu.c
** File description:
** display_menu.c
*/

#include "../../include/my_runner.h"

sfSprite *start_create(sfRenderWindow *window_start)
{
    sfSprite *start;
    sfTexture *txt_start;

    start = sfSprite_create();
    txt_start = sfTexture_createFromFile("image/start.png", NULL);
    sfSprite_setTexture(start, txt_start, sfTrue);
    sfSprite_setPosition(start, (sfVector2f){760, 540});
    return (start);
}

void dislpay_start(sfRenderWindow *window_start, sfSprite *start)
{
    sfRenderWindow_drawSprite(window_start, start, NULL);
    detect_click_start(window_start, start);
}

int display_menu(sfRenderWindow *window_start)
{
    sfSprite *start = start_create(window_start);
    sfEvent event;

    while (sfRenderWindow_isOpen(window_start)) {
        while (sfRenderWindow_pollEvent(window_start, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window_start);
        }
        sfRenderWindow_clear(window_start, sfBlack);
        dislpay_start(window_start, start);
        sfRenderWindow_display(window_start);
    }
    sfSprite_destroy(start);
    return (0);
}
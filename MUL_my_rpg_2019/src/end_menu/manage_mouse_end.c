/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** pause manage mouse
*/

#include "../../include/my.h"

int gestion_exit_end(int x_mouse, int y_mouse, carte_t *carte)
{
    if (x_mouse >= sfSprite_getPosition(carte->quit_end).x &&
        x_mouse <= sfSprite_getPosition(carte->quit_end).x + 451 &&
        y_mouse >= sfSprite_getPosition(carte->quit_end).y &&
        y_mouse <= sfSprite_getPosition(carte->quit_end).y + 125)
        return (1);
    return (0);
}

void manage_click_quit_end(sfRenderWindow *window, carte_t *carte)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window).x >
            sfSprite_getPosition(carte->quit_end).x
            && sfMouse_getPositionRenderWindow(window).x <
            sfSprite_getPosition(carte->quit_end).x
            + 451 && sfMouse_getPositionRenderWindow(window).y >
            sfSprite_getPosition(carte->quit_end).y &&
            sfMouse_getPositionRenderWindow(window).y <
            sfSprite_getPosition(carte->quit_end).y + 125) {
                sfRenderWindow_close(window);
            }
    }
}

void gestion_mouse_end(sfRenderWindow *window, carte_t *carte)
{
    int x_mouse = sfMouse_getPositionRenderWindow(window).x;
    int y_mouse = sfMouse_getPositionRenderWindow(window).y;
    static int x;
    int exit_value = 0;

    exit_value = gestion_exit_end(x_mouse, y_mouse, carte);
    x = (exit_value == 1) ? 451 : 0;
    sfSprite_setTextureRect(carte->quit_end, (sfIntRect){x, 0, 451, 125});
}

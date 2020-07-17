/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** pause manage mouse
*/

#include "../../include/my.h"

int gestion_resume_pause(int x_mouse, int y_mouse, carte_t *carte)
{
    if (x_mouse >= sfSprite_getPosition(carte->resume_pause).x &&
        x_mouse <= sfSprite_getPosition(carte->resume_pause).x + 505 &&
        y_mouse >= sfSprite_getPosition(carte->resume_pause).y &&
        y_mouse <= sfSprite_getPosition(carte->resume_pause).y + 94)
        return (1);
    return (0);
}

int gestion_restart_pause(int x_mouse, int y_mouse, carte_t *carte)
{
    if (x_mouse >= sfSprite_getPosition(carte->restart_pause).x &&
        x_mouse <= sfSprite_getPosition(carte->restart_pause).x + 505 &&
        y_mouse >= sfSprite_getPosition(carte->restart_pause).y &&
        y_mouse <= sfSprite_getPosition(carte->restart_pause).y + 96)
        return (1);
    return (0);
}

int gestion_exit_pause(int x_mouse, int y_mouse, carte_t *carte)
{
    if (x_mouse >= sfSprite_getPosition(carte->exit_pause).x &&
        x_mouse <= sfSprite_getPosition(carte->exit_pause).x + 505 &&
        y_mouse >= sfSprite_getPosition(carte->exit_pause).y &&
        y_mouse <= sfSprite_getPosition(carte->exit_pause).y + 95)
        return (1);
    return (0);
}

void gestion_mouse_pause(sfRenderWindow *window, carte_t *carte)
{
    static int x_mouse;
    static int y_mouse;
    static int x;
    int resume_value = 0;
    int restart_value = 0;
    int exit_value = 0;

    x_mouse = sfMouse_getPositionRenderWindow(window).x;
    y_mouse = sfMouse_getPositionRenderWindow(window).y;
    resume_value = gestion_resume_pause(x_mouse, y_mouse, carte);
    restart_value = gestion_restart_pause(x_mouse, y_mouse, carte);
    exit_value = gestion_exit_pause(x_mouse, y_mouse, carte);
    x = (resume_value == 1) ? 505 : 0;
    sfSprite_setTextureRect(carte->resume_pause, (sfIntRect){x, 0, 505, 96});
    x = (restart_value == 1) ? 505 : 0;
    sfSprite_setTextureRect(carte->restart_pause, (sfIntRect){x, 0, 505, 94});
    x = (exit_value == 1) ? 505 : 0;
    sfSprite_setTextureRect(carte->exit_pause, (sfIntRect){x, 0, 505, 95});
}
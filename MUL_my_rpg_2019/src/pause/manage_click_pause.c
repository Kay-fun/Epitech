/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** manage click pause menu
*/

#include "../../include/my.h"

void click_resume_pause(sfRenderWindow *window, carte_t *carte,
    t_player *player)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window).x >
            sfSprite_getPosition(carte->resume_pause).x
            && sfMouse_getPositionRenderWindow(window).x <
            sfSprite_getPosition(carte->resume_pause).x
            + 505 && sfMouse_getPositionRenderWindow(window).y >
            sfSprite_getPosition(carte->resume_pause).y &&
            sfMouse_getPositionRenderWindow(window).y <
            sfSprite_getPosition(carte->resume_pause).y + 96) {
                player->scene = 84;
        }
    }
}

void click_restart_pause(sfRenderWindow *window, carte_t *carte,
    t_player *player)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window).x >
            sfSprite_getPosition(carte->restart_pause).x
            && sfMouse_getPositionRenderWindow(window).x <
            sfSprite_getPosition(carte->restart_pause).x
            + 505 && sfMouse_getPositionRenderWindow(window).y >
            sfSprite_getPosition(carte->restart_pause).y &&
            sfMouse_getPositionRenderWindow(window).y <
            sfSprite_getPosition(carte->restart_pause).y + 96) {
                destroy_game(player, carte);
                player->scene = 0;
        }
    }
}

void click_exit_pause(sfRenderWindow *window, carte_t *carte)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window).x >
            sfSprite_getPosition(carte->exit_pause).x
            && sfMouse_getPositionRenderWindow(window).x <
            sfSprite_getPosition(carte->exit_pause).x
            + 505 && sfMouse_getPositionRenderWindow(window).y >
            sfSprite_getPosition(carte->exit_pause).y &&
            sfMouse_getPositionRenderWindow(window).y <
            sfSprite_getPosition(carte->exit_pause).y + 96) {
                sfRenderWindow_close(window);
        }
    }
}

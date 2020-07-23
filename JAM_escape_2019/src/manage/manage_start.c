/*
** EPITECH PROJECT, 2020
** manage start
** File description:
** fonction for manage the start menu
*/

#include "my.h"

void change_button(sfRenderWindow *window, game_t *ga)
{
    if (mouseonsprite(window, ga->sm.start, 422, 138) == 0) {
        sfSprite_setTextureRect(ga->sm.start, (sfIntRect){0, 138, 422, 138});
        if (sfMouse_isButtonPressed(sfMouseLeft))
            ga->sm.menu = 1;
    } else
        sfSprite_setTextureRect(ga->sm.start, (sfIntRect){0, 0, 422, 138});
    if (mouseonsprite(window, ga->sm.quit, 75, 74) == 0) {
        sfSprite_setTextureRect(ga->sm.quit, (sfIntRect){480, 0, 445, 394});
        if (sfMouse_isButtonPressed(sfMouseLeft))
            sfRenderWindow_close(window);
    } else
        sfSprite_setTextureRect(ga->sm.quit, (sfIntRect){0, 0, 445, 394});
}

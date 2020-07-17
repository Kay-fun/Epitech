/*
** EPITECH PROJECT, 2019
** load_image.c
** File description:
** load an image
*/

#include "../../include/my.h"

void click_condition(sfRenderWindow *window,
    sfSprite *sprite_duck, int pos_y, int speed_x)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfMouse_getPositionRenderWindow(window).x >
            sfSprite_getPosition(sprite_duck).x
            && sfMouse_getPositionRenderWindow(window).x <
            sfSprite_getPosition(sprite_duck).x
            + 110 && sfMouse_getPositionRenderWindow(window).y >
            sfSprite_getPosition(sprite_duck).y &&
            sfMouse_getPositionRenderWindow(window).y <
            sfSprite_getPosition(sprite_duck).y + 110) {
                pos_y = (rand() % 700);
                speed_x = (rand() % 35);
                sfSprite_setPosition
                    ((sprite_duck), (sfVector2f){-110, pos_y});
        }
    }
}

void load_sprite_duck(sfSprite *sprite_duck, sfRenderWindow *window,
    sfClock *clock)
{
    static int pos_x = 0;
    static int pos_y = 100;
    static int speed_x = 2;

    if (sfRenderWindow_isOpen(window)) {
        sfSprite_setTextureRect(sprite_duck, (sfIntRect){pos_x, 0, 110, 110});
        sfSprite_move(sprite_duck, (sfVector2f){speed_x, 0});
    }
    if (sfSprite_getPosition(sprite_duck).x > 1280) {
        pos_y = (rand() % 600);
        speed_x = (rand() % 30);
        sfSprite_setPosition(sprite_duck, (sfVector2f){-110, pos_y});
    } else {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 100) {
            sfClock_restart(clock);
            pos_x = pos_x + 110;
            if (pos_x == 330)
            pos_x = 0;
        }
    }
    click_condition(window, sprite_duck, pos_y, speed_x);
}

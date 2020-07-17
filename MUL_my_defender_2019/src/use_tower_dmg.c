/*
** EPITECH PROJECT, 2020
** use_tower_dmg.c
** File description:
** use_tower_dmg
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

void display_cursor(game assets, sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, assets.background_game, NULL);
    sfRenderWindow_drawSprite(window, assets.background_game_circle, NULL);
    sfRenderWindow_drawSprite(window, assets.mushroom, NULL);
    sfRenderWindow_drawSprite(window, assets.door_mushroom, NULL);
    sfRenderWindow_drawSprite(window, assets.door_castle, NULL);
    sfRenderWindow_drawText(window, assets.money, NULL);
    sfRenderWindow_drawText(window, assets.life_castle, NULL);
    sfRenderWindow_drawText(window, assets.life_mushroom, NULL);
    sfText_setPosition(assets.life_mushroom, (sfVector2f)
                        {sfSprite_getPosition(assets.mushroom).x + 70,
                                sfSprite_getPosition(assets.mushroom).y - 25});
    sfRenderWindow_drawSprite(window, assets.damage_tower, NULL);
    sfRenderWindow_display(window);
}

void tower_dmg_rect(game assets)
{
    if ((sfSprite_getPosition(assets.damage_tower).x + 312 > 1
            && sfSprite_getPosition(assets.damage_tower).x + 312 < 513
            && sfSprite_getPosition(assets.damage_tower).y + 312 > 593
            && sfSprite_getPosition(assets.damage_tower).y + 312 < 957)
        || (sfSprite_getPosition(assets.damage_tower).x + 312 > 718
            && sfSprite_getPosition(assets.damage_tower).x + 312 < 1099
            && sfSprite_getPosition(assets.damage_tower).y + 312 > 347
            && sfSprite_getPosition(assets.damage_tower).y + 312 < 832)
        || (sfSprite_getPosition(assets.damage_tower).x + 312 > 1098
            && sfSprite_getPosition(assets.damage_tower).x + 312 < 1361
            && sfSprite_getPosition(assets.damage_tower).y + 312 > 469
            && sfSprite_getPosition(assets.damage_tower).y + 312 < 832))
        sfSprite_setTextureRect(assets.damage_tower, (sfIntRect)
                                {625, 0, 625, 625});
    else
        sfSprite_setTextureRect(assets.damage_tower, (sfIntRect)
                                {625, 625, 625, 625});
}

void verif_pos_tower_dmg(game assets)
{
    if (!((sfSprite_getPosition(assets.damage_tower).x + 312 > 1
            && sfSprite_getPosition(assets.damage_tower).x + 312 < 513
            && sfSprite_getPosition(assets.damage_tower).y + 312 > 593
            && sfSprite_getPosition(assets.damage_tower).y + 312 < 957)
            || (sfSprite_getPosition(assets.damage_tower).x + 312 > 718
                && sfSprite_getPosition(assets.damage_tower).x + 312 < 1099
                && sfSprite_getPosition(assets.damage_tower).y + 312 > 347
                && sfSprite_getPosition(assets.damage_tower).y + 312 < 832)
            || (sfSprite_getPosition(assets.damage_tower).x + 312 > 1111
                && sfSprite_getPosition(assets.damage_tower).x + 312 < 1361
                && sfSprite_getPosition(assets.damage_tower).y + 312 > 469
                && sfSprite_getPosition(assets.damage_tower).y + 312 < 832)))
        sfSprite_setPosition(assets.damage_tower, (sfVector2f)
                                {-1000, 0});
    else
        sfSprite_setTextureRect(assets.damage_tower, (sfIntRect)
                                {0, 0, 625, 625});
}

void use_tower_dmg(game assets, clock clock_game, sfRenderWindow *window,
                    nb life)
{
    static int xmouse = 0;
    static int ymouse = 0;

    xmouse = sfMouse_getPositionRenderWindow(window).x;
    ymouse = sfMouse_getPositionRenderWindow(window).y;
    if (xmouse >= 518 && xmouse <= 668 && ymouse >= 56 &&
        ymouse <= 265) {
        if (sfMouse_isButtonPressed (sfMouseLeft)) {
            while (sfMouse_isButtonPressed (sfMouseLeft)) {
                display_cursor(assets, window);
                maj_money(assets, clock_game.c_money);
                maj_life_castle(assets, life);
                moove_mushroom(assets, clock_game.c_moove, life);
                sfRenderWindow_setMouseCursorVisible(window, sfFalse);
                sfSprite_setPosition(assets.damage_tower, (sfVector2f)
                                        {xmouse - 312, ymouse - 312});
                xmouse = sfMouse_getPositionRenderWindow(window).x;
                ymouse = sfMouse_getPositionRenderWindow(window).y;
                tower_dmg_rect(assets);
            }
            verif_pos_tower_dmg(assets);
        }
    }
    sfRenderWindow_setMouseCursorVisible(window, sfTrue);
}

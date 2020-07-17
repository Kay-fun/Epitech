/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

void window_close(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event))
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
}

int load_menu(sfRenderWindow *window, sfEvent event, menu images)
{
    static int running_menu = 1;

    while (running_menu == 1) {
        window_close(window, event);
        display_loop_menu(window, images);
        gestion_button_menu(images, window);
        if (gestion_exit(images, window) == 1) {
            running_menu = 0;
            return (-1);
        }
        if (gestion_start(images, window) == 1)
            running_menu = 0;
    }
    return (0);
}

void load_game(sfRenderWindow *window, sfEvent event, game assets)
{
    static int running_game = 1;
    clock clock_game;
    sfMusic *mushroom_revolt = NULL;
    nb life;

    life.l_castle = 100;
    life.l_mushroom = 25;
    mushroom_revolt = set_music(mushroom_revolt);
    clock_game = st_clock(clock_game);
    while (running_game == 1) {
        window_close(window, event);
        display_loop_game(window, assets);
        maj_money(assets, clock_game.c_money);
        maj_life_castle(assets, life);
        gestion_escape(assets, mushroom_revolt, window);
        moove_mushroom(assets, clock_game.c_moove, life);
        use_tower_dmg(assets, clock_game, window, life);
    }
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = NULL;
    sfEvent event;
    menu images;
    game assets;
    int end = 0;

    window = sfRenderWindow_create(mode, "my_defender",
                                    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    images = st_menu(images);
    assets = st_game(assets);
    end = load_menu(window, event, images);
    if (end == 0)
        load_game(window, event, assets);
    return (0);
}

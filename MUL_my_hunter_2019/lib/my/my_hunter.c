/*
** EPITECH PROJECT, 2019
** my_hunter.c
** File description:
** remake of duck hunt game
*/

#include "../../include/my.h"

void display_all_1(sfSprite *sprite_duck, sfRenderWindow *window,
    sfClock *clock)
{
    load_sprite_duck(sprite_duck, window, clock);
    sfRenderWindow_clear(window, sfBlack);
}

void display_all_2(sfSprite *sprite_back, sfRenderWindow *window,
    sfSprite *sprite_duck)
{
    sfRenderWindow_drawSprite(window, sprite_back, NULL);
    sfRenderWindow_drawSprite(window, sprite_duck, NULL);
    sfRenderWindow_display(window);
}

void pre_main(sfRenderWindow *window)
{
    sfSprite *sprite_duck = duck_create(window);
    sfSprite *sprite_back = back_create(window);
    sfEvent event;
    sfMusic *music = create_music();
    sfClock *clock = create_clock();

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        display_all_1(sprite_duck, window, clock);
        display_all_2(sprite_back, window, sprite_duck);
    }
    ccleaner(sprite_back, sprite_duck, music);
    ccleaner_win(clock, window);
}

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1280, 720, 32};

    window = sfRenderWindow_create
        (video_mode, "My_Hunter", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    pre_main(window);
    return (0);
}

/*
** EPITECH PROJECT, 2019
** my_runner.c
** File description:
** remake of runner game
*/

#include "../include/my_runner.h"

void display_part_1(sfRenderWindow *window, sfSprite *background,
    sfSprite *forground, sfSprite *city)
{
    sfRenderWindow_clear(window, sfBlack);
    display_sprite(window, background, forground, city);
}

void display_part_2(sfRenderWindow *window, sfSprite *player,
    sfSprite *monster, sfClock *clock)
{
    display_sprite_2(window, player, monster, clock);
    sfRenderWindow_display(window);
}

void pre_main(sfRenderWindow *window)
{
    sfMusic *music = music_function();
    sfMusic *prout = prout_sound();
    sfClock *clock = clock_function();
    sfSprite *background = background_create(window);
    sfSprite *city = city_create(window);
    sfSprite *forground = forground_create(window);
    sfSprite *player = player_create(window);
    sfSprite *monster = monster_create(window);
    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
            event_window(window, event);
        display_part_1(window, background, forground, city);
        display_part_2(window, player, monster, clock);
        detect_collision(player, monster, window, prout);
    }
    cleaner(window, clock, music, monster);
    cleaner1(background, player, forground, city);
}

int main(int ac, char *av)
{
    if (av[1] == '-' && av[2] == 'h')
        help_function();
    main_start();
    return (0);
}

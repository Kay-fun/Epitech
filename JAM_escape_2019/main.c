/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include "my.h"

void load_game(sfRenderWindow *window, game_t *ga)
{
    gestion_light(ga);
    print_timer(ga);
    display_game(window, ga);
    hitbox_key(ga);
    hitbox_chest(ga);
    hitbox_door(ga);
    gestion_lose(window, ga);
}

void load_menu(char **av, sfRenderWindow *window, sfEvent event)
{
    sfMusic *layton = NULL;
    game_t *ga = malloc(sizeof(*ga));

    init_struct_maze(ga);
    init_start_menu(ga);
    init_clock(ga);
    layton = create_layton(layton);
    ga->ma.map = malloc_map(av[1]);
    while (sfRenderWindow_isOpen(window)) {
        event_window(window, event);
        gestion_htp(window, ga);
        if (ga->sm.menu == 0) {
            change_button(window, ga);
            display_menu(window, ga);
        } else if (ga->sm.menu == 1)
            load_game(window, ga);
        sfRenderWindow_display(window);
    }
    destroy_all(window, layton, ga);
}

int main(int ac, char **av, char **env)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;
    sfEvent event;

    if (ac != 2 || av[0] == NULL || verif_env(env) == -1)
        return (84);
    window = sfRenderWindow_create(mode, "SFML", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    if (!window)
        return (84);
    load_menu(av, window, event);
    return (0);
}

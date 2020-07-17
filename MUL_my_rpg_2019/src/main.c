/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** main rpg
*/

#include "../include/my.h"

void event_window(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

void display_game(sfRenderWindow *window, t_player *player,
    carte_t *carte, t_pnj *pnj)
{
    display_map(window, carte);
    load_player(window, player->clock, player, carte);
    if (load_cinematic(window, player, carte) == 0) {
        load_number(player->clock_2, pnj, player);
        load_pnj(window, pnj, player, player->clock_1);
    }
    pause_function(player);
    sfRenderWindow_display(window);
}

void scene_param(sfRenderWindow *window, t_player *player,
    start *menu, carte_t *carte)
{
    sfRenderWindow_clear(window, sfBlack);
    if (player->scene == 0) {
        load_start_menu(window, menu, player);
    } else if (player->scene == 20) {
        load_end_menu(window, carte);
    } else if (player->scene == 2) {
        sfRenderWindow_close(window);
    } else if (player->scene == 10)
        load_pause_menu(window, carte, player);
}

int init_game(int ac, char **av, carte_t *carte)
{
    if (ac != 2)
        return 84;
    if (my_strcmp(av[1], "-h") == 0 ||
        my_strcmp(av[1], "--help") == 0)
        help(av);
    carte->map = malloc_map(av[1]);
}

int main(int ac, char **av)
{
    sfRenderWindow *window = create_window();
    sfEvent event;
    start menu = init_struct_start(menu);
    t_player *player = init_struct_player(player);
    t_pnj pnj = init_struct_pnj(pnj);
    carte_t *carte = init_struct_carte();

    carte->map = malloc_map(av[1]);
    if (ac != 2 || !(carte->map) || !window)
        return 84;
    while (sfRenderWindow_isOpen(window)) {
        event_window(window, event);
        if (player->scene == 0 || player->scene == 2 || player->scene == 10 ||
            player->scene == 20)
            scene_param(window, player, &menu, carte);
        else
            display_game(window, player, carte, &pnj);
    }
    destroy_all(window, &menu, player);
    return (0);
}

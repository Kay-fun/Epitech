/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** destroy sprite or something else
*/

#include "../include/my.h"

void destroy_start_menu(start *menu)
{
    sfSprite_destroy(menu->start_bg);
    sfSprite_destroy(menu->quit_button);
    sfSprite_destroy(menu->start_button);
}

void destroy_player(t_player *player)
{
    sfSprite_destroy(player->player);
}

void destroy_all(sfRenderWindow *window, start *menu,
    t_player *player)
{
    destroy_player(player);
    sfRenderWindow_destroy(window);
}

void destroy_game(t_player *player, carte_t *carte)
{
    sfSprite_destroy(carte->arbre);
    sfSprite_destroy(carte->rocher);
    sfSprite_destroy(carte->sol);
    sfSprite_destroy(carte->bg_pause);
    sfSprite_destroy(carte->exit_pause);
    sfSprite_destroy(carte->restart_pause);
    sfSprite_destroy(carte->resume_pause);
    destroy_player(player);
}
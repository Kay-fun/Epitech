/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** pause function
*/

#include "../../include/my.h"

void display_pause(sfRenderWindow *window, carte_t *carte)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, carte->bg_pause, NULL);
    sfRenderWindow_drawSprite(window, carte->resume_pause, NULL);
    sfRenderWindow_drawSprite(window, carte->restart_pause, NULL);
    sfRenderWindow_drawSprite(window, carte->exit_pause, NULL);
    sfRenderWindow_display(window);
}

void load_pause_menu(sfRenderWindow *window, carte_t *carte, t_player *player)
{
    gestion_mouse_pause(window, carte);
    display_pause(window, carte);
    click_restart_pause(window, carte, player);
    click_resume_pause(window, carte, player);
    click_exit_pause(window, carte);
}

void pause_function(t_player *player)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        player->scene = 10;
    }
}
/*
** EPITECH PROJECT, 2020
** end_menu
** File description:
** display_end
*/

#include "../../include/my.h"

void display_end_menu(sfRenderWindow *window, carte_t *carte)
{
    sfRenderWindow_drawSprite(window, carte->game_over, NULL);
    sfRenderWindow_drawSprite(window, carte->quit_end, NULL);
    sfRenderWindow_display(window);
}

void load_end_menu(sfRenderWindow *window, carte_t *carte)
{
    display_end_menu(window, carte);
    manage_click_quit_end(window, carte);
    gestion_mouse_end(window, carte);
}

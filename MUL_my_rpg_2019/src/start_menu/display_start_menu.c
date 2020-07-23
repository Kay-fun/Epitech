/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** display start background
*/

#include "../../include/my.h"

void display_start_menu(sfRenderWindow *window, start *menu)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, menu->start_bg, NULL);
    sfRenderWindow_drawSprite(window, menu->start_button, NULL);
    sfRenderWindow_drawSprite(window, menu->quit_button, NULL);
    sfRenderWindow_drawSprite(window, menu->htp_button, NULL);
    if (menu->display_htp == 1)
        sfRenderWindow_drawSprite(window, menu->htp, NULL);
    sfRenderWindow_display(window);
}

void management(sfRenderWindow *window, start *menu)
{
    gestion_mouse_menu(window, menu);
    manage_click_htp(window, menu);
    display_start_menu(window, menu);
}

int load_start_menu(sfRenderWindow *window, start *menu, t_player *player)
{
    static int swap = 0;
    sfMusic *music = NULL;

    music = create_music(music);
    while (swap == 0) {
        management(window, menu);
        if (manage_click_start(window, menu, swap) == 1) {
            swap = 1;
            player->scene = 1;
            sfMusic_destroy(music);
        }
        if (manage_click_quit(window, menu, swap) == 1) {
            swap = 1;
            player->scene = 2;
            sfMusic_destroy(music);
            return (2);
        }
    }
    return (0);
}

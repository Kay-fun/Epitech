/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** test player
*/

#include "../../include/my.h"

void display_player(sfRenderWindow *window, t_player *player)
{
    sfSprite_setPosition(player->stat->shockwave,
        (sfVector2f){sfSprite_getPosition(player->player).x - 40,
        sfSprite_getPosition(player->player).y - 50});
    sfRenderWindow_drawSprite(window, player->player, NULL);
    sfRenderWindow_drawText(window, player->display_kill, NULL);
    sfRenderWindow_drawText(window, player->nb_kill, NULL);
    sfRenderWindow_drawText(window, player->life, NULL);
}

void load_player(sfRenderWindow *window, sfClock *clock_player,
    t_player *player, carte_t *carte)
{
    if (sfRenderWindow_isOpen(window)) {
        gestion_keys(clock_player, player, carte);
        display_player(window, player);
        display_shockwave(window, player);
    }
}

void load_number(sfClock *clock_2, t_pnj *pnj, t_player *player)
{
    update_life_player(player, pnj, clock_2);
    update_score(player);
}
/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** life pnj
*/

#include "../../include/my.h"

sfText *create_life_pnj(void)
{
    sfText *life;
    sfFont *font;
    sfColor color;

    life = sfText_create();
    font = sfFont_createFromFile("font/Final-Fantasy.ttf");
    sfText_setString(life, "10");
    sfText_setFont(life, font);
    sfText_setCharacterSize(life, 18);
    color = sfColor_fromRGB(255, 200, 10);
    sfText_setColor(life, color);
    sfText_setPosition(life, (sfVector2f){0, 0});
    return (life);
}

char *modif_life(char *life_pnj, t_pnj *pnj)
{
    life_pnj = convert_nb_csfml(pnj->hp, life_pnj);
    sfText_setString(pnj->life, life_pnj);
    free(life_pnj);
    return (life_pnj);
}

void update_life_pnj(t_pnj *pnj, t_player *player, sfClock *clock)
{
    static char *life_pnj = NULL;

    if (sfSprite_getPosition(pnj->pnj_2).x >=
        sfSprite_getPosition(player->stat->shockwave).x - 25 &&
        sfSprite_getPosition(pnj->pnj_2).x <=
        sfSprite_getPosition(player->stat->shockwave).x + 110 &&
        sfSprite_getPosition(pnj->pnj_2).y >=
        sfSprite_getPosition(player->stat->shockwave).y - 12 &&
        sfSprite_getPosition(pnj->pnj_2).y <=
        sfSprite_getPosition(player->stat->shockwave).y + 115 &&
            player->stat->display_shkwv == 1) {
            if (sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.7) {
                sfClock_restart(clock);
                pnj->hp--;
                if (pnj->hp < 0)
                    pnj->dead = 1;
            }
        life_pnj = modif_life(life_pnj, pnj);
    }
}
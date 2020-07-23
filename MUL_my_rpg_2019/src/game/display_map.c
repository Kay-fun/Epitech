/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** fonction for display the map
*/

#include "../../include/my.h"

void selection_frame(sfRenderWindow *window, carte_t *carte, int i, int j)
{
    int x = j * 64;
    int y = i * 64;

    switch (carte->map[i][j]) {
    case '0':
        sfSprite_setPosition(carte->arbre, (sfVector2f){x, y});
        sfRenderWindow_drawSprite(window, carte->arbre, NULL);
        break;
    case '1':
        sfSprite_setPosition(carte->sol, (sfVector2f){x, y});
        sfRenderWindow_drawSprite(window, carte->sol, NULL);
        break;
    case '2':
        sfSprite_setPosition(carte->rocher, (sfVector2f){x, y});
        sfRenderWindow_drawSprite(window, carte->rocher, NULL);
        break;
    }
}

void display_map(sfRenderWindow *window, carte_t *carte)
{
    for (int i = 0; i != 16; i++) {
        for (int j = 0; j != 30; j++) {
            selection_frame(window, carte, i, j);
        }
    }
}

/*
** EPITECH PROJECT, 2020
** RPG
** File description:
** initialize the struct game
*/

#include "../../include/my.h"

carte_t *init_struct_carte(void)
{
    carte_t *carte = malloc(sizeof(carte_t) * sizeof(t_pnj));

    carte->texarbre = sfTexture_createFromFile("assets/arbre.png", NULL);
    carte->arbre = sfSprite_create();
    sfSprite_setTexture(carte->arbre, carte->texarbre, sfTrue);
    carte->texrocher = sfTexture_createFromFile("assets/rocher.png", NULL);
    carte->rocher = sfSprite_create();
    sfSprite_setTexture(carte->rocher, carte->texrocher, sfTrue);
    carte->texsol = sfTexture_createFromFile("assets/sol.png", NULL);
    carte->sol = sfSprite_create();
    sfSprite_setTexture(carte->sol, carte->texsol, sfTrue);
    carte->resume_pause = create_resume_pause();
    carte->restart_pause = create_restart_pause();
    carte->exit_pause = create_exit_pause();
    carte->bg_pause = create_bg_pause();
    carte->game_over = create_game_over();
    carte->quit_end = create_quit_button_end();
    return carte;
}

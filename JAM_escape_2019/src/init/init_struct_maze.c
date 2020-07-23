/*
** EPITECH PROJECT, 2020
** RPG
** File description:
** initialize the struct game
*/

#include "my.h"

void init_struct_maze(game_t *ga)
{
    ga->ma.txt_wall = sfTexture_createFromFile("assets/wall.png", NULL);
    ga->ma.wall = sfSprite_create();
    sfSprite_setTexture(ga->ma.wall, ga->ma.txt_wall, sfTrue);
    ga->ma.txt_floor = sfTexture_createFromFile("assets/floor.png", NULL);
    ga->ma.floor = sfSprite_create();
    sfSprite_setTexture(ga->ma.floor, ga->ma.txt_floor, sfTrue);
    ga->ma.clock_game = sfClock_create();
    ga->ma.player = create_player();
    ga->ma.light = create_light();
    ga->ma.chest = create_chest();
    ga->ma.key = create_key();
    ga->ma.door = create_door();
    ga->ma.lose = create_lose();
    ga->ma.win = create_win();
    ga->ma.got_key = 0;
    ga->ma.key1 = 0;
    ga->ma.chest1 = 0;
}

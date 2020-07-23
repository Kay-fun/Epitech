/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** music in game
*/

#include "../../include/my.h"

sfMusic *create_music_game(sfMusic *music)
{
    music = sfMusic_createFromFile("music/game_music.ogg");
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** music
*/

#include "../../include/my.h"

sfMusic *create_music(sfMusic *music)
{
    music = sfMusic_createFromFile("music/music_start.ogg");
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return music;
}

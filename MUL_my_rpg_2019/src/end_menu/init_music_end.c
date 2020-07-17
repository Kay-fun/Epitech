/*
** EPITECH PROJECT, 2020
** init music
** File description:
** music of end game
*/

#include "../../include/my.h"

sfMusic *create_music_end(sfMusic *music)
{
    music = sfMusic_createFromFile("music/end_music.ogg");
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return music;
}

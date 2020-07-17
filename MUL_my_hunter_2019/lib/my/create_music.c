/*
** EPITECH PROJECT, 2020
** music_create.c
** File description:
** music_create.c
*/

#include "../../include/my.h"

sfMusic *create_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/music.ogg");
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
}

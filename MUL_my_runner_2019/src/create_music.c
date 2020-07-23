/*
** EPITECH PROJECT, 2020
** create_music.c
** File description:
** create_music.c
*/

#include "../include/my_runner.h"

sfMusic *music_function(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/music.ogg");
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
}

sfMusic *prout_sound(void)
{
    sfMusic *prout;

    prout = sfMusic_createFromFile("music/prout.ogg");
}

/*
** EPITECH PROJECT, 2020
** jam
** File description:
** music professor layton
*/

#include "my.h"

sfMusic *create_layton(sfMusic *layton)
{
    layton = sfMusic_createFromFile("assets/sound/layton.ogg");
    sfMusic_play(layton);
    sfMusic_setLoop(layton, sfTrue);
    return (layton);
}

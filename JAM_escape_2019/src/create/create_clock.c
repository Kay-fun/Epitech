/*
** EPITECH PROJECT, 2020
** create_clock.c
** File description:
** create clock
*/

#include "my.h"

sfClock *create_clock(void)
{
    sfClock *c_clock;

    c_clock = sfClock_create();
    return (c_clock);
}

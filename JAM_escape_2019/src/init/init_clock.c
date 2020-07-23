/*
** EPITECH PROJECT, 2020
** init_clock.c
** File description:
** init clock
*/

#include "my.h"

void init_clock(game_t *ga)
{
    ga->cl.nb_time = 180;
    ga->cl.c_time = create_clock();
    ga->cl.str_time = my_inttostr(ga->cl.nb_time, ga->cl.str_time);
    ga->cl.text_time = create_time();
}

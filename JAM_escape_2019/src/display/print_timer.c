/*
** EPITECH PROJECT, 2020
** print_timer.c
** File description:
** print_timer
*/

#include "my.h"

void print_timer(game_t *ga)
{
    ga->cl.str_time = my_inttostr(ga->cl.nb_time, ga->cl.str_time);
    sfText_setString(ga->cl.text_time, ga->cl.str_time);
    if (sfTime_asSeconds(sfClock_getElapsedTime(ga->cl.c_time)) > 1) {
        sfClock_restart(ga->cl.c_time);
        ga->cl.nb_time--;
    }
    if (ga->cl.nb_time < 0) {
        ga->cl.nb_time = 0;
    }
}

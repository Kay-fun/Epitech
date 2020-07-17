/*
** EPITECH PROJECT, 2020
** wait_end.c
** File description:
** wait speed = 0
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int verif_end_speed(car *info, float speed)
{
    if (charisnb(info->info_array[3][0]) == 0) {
        speed = atof(info->info_array[3]);
        if (speed == 0)
            return (0);
    }
    return (-1);
}

int wait_end(car *info)
{
    float speed = 0;

    while (info->continu == 2) {
        if (put_cmd("GET_CURRENT_SPEED\n", info) == 84)
            return (84);
        info->info_array = my_str_to_word_array
            (info->info_array, info->buf_info, ':');
        if (verif_end_speed(info, speed) == 0)
            break;
    }
    return (0);
}

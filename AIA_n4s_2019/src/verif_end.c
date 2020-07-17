/*
** EPITECH PROJECT, 2020
** verif_end.c
** File description:
** verif if track is cleared
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int verif_track_clear(car *info)
{
    if (my_strcmp(info->info_array[35], "Track Cleared") == 0) {
        if (put_cmd("CYCLE_WAIT:5\n", info) == 84 ||
            put_cmd("CAR_FORWARD:0\n", info) == 84)
            return (84);
        info->continu = 2;
    }
    return (0);
}

int verif_end(car *info)
{
    if (charisnb(info->info_array[3][0]) == 0) {
        if (verif_track_clear(info) == 84)
            return (84);
    }
    return (0);
}

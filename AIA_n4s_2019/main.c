/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    car *info = malloc(sizeof(*info));

    st_info(info);
    simulation_statut(ON, info);
    while (info->continu == 1) {
        if (put_cmd("GET_INFO_LIDAR\n", info) == 84)
            return (84);
        info->info_array = my_str_to_word_array
            (info->info_array, info->buf_info, ':');
        if (gestion_wheel(info) == 84 ||
            verif_end(info) == 84)
            return (84);
    }
    if (wait_end(info) == 84)
        return (84);
    simulation_statut(OFF, info);
    return (0);
}

/*
** EPITECH PROJECT, 2020
** maj_st_info.c
** File description:
** check if have to maj st_info and do it or not
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

void maj_wall(car *info)
{
    info->nb_b_right = atof(info->info_array[34]);
    info->nb_b_left = atof(info->info_array[3]);
    info->nbmid = atof(info->info_array[18]);
}

int verif_nb(car *info)
{
    if (charisnb(info->info_array[3][0]) == 0
        && charisnb(info->info_array[34][0]) == 0
        && charisnb(info->info_array[18][0]) == 0) {
        maj_wall(info);
        return (0);
    }
    return (-1);
}

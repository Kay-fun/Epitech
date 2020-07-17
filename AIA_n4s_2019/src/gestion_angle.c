/*
** EPITECH PROJECT, 2020
** gestion_angle.c
** File description:
** gestion of wheel angle
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int gestion_angle(car *info)
{
    if (info->nbmid <= 1500) {
        if (info->nb_b_right > info->nb_b_left)
            return (gestion_r_angle(info));
        else
            return (gestion_l_angle(info));
    } else
        if (put_cmd("WHEELS_DIR:0\n", info) == 84)
            return (84);
    return (0);
}

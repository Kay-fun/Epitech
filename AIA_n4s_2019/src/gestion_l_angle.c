/*
** EPITECH PROJECT, 2020
** gestion l angle
** File description:
** gestion l angle
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int gestion_l_angle_2(car *info)
{
    if (info->nb_b_right >= 100 && info->nb_b_right < 200)
        if (put_cmd("WHEELS_DIR:0.4\n", info) == 84)
            return (84);
    if (info->nb_b_right < 100)
        if (put_cmd("WHEELS_DIR:0.5\n", info) == 84)
            return (84);
    return (0);
}

int gestion_l_angle_1(car *info)
{
    if (info->nb_b_right >= 500)
        if (put_cmd("WHEELS_DIR:0.1\n", info) == 84)
            return (84);
    if (info->nb_b_right >= 300 && info->nb_b_right < 500)
        if (put_cmd("WHEELS_DIR:0.3\n", info) == 84)
            return (84);
    return (0);
}

int gestion_l_angle(car *info)
{
    if (gestion_l_angle_1(info) == 84)
        return (84);
    if (gestion_l_angle_2(info) == 84)
        return (84);
    return (0);
}
/*
** EPITECH PROJECT, 2020
** gestion_speed.c
** File description:
** gestion speed of car
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int gestion_speed_1(car *info)
{
    if (info->nbmid >= 1500)
        if (put_cmd("CAR_FORWARD:0.6\n", info) == 84)
            return (84);
    if (info->nbmid >= 1000 && info->nbmid < 1500)
        if (put_cmd("CAR_FORWARD:0.5\n", info) == 84)
            return (84);
    return (0);
}

int gestion_speed_3(car *info)
{
    if (info->nbmid >= 500 && info->nbmid < 750)
        if (put_cmd("CAR_FORWARD:0.2\n", info) == 84)
            return (84);
    if (info->nbmid < 500 && info->nbmid < 500)
        if (put_cmd("CAR_FORWARD:0.1\n", info) == 84)
            return (84);
    return (0);
}

int gestion_speed_2(car *info)
{
    if (info->nbmid >= 750 && info->nbmid < 1000)
        if (put_cmd("CAR_FORWARD:0.4\n", info) == 84)
            return (84);
    if (gestion_speed_3(info) == 84)
        return (84);
    return (0);
}

int gestion_speed(car *info)
{
    if (gestion_speed_1(info) == 84)
        return (84);
    if (gestion_speed_2(info) == 84)
        return (84);
    return (0);
}

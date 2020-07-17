/*
** EPITECH PROJECT, 2020
** gestion_wheel.c
** File description:
** gestion of wheel
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int gestion_wheel(car *info)
{
    if (verif_nb(info) == 0) {
        if (gestion_speed(info) == 84 ||
            gestion_angle(info) == 84)
            return (84);
    }
    return (0);
}

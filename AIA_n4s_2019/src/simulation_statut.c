/*
** EPITECH PROJECT, 2020
** simulation_statut.c
** File description:
** start or end simulation
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int simulation_statut(int nb, car *info)
{
    if (nb == ON) {
        if (put_cmd("START_SIMULATION\n", info) == 84 ||
            put_cmd("CAR_FORWARD:0.1\n", info) == 84)
            return (84);
    } else
        if (put_cmd("STOP_SIMULATION\n", info) == 84)
            return (84);
    return (0);
}

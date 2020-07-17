/*
** EPITECH PROJECT, 2020
** n4s.h
** File description:
** n4s.h
*/

#ifndef N4S_H_
#define N4S_H_

#include "stdlib.h"

typedef struct car
{
    float nb_b_right;
    float nb_b_left;
    float nbmid;
    char **info_array;
    char *buf_info;
    size_t len;
    int continu;
}car;

#endif

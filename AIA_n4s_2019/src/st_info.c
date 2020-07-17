/*
** EPITECH PROJECT, 2020
** st_info.c
** File description:
** st_info
*/

#include "my.h"

void st_info(car *info)
{
    info->nb_b_right = 0;
    info->nb_b_left = 0;
    info->nbmid = 0;
    info->info_array = NULL;
    info->buf_info = NULL;
    info->len = 0;
    info->continu = 1;
}

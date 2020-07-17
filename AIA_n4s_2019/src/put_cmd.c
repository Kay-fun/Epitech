/*
** EPITECH PROJECT, 2020
** put_cmd.c
** File description:
** put_cmd
*/

#include "my.h"
#include "stdio.h"

int put_cmd(char *str, car *info)
{
    my_putstr(str);
    if (getline(&info->buf_info, &info->len, stdin) == -1)
        return (84);
    return (0);
}

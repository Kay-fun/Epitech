/*
** EPITECH PROJECT, 2020
** my_rand
** File description:
** my_rand
*/

#include "../include/my.h"

int my_rand(int nb1, int nb2)
{
    int result = 0;

    result = rand() % (nb2 - nb1) + nb1;
    return (result);
}

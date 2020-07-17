/*
** EPITECH PROJECT, 2020
** requirement.c
** File description:
** requirement.c
*/

#include <unistd.h>
#include <stdio.h>

int process_recursive(int nb)
{
    int fact = 1;

    while (nb > 0) {
        fact = fact * nb;
        nb--;
        process_recursive(nb);
    }
    return (fact);
}

int my_factrec_synthesis(int nb)
{
    int tmp = 0;
    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    return (process_recursive(nb));
}

int my_squareroot_synthesis(int nb)
{
    int a = 0;
    int squareroot = 0;

    if (nb < 0)
        return (-1);
    if (nb == 0)
        return (0);
    while (a <= 46340 && a <= nb) {
        squareroot = a * a;
        if (squareroot == nb) {
            return (a);
        }
        a++;
    }
    return (-1);
}
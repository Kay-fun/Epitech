/*
** EPITECH PROJECT, 2020
** help
** File description:
** palindrome
*/

#include "palindrome.h"

void display_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("      ./palindrome -n number -p palindrome ");
    my_putstr("[-b base] [-imin i] [imax i]\n");
    my_putstr("\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("      -n n      integer to be tranformed (>=0)\n");
    my_putstr("      -p pal    palindromic number to be obtained ");
    my_putstr("(incompatible with the -n\n\t\toption) (>=0)\n");
    my_putstr("                if defined, all fitting values of ");
    my_putstr("n will be output\n");
    my_putstr("      -b base   base in which the procedure will be ");
    my_putstr("executed (1<b1=10) [def: 10]\n");
    my_putstr("      -imin i   minimum number of iterations, ");
    my_putstr("included (>=0) [def: 0]\n");
    my_putstr("      -imax i   maximum number of iterations, ");
    my_putstr("included (>=0) [def: 100]\n");
}

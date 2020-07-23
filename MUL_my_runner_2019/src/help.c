/*
** EPITECH PROJECT, 2020
** help.c
** File description:
** help.c
*/

#include "../include/my_runner.h"

void help_function(void)
{
    write(1, "Finite runner created with CSFML.\n\n", 36);
    write(1, "USAGE\n", 7);
    write(1, " ./my_runner map.txt\n\n\n\n", 22);
    write(1, "OPTIONS\n", 9);
    write(1, " -i\t\t\t launch the game in infinity mode.\n", 42);
    write(1, " -h\t\t\t print the usage and quit.\n\n", 34);
    write(1, "USER INTERACTIONS\n", 19);
    write(1, " SPACE_KEY\t\t jump.\n", 20);
}
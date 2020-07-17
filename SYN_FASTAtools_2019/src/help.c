/*
** EPITECH PROJECT, 2020
** help
** File description:
** help
*/

#include "fat.h"

void display_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./FASTAtools option\n");
    my_putstr("\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\toption 1: read FASTA from standard input, ");
    my_putstr("write the DNA sequences to the\n\t\tstandard output\n");
    my_putstr("\toption 2: read FASTA from standard input, ");
    my_putstr("write the RNA sequences to the\n\t\tstandard output\n");
    my_putstr("\toption 3: read FASTA from standard input, ");
    my_putstr("write the reverse complement\n\t\tto the standard output\n");
    my_putstr("\toption 4: read FASTA from the standard input, ");
    my_putstr("write the k-mer list to the\n\t\tstandard output\n");
    my_putstr("\toption 5: read FASTA from the standard input, ");
    my_putstr("write the coding sequences\n\t\tlist to the standard output\n");
    my_putstr("\toption 6: read FASTA from standard input, ");
    my_putstr("write the amino acids list to\n\t\tthe standard output\n");
    my_putstr("\toption 7: read FASTA from standard input containing exactly ");
    my_putstr("2 sequences,\n\t\talign them and write the ");
    my_putstr("result to the standard output\n");
    my_putstr("\tk: size of k-mers for option 4\n");
}
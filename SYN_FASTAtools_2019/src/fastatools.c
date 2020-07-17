/*
** EPITECH PROJECT, 2020
** fastatools
** File description:
** fastatools
*/

#include "fat.h"

void fastatools_2(int input)
{
    switch (input) {
    case 5:
        sequence_option();
        break;
    case 6:
        list_amino_option();
        break;
    case 7:
        alignement_option();
        break;
    default:
        exit(84);
    }
}

void fastatools(int input, t_fat *fat)
{
    switch (input) {
    case 1:
        dna_option();
        break;
    case 2:
        rna_option();
        break;
    case 3:
        reverse_complement();
        break;
    case 4:
    k_mer_option(fat->k_mers);
        break;
    default:
        fastatools_2(input);
    }
}
/*
** EPITECH PROJECT, 2020
** fat.h
** File description:
** fat.h
*/

#include "my.h"
#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#ifndef FAT_H_
#define FAT_H_

void display_help(void);
void fastatools(int input, t_fat *fat);
void fat_content(char **fasta);
void reverse_changed_str(char *str);
void dna_option(void);
void rna_option(void);
void reverse_complement(void);
void k_mer_option(int input_k);
void sequence_option(void);
void list_amino_option(void);
void alignement_option(void);

int display_codon(int a, char c);

char *manage_str_input(char *str);

char **parser_fasta(void);

#endif
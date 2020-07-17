/*
** EPITECH PROJECT, 2020
** palindrome.h
** File description:
** palindrome.h
*/

#include "my.h"
#include "struct.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

#ifndef PALINDROME_H_
#define PALINDROME_H_

t_pal *init_pal(void);

void palindrome(t_pal *pal);
void display_invalid(void);
void display_iteration(int a, int b, t_pal *pal);
void display_last_process(char *before, char *after, int a, t_pal *pal);
void display_help(void);
void convert_base(char *str, int nb, int base);
void free_char(char *before, char *after);
void option_flags(int ac, char **av, t_pal *pal);
void palindrome(t_pal *pal);
void flags_parsing(int opt, t_pal *pal);
void process_palindrome(t_pal *pal);
void process_p_palindrome(t_pal *pal);

int convert_base_to_decimal(char *nb, int base);
int p_palindrome_function(t_pal *pal, int a);
int check_palindrome(t_pal *pal);
int recursive_base(int nb, int base);
int pre_main(int ac, char **av);

#endif

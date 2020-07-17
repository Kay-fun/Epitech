/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
void my_putstr(char const *str);
void my_putstr_error(char const *str);

int my_put_nbr(int nb);
int my_isnum(char *str);
int my_rand(int nb1, int nb2);
int my_strcmp(char const *str1, char const *str2);
int my_nb_digits(int nb);
int my_getchar(void);
int my_strncmp(char const *str1, char const *str2, int stop);
int my_strlen(char const *str);
int my_getnbr(char *str);

char *my_strdup(char const *src);
char *my_revstr(char *str);
char *my_strcat(char *dest, char *src);
char *my_strcpy(char *dest, char *src);
char *my_int_to_char(int nbr);
char *my_strncpy(char *dest, char *src, int start, int stop);
char **my_str_to_word_array(char const *str, char lim);

#endif

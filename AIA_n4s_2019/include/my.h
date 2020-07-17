/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include "n4s.h"

#define ON 1
#define OFF 0

// LIB

int my_getnbr(char const *str);
int my_strcmp(char *str1, char *str2);
void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nb);
char *my_inttostr(int nb, char *s_nb);
int my_compute_power_it(int nb, int p);
int calc_size(char const *filepath);
int calc_size_str(char *str);
void my_put_error(char const *str);
int my_strlen(char const *str);
char *add_char(char *str, char char_add);
char *add_link(char *str, char *str_add);
int charisnb(char letter);
int calc_i(int nb);
int my_intlenforbin(int nb);
int my_intlen(int nb);
char **my_str_to_word_array(char **info_array,
                            char const *str, char separator);

// INIT STRUCT

void st_info(car *info);
int verif_end(car *info);
int wait_end(car *info);
int simulation_statut(int nb, car *info);
void maj_wall(car *info);
int verif_nb(car *info);
int gestion_speed(car *info);
int gestion_angle(car *info);
int gestion_l_angle(car *info);
int gestion_r_angle(car *info);
int gestion_wheel(car *info);
int put_cmd(char *str, car *info);

#endif

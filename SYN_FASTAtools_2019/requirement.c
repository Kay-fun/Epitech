/*
** EPITECH PROJECT, 2020
** requirement
** File description:
** requirement
*/

#include <stdio.h>
#include <stdlib.h>

int my_check_letter_number(char c)
{
    if (c >= 'a' && c <= 'z')
        return (0);
    if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return (1);
    return (-1);
}

char *check_word(int a, char *str)
{
    while (str[a] != '\0') {
        if (my_check_letter_number(str[a]) == 0) {
            str[a] -= 32;
            break;
        }
        if (my_check_letter_number(str[a]) == 1)
            break;
        a++;
    }
    return (str);
}

char *my_strcapitalize_synthesis(char *str)
{
    int a = 0;

    if (my_check_letter_number(str[0]) == 0)
        str[0] -= 32;
    while (str[a] != '\0') {
        if (my_check_letter_number(str[a]) == -1) {
            a++;
            str = check_word(a, str);
        }
        a++;
    }
    return (str);
}
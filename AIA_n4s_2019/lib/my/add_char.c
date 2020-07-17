/*
** EPITECH PROJECT, 2020
** add_char.c
** File description:
** add_char
*/

#include <stddef.h>
#include <stdlib.h>

char *add_char(char *str, char letter)
{
    int size_str = 0;
    char *newstr = NULL;
    int count = 0;

    if (str == NULL) {
        newstr = malloc(sizeof(char) * 2);
        newstr[0] = letter;
        newstr[1] = '\0';
    }
    newstr = malloc(sizeof(char) * (size_str + 2));
    for (; count != size_str; count++) {
        newstr[count] = str[count];
    }
    newstr[count] = letter;
    newstr[count + 1] = '\0';
    return (newstr);
}

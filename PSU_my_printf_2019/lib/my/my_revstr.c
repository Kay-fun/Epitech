/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** reverse string
*/

char *my_revstr(char *str)
{
    int a = 0;
    int b = 0;
    int c = 0;

    while (str[b] != '\0') {
        b++;
    }
    b--;
    while (a < b) {
        c = str[a];
        str[a] = str[b];
        str[b] = c;
        a++;
        b--;
    }
    return (str);
}

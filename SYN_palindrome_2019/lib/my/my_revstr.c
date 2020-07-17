/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    int a = 0;
    int b = 0;
    char c = 0;

    while (str[b] != '\0')
        b++;
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

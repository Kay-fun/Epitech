/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** my_strcat.c
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char *src)
{
    int a = 0;
    int cat = my_strlen(dest);

    while (src[a] != '\0') {
        dest[cat + a] = src[a];
        a++;
    }
    dest[cat + a] = '\0';
    return (dest);
}
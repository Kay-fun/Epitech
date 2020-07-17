/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *dest, char *src)
{
    int a = 0;

    while (src[a] != '\0') {
        dest[a] = src[a];
        a++;
    }
    dest[a] = '\0';
    return (dest);
}

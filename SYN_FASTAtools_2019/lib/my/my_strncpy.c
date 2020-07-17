/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** my_strncpy.c
*/

char *my_strncpy(char *dest, const char *src, int start, int stop)
{
    int a = 0;

    while (stop > 0 && src[start] != '\0') {
        dest[a] = src[start];
        a++;
        start++;
        stop--;
    }
    if (stop > 0)
        dest[a++] = '\0';
    return (dest);
}

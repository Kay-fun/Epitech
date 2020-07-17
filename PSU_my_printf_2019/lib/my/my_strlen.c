/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** length of the string
*/

int my_strlen(char const *str)
{
    int a = 0;

    for (int n = 0; str[n] != '\0'; n++) {
        a++;
    }
    return (a);
}

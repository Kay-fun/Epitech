/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <stddef.h>

int my_strlen(char const *str);

char *my_strdup(char const *src);

void change_str(char const *str, char lim, char **result, char *data)
{
    int word = 0;
    int len = 0;

    for (int i = 0; i < my_strlen(str) + 1; i++) {
        if (str[i] != lim) {
            data[word] = str[i];
            word++;
            data[word] = '\0';
        } else if (my_strlen(data) > 0) {
            word = 0;
            result[len] = my_strdup(data);
            len++;
        }
    }
    if (my_strlen(data) > 0) {
        data[word] = '\0';
        result[len] = my_strdup(data);
        len++;
    }
    result[len] = '\0';
}

char **my_str_to_word_array(char const *str, char lim)
{
    char *data = NULL;
    char **result = NULL;

    data = malloc(sizeof(char) * (my_strlen(str) + 1));
    result = malloc(sizeof(char *) * my_strlen(str));
    if (!result || !data || my_strlen(str) == 0)
        return (NULL);
    data[0] = '\0';
    change_str(str, lim, result, data);
    return (result);
}

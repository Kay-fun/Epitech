/*
** EPITECH PROJECT, 2020
** parser
** File description:
** parser
*/

#include "fat.h"

char *my_strcat_mod(char *dest, char *src)
{
    int data[4] = {0, 0, 0, 0};
    int result = 0;
    char *tmp = dest;

    data[0] = my_strlen(dest);
    data[1] = my_strlen(src);
    data[2] = 0;
    data[3] = 0;
    dest = malloc(sizeof(char) * (data[0] + data[1] + 2));
    while (data[2] < data[0]) {
        dest[data[2]] = tmp[data[2]];
        data[2]++;
    }
    while (src[data[3]] != '\0') {
        result = data[0] + data[3];
        dest[result] = src[data[3]];
        data[3]++;
    }
    dest[result] = '\0';
    return (dest);
}

void fat_content(char **fasta)
{
    int a = 0;

    while (fasta[a]) {
        if (!strchr(fasta[a], '>')) {
            while (fasta[a + 1] && !strchr(fasta[a + 1], '>')) {
                fasta[a + 1] = my_strcat_mod(fasta[a], my_strdup(fasta[a + 1]));
                fasta[a] = "\0";
                a++;
            }
            fasta[a] = manage_str_input(fasta[a]);
        }
        a++;
    }
}

char **parser_fasta(void)
{
    int a = 0;
    char *str = NULL;
    char **buff = malloc(sizeof(char *) * 100000);
    size_t len = 0;

    while (1) {
        if (getline(&str, &len, stdin) == -1) {
            buff[a] = NULL;
            break;
        }
        buff[a] = my_strdup(str);
        a++;
    }
    return (buff);
}
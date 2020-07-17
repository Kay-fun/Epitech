/*
** EPITECH PROJECT, 2020
** reverse
** File description:
** reverse
*/

#include "fat.h"

char *manage_str_input(char *str)
{
    int tmp = 0;
    char *new = malloc(sizeof(char) * (my_strlen(str) + 1));

    if (!new)
        return (NULL);
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] == 'a' || str[a] == 'c' || str[a] == 'g'
            || str[a] == 'n' || str[a] == 't') {
            new[tmp] = str[a];
            new[tmp] -= 32;
            tmp++;
        } else if (str[a] == 'A' || str[a] == 'C' || str[a] == 'G'
            || str[a] == 'N' || str[a] == 'T') {
            new[tmp] = str[a];
            tmp++;
        }
    }
    new[tmp] = '\0';
    return (new);
}

void reverse_changed_str(char *str)
{
    int len = my_strlen(str) - 1;
    char *dup = my_strdup(str);

    for (int a = 0 ; len >= 0; len--) {
        if (dup[a] == 'A')
            str[len] = 'T';
        if (dup[a] == 'C')
            str[len] = 'G';
        else if (dup[a] == 'G')
            str[len] = 'C';
        else if (dup[a] == 'T')
            str[len] = 'A';
        a++;
    }
    my_putstr(str);
    free(dup);
}

void reverse_complement(void)
{
    int a = 0;
    int tmp = 0;
    char **fasta = parser_fasta();

    if (!fasta)
        exit(84);
    fat_content(fasta);
    while (fasta[tmp]) {
        if (fasta[tmp][0] != '\0' && strchr(fasta[tmp], '>')) {
            if (a != 0)
                my_putchar('\n');
            my_putstr(fasta[tmp]);
            a++;
        } else
            reverse_changed_str(fasta[tmp]);
        tmp++;
    }
    my_putchar('\n');
    free(fasta);
}

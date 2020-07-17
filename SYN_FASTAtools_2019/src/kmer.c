/*
** EPITECH PROJECT, 2020
** k_mer
** File description:
** k_mer
*/

#include "fat.h"

int check_match_k_mer(int len_k, char **k_mer)
{
    int a = 0;

    while (a < len_k) {
        if (my_strcmp(k_mer[len_k], k_mer[a]) == 0)
            return (0);
        a++;
    }
    return (42);
}

int check_k_mer_input(int input_k, int len_k, char *str, char **k_mer)
{
    int a = 0;
    int b = 0;
    int tmp = 0;

    while (str[a] != '\0') {
        k_mer[len_k] = malloc(sizeof(char *) * (input_k + 1));
        for (b = a, tmp = 0; b < a + input_k; b++, tmp++)
            k_mer[len_k][tmp] = str[b];
        k_mer[len_k][tmp] = '\0';
        if (check_match_k_mer(len_k, k_mer) == 42 &&
            my_strlen(k_mer[len_k]) == input_k)
            len_k++;
        else
            free(k_mer[len_k]);
        a++;
    }
    return (len_k);
}

int compare_sort(void const *input_a, void const *input_b)
{
    return (my_strcmp(*(char const **)input_a, *(char const **)input_b));
}

void k_mer_option(int input_k)
{
    int a = 0;
    int len_k = 0;
    char **fasta = parser_fasta();
    char **k_mer = malloc(sizeof(char *) * 100000);

    fat_content(fasta);
    while (fasta[a]) {
        if (fasta[a][0] != '\0' && !strchr(fasta[a], '>'))
            len_k = check_k_mer_input(input_k, len_k, fasta[a], k_mer);
        a++;
    }
    qsort(k_mer, len_k, sizeof(char *), compare_sort);
    a = 0;
    while (a < len_k) {
        my_putstr(k_mer[a]);
        my_putchar('\n');
        a++;
    }
    free(k_mer);
    free(fasta);
}

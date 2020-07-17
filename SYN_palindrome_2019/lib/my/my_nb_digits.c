/*
** EPITECH PROJECT, 2020
** my_nb_digits.c
** File description:
** my_nb_digits.c
*/

int my_nb_digits(int nb)
{
    int tmp = 1;
    int posit_nb = 10;

    if (nb < 0)
        nb = nb * -1;
    while (nb >= posit_nb) {
        tmp++;
        if (posit_nb > 214748364)
            break;
        posit_nb *= 10;
    }
    return (tmp);
}

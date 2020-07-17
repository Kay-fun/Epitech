/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "fat.h"

t_fat *init_fat(void)
{
    t_fat *fat = malloc(sizeof(fat));

    if (!fat)
        return (NULL);
    fat->nb_input = 0;
    fat->k_mers = 0;
    return (fat);
}

int main_error_mng(int ac, char **av, t_fat *fat)
{
    if (ac <= 1 || ac > 3 || !fat)
        return (84);
    if (my_strcmp(av[1], "-h") == 0) {
        display_help();
        return (0);
    }
    return (0);
}

int main(int ac, char **av)
{
    t_fat *fat = init_fat();

    if (main_error_mng(ac, av, fat) == 84)
        return (84);
    fat->nb_input = my_getnbr(av[1]);
    if (fat->nb_input < 1 || fat->nb_input > 7)
        return (84);
    if (fat->nb_input == 4) {
        if (!av[2])
            return (84);
        fat->k_mers = my_getnbr(av[2]);
        if (fat->k_mers <= 0)
            return (84);
    }
    fastatools(fat->nb_input, fat);
    return (0);
}
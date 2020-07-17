/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** pnj structure
*/

#include "../../include/my.h"

t_pnj init_struct_pnj(t_pnj pnj)
{
    pnj.dead = 0;
    pnj.hp = 10;
    pnj.life = create_life_pnj();
    pnj.pnj_1 = create_pnj_1();
    pnj.pnj_2 = create_pnj_2();
    pnj.pnj_3 = create_pnj_3();
    pnj.clock_pnj_1 = create_clock_1();
    pnj.clock_pnj_2 = create_clock_2();
    pnj.clock_pnj_3 = create_clock_3();
    return (pnj);
}

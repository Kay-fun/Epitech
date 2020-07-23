/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** init_struct
*/

#include "../../include/my.h"

start init_struct_start(start menu)
{
    menu.display_htp = 0;
    menu.start_bg = bg_start();
    menu.start_button = create_start_button();
    menu.quit_button = create_quit_button();
    menu.htp = create_htp();
    menu.htp_button = create_htp_button();
    return (menu);
}

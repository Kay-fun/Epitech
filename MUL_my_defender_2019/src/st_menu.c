/*
** EPITECH PROJECT, 2020
** st_menu.c
** File description:
** create struct for menu
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

menu st_menu(menu images)
{
    images.background_menu = create_bg_menu();
    images.start_button = create_start_button();
    images.exit_button = create_exit_button();
    return (images);
}

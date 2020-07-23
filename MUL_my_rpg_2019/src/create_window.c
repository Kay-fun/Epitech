/*
** EPITECH PROJECT, 2020
** create_window
** File description:
** Create a fullscreen window for my_rpg.
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>

sfRenderWindow *create_window(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;

    window = sfRenderWindow_create(mode, "My_RPG", sfResize | sfClose, NULL);
    if (!window)
        return (NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}
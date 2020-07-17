/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** create pause
*/

#include "../../include/my.h"

sfSprite *create_resume_pause(void)
{
    sfSprite *resume;
    sfTexture *txt_resume;

    resume = sfSprite_create();
    txt_resume = sfTexture_createFromFile("assets/resume_pause_1010.png", NULL);
    sfSprite_setTexture(resume, txt_resume, sfTrue);
    sfSprite_setPosition(resume, (sfVector2f){100, 520});
    sfSprite_setTextureRect(resume, (sfIntRect){0, 0, 505, 96});
    return (resume);
}

sfSprite *create_restart_pause(void)
{
    sfSprite *restart;
    sfTexture *txt_restart;

    restart = sfSprite_create();
    txt_restart = sfTexture_createFromFile
        ("assets/restart_pause_1010.png", NULL);
    sfSprite_setTexture(restart, txt_restart, sfTrue);
    sfSprite_setPosition(restart, (sfVector2f){100, 620});
    sfSprite_setTextureRect(restart, (sfIntRect){0, 0, 505, 94});
    return (restart);
}

sfSprite *create_exit_pause(void)
{
    sfSprite *exit;
    sfTexture *txt_exit;

    exit = sfSprite_create();
    txt_exit = sfTexture_createFromFile("assets/exit_pause_1010.png", NULL);
    sfSprite_setTexture(exit, txt_exit, sfTrue);
    sfSprite_setPosition(exit, (sfVector2f){100, 720});
    sfSprite_setTextureRect(exit, (sfIntRect){0, 0, 505, 95});
    return (exit);
}

sfSprite *create_bg_pause(void)
{
    sfSprite *bg;
    sfTexture *txt_bg;

    bg = sfSprite_create();
    txt_bg = sfTexture_createFromFile("assets/bg_pause.png", NULL);
    sfSprite_setTexture(bg, txt_bg, sfTrue);
    sfSprite_setPosition(bg, (sfVector2f){0, 0});
    return (bg);
}
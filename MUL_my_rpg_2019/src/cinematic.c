/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** cinematic
*/

#include "../include/my.h"

sfSprite *s_dialog_1(void)
{
    sfSprite *dialog;
    sfTexture *txt_dialog;

    dialog = sfSprite_create();
    txt_dialog = sfTexture_createFromFile("assets/dialog_1.png", NULL);
    sfSprite_setTexture(dialog, txt_dialog, sfTrue);
    sfSprite_setPosition(dialog, (sfVector2f){0, 825});
    return (dialog);
}

sfText *create_cin_text(void)
{
    sfText *text;
    sfFont *font;
    sfColor color;

    text = sfText_create();
    font = sfFont_createFromFile("font/Final-Fantasy.ttf");
    color = sfColor_fromRGB(255, 255, 255);
    sfText_setString(text, "This forest is dangerous, be careful of ghosts");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 22);
    sfText_setColor(text, color);
    sfText_setPosition(text, (sfVector2f){70, 880});
    return (text);
}

sfText *create_cin_text_2(void)
{
    sfText *text;
    sfFont *font;
    sfColor color;

    text = sfText_create();
    font = sfFont_createFromFile("font/Final-Fantasy.ttf");
    color = sfColor_fromRGB(255, 255, 255);
    sfText_setString(text, "They can pass through rocks and trees !");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 22);
    sfText_setColor(text, color);
    sfText_setPosition(text, (sfVector2f){90, 950});
    return (text);
}

sfText *create_cin_text_press(void)
{
    sfText *text;
    sfFont *font;
    sfColor color;

    text = sfText_create();
    font = sfFont_createFromFile("font/Final-Fantasy.ttf");
    color = sfColor_fromRGB(255, 255, 255);
    sfText_setString(text, "Press Enter");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 17);
    sfText_setColor(text, color);
    sfText_setPosition(text, (sfVector2f){1700, 980});
    return (text);
}

int load_cinematic(sfRenderWindow *window, t_player *player , carte_t *carte)
{
    static int a = 0;
    static int b = 1;

    if (b == 1 && a < 60) {
        mv_player_left(player->clock, player, carte);
        a++;
        if (a == 60)
            b = 2;
    } else if (b == 2) {
        sfRenderWindow_drawSprite(window, player->cinematic->cin_1, NULL);
        sfRenderWindow_drawText(window, player->cinematic->text_cin, NULL);
        sfRenderWindow_drawText(window, player->cinematic->text_cin_2, NULL);
        sfRenderWindow_drawText(window, player->cinematic->cin_press, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyEnter))
            b = 0;
    }
    return (b);
}
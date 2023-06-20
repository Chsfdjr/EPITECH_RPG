/*
** EPITECH PROJECT, 2023
** create_rect_menu
** File description:
** menu
*/

#include "../../../include/rpg.h"

main_menu *create_button_start(main_menu *menu_pt)
{
    menu_pt->button_start_pos.x = 520;
    menu_pt->button_start_pos.y = 460;
    menu_pt->texture_button_start =
    sfTexture_createFromFile("assets/button/Play.png", NULL);
    menu_pt->sprite_button_start =
    sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_button_start,
    menu_pt->texture_button_start, sfTrue);
    sfSprite_setPosition(menu_pt->sprite_button_start,
    menu_pt->button_start_pos);
    menu_pt->rect_start_button.top = 310;
    menu_pt->rect_start_button.left = 0;
    menu_pt->rect_start_button.width = 152;
    menu_pt->rect_start_button.height = 156;
    sfSprite_setTextureRect(menu_pt->sprite_button_start,
    menu_pt->rect_start_button);
    return menu_pt;
}

main_menu *create_button_settings(main_menu *menu_pt)
{
    menu_pt->button_settings_pos.x = 520;
    menu_pt->button_settings_pos.y = 750;
    menu_pt->texture_button_settings =
    sfTexture_createFromFile("assets/button/random.png", NULL);
    menu_pt->sprite_button_settings =
    sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_button_settings,
    menu_pt->texture_button_settings, sfTrue);
    sfSprite_setPosition(menu_pt->sprite_button_settings,
    menu_pt->button_settings_pos);
    menu_pt->rect_settings_button.top = 310;
    menu_pt->rect_settings_button.left = 0;
    menu_pt->rect_settings_button.width = 160;
    menu_pt->rect_settings_button.height = 160;
    sfSprite_setTextureRect(menu_pt->sprite_button_settings,
    menu_pt->rect_settings_button);
    return menu_pt;
}

main_menu *create_button_quit(main_menu *menu_pt)
{
    menu_pt->button_quit_pos.x = 1220;
    menu_pt->button_quit_pos.y = 750;
    menu_pt->texture_button_quit =
    sfTexture_createFromFile("assets/button/OnOff.png", NULL);
    menu_pt->sprite_button_quit =
    sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_button_quit,
    menu_pt->texture_button_quit, sfTrue);
    sfSprite_setPosition(menu_pt->sprite_button_quit,
    menu_pt->button_quit_pos);
    menu_pt->rect_quit_button.top = 310;
    menu_pt->rect_quit_button.left = 0;
    menu_pt->rect_quit_button.width = 160;
    menu_pt->rect_quit_button.height = 160;
    sfSprite_setTextureRect(menu_pt->sprite_button_quit,
    menu_pt->rect_quit_button);
    menu_pt->is_quit_click = sfFalse;
    return menu_pt;
}

main_menu *create_button_help(main_menu *menu_pt)
{
    menu_pt->button_help_pos.x = 1750;
    menu_pt->button_help_pos.y = 900;
    menu_pt->texture_button_help =
    sfTexture_createFromFile("assets/questions.png", NULL);
    menu_pt->sprite_button_help =
    sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_button_help,
    menu_pt->texture_button_help, sfTrue);
    sfSprite_setPosition(menu_pt->sprite_button_help,
    menu_pt->button_help_pos);
    menu_pt->rect_help_button.top = 310;
    menu_pt->rect_help_button.left = 0;
    menu_pt->rect_help_button.width = 160;
    menu_pt->rect_help_button.height = 160;
    sfSprite_setTextureRect(menu_pt->sprite_button_help,
    menu_pt->rect_help_button);
    return menu_pt;
}

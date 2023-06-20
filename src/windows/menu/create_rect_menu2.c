/*
** EPITECH PROJECT, 2023
** create button
** File description:
** 2
*/

#include "../../../include/rpg.h"

main_menu *create_button_help_settings(main_menu *menu_pt)
{
    menu_pt->pos_button_sett2.x = 1750;
    menu_pt->pos_button_sett2.y = 900;
    menu_pt->texture_button_sett_help =
    sfTexture_createFromFile("assets/questions.png", NULL);
    menu_pt->sprite_button_sett_help =
    sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_button_sett_help,
    menu_pt->texture_button_sett_help, sfTrue);
    sfSprite_setPosition(menu_pt->sprite_button_sett_help,
    menu_pt->button_help_pos);
    menu_pt->rect_sett_help_button.top = 310;
    menu_pt->rect_sett_help_button.left = 0;
    menu_pt->rect_sett_help_button.width = 160;
    menu_pt->rect_sett_help_button.height = 160;
    sfSprite_setTextureRect(menu_pt->sprite_button_sett_help,
    menu_pt->rect_sett_help_button);
    return menu_pt;
}

main_menu *create_button_return(main_menu *menu_pt)
{
    menu_pt->button_return_pos.x = 100;
    menu_pt->button_return_pos.y = 900;
    menu_pt->texture_button_return =
    sfTexture_createFromFile("assets/left_arrow.png", NULL);
    menu_pt->sprite_button_return =
    sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_button_return,
    menu_pt->texture_button_return, sfTrue);
    sfSprite_setPosition(menu_pt->sprite_button_return,
    menu_pt->button_return_pos);
    menu_pt->rect_return_button.top = 310;
    menu_pt->rect_return_button.left = 0;
    menu_pt->rect_return_button.width = 160;
    menu_pt->rect_return_button.height = 160;
    sfSprite_setTextureRect(menu_pt->sprite_button_return,
    menu_pt->rect_return_button);
    return menu_pt;
}

main_menu *create_button_inventory(main_menu *menu_pt)
{
    menu_pt->button_inventory_pos.x = 520;
    menu_pt->button_inventory_pos.y = 450;
    menu_pt->texture_button_inventory =
    sfTexture_createFromFile("assets/shop.png", NULL);
    menu_pt->sprite_button_inventory =
    sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_button_inventory,
    menu_pt->texture_button_inventory, sfTrue);
    sfSprite_setPosition(menu_pt->sprite_button_inventory,
    menu_pt->button_inventory_pos);
    menu_pt->rect_inventory_button.top = 310;
    menu_pt->rect_inventory_button.left = 0;
    menu_pt->rect_inventory_button.width = 160;
    menu_pt->rect_inventory_button.height = 160;
    sfSprite_setTextureRect(menu_pt->sprite_button_inventory,
    menu_pt->rect_inventory_button);
    return menu_pt;
}

main_menu *create_button_save(main_menu *menu_pt)
{
    menu_pt->button_save_pos.x = 880;
    menu_pt->button_save_pos.y = 610;
    menu_pt->texture_button_save =
    sfTexture_createFromFile("assets/star.png", NULL);
    menu_pt->sprite_button_save =
    sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_button_save,
    menu_pt->texture_button_save, sfTrue);
    sfSprite_setPosition(menu_pt->sprite_button_save,
    menu_pt->button_save_pos);
    menu_pt->rect_save_button.top = 310;
    menu_pt->rect_save_button.left = 0;
    menu_pt->rect_save_button.width = 160;
    menu_pt->rect_save_button.height = 160;
    sfSprite_setTextureRect(menu_pt->sprite_button_save,
    menu_pt->rect_save_button);
    return menu_pt;
}

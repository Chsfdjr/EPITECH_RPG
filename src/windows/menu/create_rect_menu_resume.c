/*
** EPITECH PROJECT, 2023
** create_rect_menu
** File description:
** menu
*/

#include "../../../include/rpg.h"

void save_or_nosave(main_menu *menu_pt)
{
    if (open("save.txt", O_RDONLY) != -1) {
        sfSprite_setTextureRect(menu_pt->sprite_button_resume,
        menu_pt->rect_resume_button);
        menu_pt->save = sfTrue;
    } else {
        sfSprite_setTextureRect(menu_pt->sprite_button_resume,
        menu_pt->rect_resume_button_nosave);
        menu_pt->save = sfFalse;
    }
}

void set_button_resume_rect(main_menu *menu_pt)
{
    menu_pt->rect_resume_button.top = 152;
    menu_pt->rect_resume_button.left = 0;
    menu_pt->rect_resume_button.width = 155;
    menu_pt->rect_resume_button.height = 155;
    menu_pt->rect_resume_button_nosave.top = 465;
    menu_pt->rect_resume_button_nosave.left = 0;
    menu_pt->rect_resume_button_nosave.width = 155;
    menu_pt->rect_resume_button_nosave.height = 155;
    save_or_nosave(menu_pt);
}

main_menu *create_button_resume(main_menu *menu_pt)
{
    menu_pt->button_resume_pos.x = 1220;
    menu_pt->button_resume_pos.y = 460;
    menu_pt->texture_button_resume =
    sfTexture_createFromFile("assets/button/reload.png", NULL);
    menu_pt->sprite_button_resume =
    sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_button_resume,
    menu_pt->texture_button_resume, sfTrue);
    sfSprite_setPosition(menu_pt->sprite_button_resume,
    menu_pt->button_resume_pos);
    set_button_resume_rect(menu_pt);
    return menu_pt;
}

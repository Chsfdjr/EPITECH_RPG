/*
** EPITECH PROJECT, 2023
** text_save
** File description:
** rpg
*/

#include "../../include/rpg.h"

void create_save_text(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->menu_pt->text_save = sfText_create();
    sfText_setFont(main->menu_pt->text_save, main->menu_pt->font_menu);
    sfText_setString(main->menu_pt->text_save, "Save");
    sfText_setCharacterSize(main->menu_pt->text_save, 50);
    sfText_setFillColor(main->menu_pt->text_save, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->menu_pt->text_save);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {955.f, 550.f};
    sfText_setOrigin(main->menu_pt->text_save, textOrigin);
    sfText_setPosition(main->menu_pt->text_save, textPosition);
}

/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** rpg
*/

#include "../../include/rpg.h"

void create_text_load(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->menu_pt->text_load = sfText_create();
    sfText_setFont(main->menu_pt->text_load, main->menu_pt->font_menu);
    sfText_setString(main->menu_pt->text_load, "Load");
    sfText_setCharacterSize(main->menu_pt->text_load, 50);
    sfText_setFillColor(main->menu_pt->text_load, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->menu_pt->text_load);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {1300.f, 400.f};
    sfText_setOrigin(main->menu_pt->text_load, textOrigin);
    sfText_setPosition(main->menu_pt->text_load, textPosition);
}

void create_text_invent(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->menu_pt->text_invent = sfText_create();
    sfText_setFont(main->menu_pt->text_invent, main->menu_pt->font_menu);
    sfText_setString(main->menu_pt->text_invent, "Inventory");
    sfText_setCharacterSize(main->menu_pt->text_invent, 50);
    sfText_setFillColor(main->menu_pt->text_invent, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->menu_pt->text_invent);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {600.f, 400.f};
    sfText_setOrigin(main->menu_pt->text_invent, textOrigin);
    sfText_setPosition(main->menu_pt->text_invent, textPosition);
}

void create_text_igmenu(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->menu_pt->text_igmenu = sfText_create();
    sfText_setFont(main->menu_pt->text_igmenu, main->menu_pt->font_menu);
    sfText_setString(main->menu_pt->text_igmenu, "Menu");
    sfText_setCharacterSize(main->menu_pt->text_igmenu, 150);
    sfText_setFillColor(main->menu_pt->text_igmenu, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->menu_pt->text_igmenu);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {960.f, 100.f};
    sfText_setOrigin(main->menu_pt->text_igmenu, textOrigin);
    sfText_setPosition(main->menu_pt->text_igmenu, textPosition);
}

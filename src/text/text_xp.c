/*
** EPITECH PROJECT, 2023
** text exp
** File description:
** rpg
*/

#include "../../include/rpg.h"

void create_exp_text(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->foxi->text_exp = sfText_create();
    sfText_setFont(main->foxi->text_exp, main->menu_pt->font_menu);
    sfText_setString(main->foxi->text_exp, "LEVEL 1");
    sfText_setCharacterSize(main->foxi->text_exp, 25);
    sfText_setFillColor(main->foxi->text_exp, sfColor_fromRGB(0,255,0));
    sfFloatRect textRect = sfText_getLocalBounds(main->foxi->text_exp);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    main->foxi->text_exp_pos.x = 100.f;
    main->foxi->text_exp_pos.y = 1280.f;
    sfText_setOrigin(main->foxi->text_exp, textOrigin);
    sfText_setPosition(main->foxi->text_exp, main->foxi->text_exp_pos);
}

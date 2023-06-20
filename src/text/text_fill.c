/*
** EPITECH PROJECT, 2023
** text fill
** File description:
** rpg
*/

#include "../../include/rpg.h"

void create_text_noise(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->sett->text_noise = sfText_create();
    sfText_setFont(main->sett->text_noise, main->menu_pt->font_menu);
    sfText_setString(main->sett->text_noise, "Sound");
    sfText_setCharacterSize(main->sett->text_noise, 50);
    sfText_setFillColor(main->sett->text_noise, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->sett->text_noise);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {350.f, 475.f};
    sfText_setOrigin(main->sett->text_noise, textOrigin);
    sfText_setPosition(main->sett->text_noise, textPosition);
}

void create_text_htp(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->sett->text_htp = sfText_create();
    sfText_setFont(main->sett->text_htp, main->menu_pt->font_menu);
    sfText_setString(main->sett->text_htp, "How to Play");
    sfText_setCharacterSize(main->sett->text_htp, 50);
    sfText_setFillColor(main->sett->text_htp, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->sett->text_htp);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {1770.f, 870.f};
    sfText_setOrigin(main->sett->text_htp, textOrigin);
    sfText_setPosition(main->sett->text_htp, textPosition);
}

void create_text_speed(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->invent->text_speed = sfText_create();
    sfText_setFont(main->invent->text_speed, main->menu_pt->font_menu);
    sfText_setString(main->invent->text_speed, "Speed = 5");
    sfText_setCharacterSize(main->invent->text_speed, 50);
    sfText_setFillColor(main->invent->text_speed, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->invent->text_speed);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {1015.f, 920.f};
    sfText_setOrigin(main->invent->text_speed, textOrigin);
    sfText_setPosition(main->invent->text_speed, textPosition);
}

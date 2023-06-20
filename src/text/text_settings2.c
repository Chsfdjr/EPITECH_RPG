/*
** EPITECH PROJECT, 2023
** text
** File description:
** setting2
*/

#include "../../include/rpg.h"

void create_settings_max_music(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->sett->music_max = sfText_create();
    sfText_setFont(main->sett->music_max, main->menu_pt->font_menu);
    sfText_setString(main->sett->music_max, "100");
    sfText_setCharacterSize(main->sett->music_max, 50);
    sfText_setFillColor(main->sett->music_max, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->sett->music_max);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {1666.f, 240.f};
    sfText_setOrigin(main->sett->music_max, textOrigin);
    sfText_setPosition(main->sett->music_max, textPosition);
}

void create_settings_min_music(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->sett->music_min = sfText_create();
    sfText_setFont(main->sett->music_min, main->menu_pt->font_menu);
    sfText_setString(main->sett->music_min, "0");
    sfText_setCharacterSize(main->sett->music_min, 50);
    sfText_setFillColor(main->sett->music_min, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->sett->music_min);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {710.f, 240.f};
    sfText_setOrigin(main->sett->music_min, textOrigin);
    sfText_setPosition(main->sett->music_min, textPosition);
}

void create_rect_sound_min(struct rpg_s *main)
{
    sfVector2f size_rectn;
    size_rectn.x = 50;
    size_rectn.y = 50;
    main->sett->pos_rectmin.x = 687;
    main->sett->pos_rectmin.y = 216;
    main->sett->rect_min = sfRectangleShape_create();
    sfRectangleShape_setFillColor(main->sett->rect_min, sfTransparent);
    sfRectangleShape_setOutlineThickness(main->sett->rect_min, 1.5);
    sfRectangleShape_setOutlineColor(main->sett->rect_min, sfWhite);
    sfRectangleShape_setSize(main->sett->rect_min, size_rectn);
    sfRectangleShape_setPosition(main->sett->rect_min, main->sett->pos_rectmin);
}

void create_rect_sound_max(struct rpg_s *main)
{
    sfVector2f size_rectx;
    size_rectx.x = 65;
    size_rectx.y = 50;
    main->sett->pos_max.x = 1633;
    main->sett->pos_max.y = 216;
    main->sett->rect_max = sfRectangleShape_create();
    sfRectangleShape_setFillColor(main->sett->rect_max, sfTransparent);
    sfRectangleShape_setOutlineThickness(main->sett->rect_max, 1.5);
    sfRectangleShape_setOutlineColor(main->sett->rect_max, sfWhite);
    sfRectangleShape_setSize(main->sett->rect_max, size_rectx);
    sfRectangleShape_setPosition(main->sett->rect_max, main->sett->pos_max);
}

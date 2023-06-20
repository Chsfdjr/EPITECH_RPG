/*
** EPITECH PROJECT, 2023
** create text menu
** File description:
** text menu
*/

#include "../../include/rpg.h"

void create_main_text(main_menu *menu_pt)
{
    menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    menu_pt->text_main_menu = sfText_create();
    sfText_setFont(menu_pt->text_main_menu, menu_pt->font_menu);
    sfText_setString(menu_pt->text_main_menu, "MASTER FOX");
    sfText_setCharacterSize(menu_pt->text_main_menu, 150);
    sfText_setFillColor(menu_pt->text_main_menu, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(menu_pt->text_main_menu);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {960.f, 100.f};
    sfText_setOrigin(menu_pt->text_main_menu, textOrigin);
    sfText_setPosition(menu_pt->text_main_menu, textPosition);
}

void create_play_text(main_menu *menu_pt)
{
    menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    menu_pt->text_play_menu = sfText_create();
    sfText_setFont(menu_pt->text_play_menu, menu_pt->font_menu);
    sfText_setString(menu_pt->text_play_menu, "Play");
    sfText_setCharacterSize(menu_pt->text_play_menu, 50);
    sfText_setFillColor(menu_pt->text_play_menu, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(menu_pt->text_play_menu);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {600.f, 400.f};
    sfText_setOrigin(menu_pt->text_play_menu, textOrigin);
    sfText_setPosition(menu_pt->text_play_menu, textPosition);
}

void create_resume_text(main_menu *menu_pt)
{
    menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    menu_pt->text_resume_menu = sfText_create();
    sfText_setFont(menu_pt->text_resume_menu, menu_pt->font_menu);
    sfText_setString(menu_pt->text_resume_menu, "Resume");
    sfText_setCharacterSize(menu_pt->text_resume_menu, 50);
    sfText_setFillColor(menu_pt->text_resume_menu, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(menu_pt->text_resume_menu);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {1300.f, 400.f};
    sfText_setOrigin(menu_pt->text_resume_menu, textOrigin);
    sfText_setPosition(menu_pt->text_resume_menu, textPosition);
}

void create_settings_text(main_menu *menu_pt)
{
    menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    menu_pt->text_settings_menu = sfText_create();
    sfText_setFont(menu_pt->text_settings_menu, menu_pt->font_menu);
    sfText_setString(menu_pt->text_settings_menu, "Settings");
    sfText_setCharacterSize(menu_pt->text_settings_menu, 50);
    sfText_setFillColor(menu_pt->text_settings_menu, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(menu_pt->text_settings_menu);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {600.f, 700.f};
    sfText_setOrigin(menu_pt->text_settings_menu, textOrigin);
    sfText_setPosition(menu_pt->text_settings_menu, textPosition);
}

void create_quit_text(main_menu *menu_pt)
{
    menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    menu_pt->text_quit_menu = sfText_create();
    sfText_setFont(menu_pt->text_quit_menu, menu_pt->font_menu);
    sfText_setString(menu_pt->text_quit_menu, "Quit");
    sfText_setCharacterSize(menu_pt->text_quit_menu, 50);
    sfText_setFillColor(menu_pt->text_quit_menu, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(menu_pt->text_quit_menu);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {1300.f, 700.f};
    sfText_setOrigin(menu_pt->text_quit_menu, textOrigin);
    sfText_setPosition(menu_pt->text_quit_menu, textPosition);
}

/*
** EPITECH PROJECT, 2023
** text_settings
** File description:
** rpg
*/

#include "../../include/rpg.h"

void create_settings_main_text(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->sett->text_big_settings = sfText_create();
    sfText_setFont(main->sett->text_big_settings, main->menu_pt->font_menu);
    sfText_setString(main->sett->text_big_settings, "Settings");
    sfText_setCharacterSize(main->sett->text_big_settings, 150);
    sfText_setFillColor(main->sett->text_big_settings, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->sett->text_big_settings);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {960.f, 100.f};
    sfText_setOrigin(main->sett->text_big_settings, textOrigin);
    sfText_setPosition(main->sett->text_big_settings, textPosition);
}

void create_settings_audio_text(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->sett->text_audio = sfText_create();
    sfText_setFont(main->sett->text_audio, main->menu_pt->font_menu);
    sfText_setString(main->sett->text_audio, "Music");
    sfText_setCharacterSize(main->sett->text_audio, 50);
    sfText_setFillColor(main->sett->text_audio, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->sett->text_audio);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {350.f, 275.f};
    sfText_setOrigin(main->sett->text_audio, textOrigin);
    sfText_setPosition(main->sett->text_audio, textPosition);
}

void create_settings_window_text(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->sett->text_window = sfText_create();
    sfText_setFont(main->sett->text_window, main->menu_pt->font_menu);
    sfText_setString(main->sett->text_window, "Window");
    sfText_setCharacterSize(main->sett->text_window, 50);
    sfText_setFillColor(main->sett->text_window, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->sett->text_window);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {350.f, 700.f};
    sfText_setOrigin(main->sett->text_window, textOrigin);
    sfText_setPosition(main->sett->text_window, textPosition);
}

void create_settings_quit_text(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->sett->text_quit = sfText_create();
    sfText_setFont(main->sett->text_quit, main->menu_pt->font_menu);
    sfText_setString(main->sett->text_quit, "Quit");
    sfText_setCharacterSize(main->sett->text_quit, 50);
    sfText_setFillColor(main->sett->text_quit, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->sett->text_quit);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {952.f, 845.f};
    sfText_setOrigin(main->sett->text_quit, textOrigin);
    sfText_setPosition(main->sett->text_quit, textPosition);
}

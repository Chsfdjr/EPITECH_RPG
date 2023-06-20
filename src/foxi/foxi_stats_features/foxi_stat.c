/*
** EPITECH PROJECT, 2023
** foxi_stat
** File description:
** rpg
*/

#include "../../../include/rpg.h"

void create_text_dps(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->invent->text_dps = sfText_create();
    sfText_setFont(main->invent->text_dps, main->menu_pt->font_menu);
    sfText_setString(main->invent->text_dps, "Attack damage = 10");
    sfText_setCharacterSize(main->invent->text_dps, 50);
    sfText_setFillColor(main->invent->text_dps, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->invent->text_dps);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {1105.f, 750.f};
    sfText_setOrigin(main->invent->text_dps, textOrigin);
    sfText_setPosition(main->invent->text_dps, textPosition);
}

void create_text_pv(struct rpg_s *main)
{
    main->menu_pt->font_menu = sfFont_createFromFile("assets/font.ttf");
    main->invent->text_pv = sfText_create();
    sfText_setFont(main->invent->text_pv, main->menu_pt->font_menu);
    sfText_setString(main->invent->text_pv, "Health point = 100");
    sfText_setCharacterSize(main->invent->text_pv, 50);
    sfText_setFillColor(main->invent->text_pv, sfWhite);
    sfFloatRect textRect = sfText_getLocalBounds(main->invent->text_pv);
    sfVector2f textOrigin = {textRect.left + textRect.width / 2.f,
    textRect.top + textRect.height / 2.f};
    sfVector2f textPosition = {1105.f, 835.f};
    sfText_setOrigin(main->invent->text_pv, textOrigin);
    sfText_setPosition(main->invent->text_pv, textPosition);
}

int nb_of_cheese(struct rpg_s *main)
{
    int nb = 0;
    if (main->invent->cheese_1->fox_have_it == sfTrue)
        nb += 1;
    if (main->invent->cheese_2->fox_have_it == sfTrue)
        nb += 1;
    if (main->invent->cheese_3->fox_have_it == sfTrue)
        nb += 1;
    if (main->invent->cheese_4->fox_have_it == sfTrue)
        nb += 1;
    return nb;
}

void cheese_degats(struct rpg_s *main)
{
    int nb = nb_of_cheese(main);
    if (nb == 1) {
        sfText_setString(main->invent->text_dps, "Attack damage = 20");
        main->foxi->damage = 20;
    }
    if (nb == 2) {
        sfText_setString(main->invent->text_dps, "Attack damage = 30");
        main->foxi->damage = 30;
    }
    if (nb == 3) {
        sfText_setString(main->invent->text_dps, "Attack damage = 40");
        main->foxi->damage = 40;
    }
}

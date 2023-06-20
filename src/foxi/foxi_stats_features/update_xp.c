/*
** EPITECH PROJECT, 2023
** update
** File description:
** xp
*/

#include "../../../include/rpg.h"
void update_xp4(struct rpg_s *main);

void update_xp3(struct rpg_s *main)
{
    if (main->foxi->exp == 40) {
        main->foxi->rect_exp.top = 516;
        main->foxi->level = 1;
        sfText_setString(main->foxi->text_exp, "LEVEL 1");
        main->foxi->speed = 5;
        sfText_setString(main->invent->text_speed, "Speed = 5");
    }
    if (main->foxi->exp == 50) {
        main->foxi->rect_exp.top = 688;
        main->foxi->level = 1;
        sfText_setString(main->foxi->text_exp, "LEVEL 1");
        main->foxi->speed = 5;
        sfText_setString(main->invent->text_speed, "Speed = 5");
    }
    update_xp4(main);
}

void update_xp(struct rpg_s *main)
{
    if (main->foxi->exp == 10) {
        main->foxi->rect_exp.top = 0;
        main->foxi->level = 1;
        sfText_setString(main->foxi->text_exp, "LEVEL 1");
        main->foxi->speed = 5;
        sfText_setString(main->invent->text_speed, "Speed = 5");
    }
    if (main->foxi->exp == 20) {
        main->foxi->rect_exp.top = 172;
        main->foxi->level = 1;
        sfText_setString(main->foxi->text_exp, "LEVEL 1");
        main->foxi->speed = 5;
        sfText_setString(main->invent->text_speed, "Speed = 5");
    }
}

void update_xp2(struct rpg_s *main)
{
    if (main->foxi->exp == 70) {
        main->foxi->rect_exp.top = 0;
        main->foxi->level = 2;
        sfText_setString(main->foxi->text_exp, "LEVEL 2");
        main->foxi->speed = 8;
        sfText_setString(main->invent->text_speed, "Speed = 8");
    }
    if (main->foxi->exp == 80) {
        main->foxi->rect_exp.top = 172;
        sfText_setString(main->foxi->text_exp, "LEVEL 2");
        main->foxi->speed = 8;
        sfText_setString(main->invent->text_speed, "Speed = 8");
    }
    if (main->foxi->exp == 90) {
        main->foxi->rect_exp.top = 344;
        sfText_setString(main->foxi->text_exp, "LEVEL 2");
        main->foxi->speed = 8;
        sfText_setString(main->invent->text_speed, "Speed = 8");
    }
}

int nb_inventory(struct rpg_s* main)
{
    int nb = 10;
    if (main->invent->cheese_1->fox_have_it == sfTrue)
        nb += 10;
    if (main->invent->cheese_2->fox_have_it == sfTrue)
        nb += 10;
    if (main->invent->cheese_3->fox_have_it == sfTrue)
        nb += 10;
    if (main->invent->cheese_4->fox_have_it == sfTrue)
        nb += 10;
    if (main->invent->powder->fox_have_it == sfTrue)
        nb += 10;
    if (main->invent->fire->fox_have_it == sfTrue)
        nb += 10;
    if (main->invent->bomb->fox_have_it == sfTrue)
        nb += 10;
    if (main->en->hp_wolf <= 0)
        nb += 10;
    if (main->en->hp_crow <= 0)
        nb += 10;
    return nb;
}

void update_xp_level(struct rpg_s *main)
{
    main->foxi->exp = nb_inventory(main);
    update_xp(main);
    update_xp3(main);
    update_xp2(main);
    sfSprite_setTextureRect(main->foxi->sprite_exp,
    main->foxi->rect_exp);
}

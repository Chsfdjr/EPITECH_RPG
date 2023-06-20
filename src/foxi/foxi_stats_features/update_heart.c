/*
** EPITECH PROJECT, 2023
** update
** File description:
** heart
*/

#include "../../../include/rpg.h"

void update2(struct rpg_s *main)
{
    if (main->foxi->hp == 30) {
        main->foxi->rect_heart.left = 275;
        sfText_setString(main->invent->text_pv, "Health point = 30");
    }
    if (main->foxi->hp == 20) {
        main->foxi->rect_heart.left = 560;
        sfText_setString(main->invent->text_pv, "Health point = 20");
    }
    if (main->foxi->hp == 10) {
        main->foxi->rect_heart.left = 850;
        sfText_setString(main->invent->text_pv, "Health point = 10");
    }
    if (main->foxi->hp == 0) {
        main->foxi->rect_heart.left = 1120;
        sfText_setString(main->invent->text_pv, "Health point = 0");
    }
}

void update3(struct rpg_s *main)
{
    if (main->foxi->hp == 60) {
        main->foxi->rect_heart.left = 1120;
        sfText_setString(main->invent->text_pv, "Health point = 60");

    }
    if (main->foxi->hp == 50) {
        main->foxi->rect_heart.left = 1400;
        sfText_setString(main->invent->text_pv, "Health point = 50");

    }
    if (main->foxi->hp == 40) {
        main->foxi->rect_heart.left = 0;
        main->foxi->rect_heart.top = 246;
        sfText_setString(main->invent->text_pv, "Health point = 40");
    }
}

void update_heart(struct rpg_s *main)
{
    if (main->foxi->hp == 90) {
        main->foxi->rect_heart.left = 275;
        sfText_setString(main->invent->text_pv, "Health point = 90");
    }
    if (main->foxi->hp == 80) {
        main->foxi->rect_heart.left = 560;
        sfText_setString(main->invent->text_pv, "Health point = 80");
    }
    if (main->foxi->hp == 70) {
        main->foxi->rect_heart.left = 850;
        sfText_setString(main->invent->text_pv, "Health point = 70");
    }
    update2(main);
    update3(main);
    sfSprite_setTextureRect(main->foxi->sprite_heart,
    main->foxi->rect_heart);
}

void update_xp4(struct rpg_s *main)
{
    if (main->foxi->exp == 60) {
        main->foxi->rect_exp.top = 860;
        main->foxi->level = 1;
        sfText_setString(main->foxi->text_exp, "LEVEL 1");
        main->foxi->speed = 5;
        sfText_setString(main->invent->text_speed, "Speed = 5");
    }
    if (main->foxi->exp == 30) {
        main->foxi->rect_exp.top = 344;
        main->foxi->level = 1;
        sfText_setString(main->foxi->text_exp, "LEVEL 1");
        main->foxi->speed = 5;
        sfText_setString(main->invent->text_speed, "Speed = 5");
    }
}

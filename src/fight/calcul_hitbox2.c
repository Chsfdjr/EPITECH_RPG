/*
** EPITECH PROJECT, 2023
** calcul
** File description:
** hitbox
*/

#include "../../include/rpg.h"

void update_new_room(struct rpg_s* main)
{
    main->foxi->rect_player.top = 0;
    main->foxi->rect_player.left = 0;
    main->foxi->pos_player.y -= 380;
    main->foxi->pos_player.x -= 980;
    sfSprite_setPosition(main->foxi->sprite_player,
    main->foxi->pos_player);
    sfSprite_setTextureRect(main->foxi->sprite_player,
    main->foxi->rect_player);
    main->game1->center.y -= 380;
    main->game1->center.x -= 980;
    sfView_setCenter(main->game1->view, main->game1->center);
    main->foxi->pos_heart.y -= 380;
    main->foxi->pos_heart.x -= 980;
    main->foxi->pos_exp.y -= 380;
    main->foxi->pos_exp.x -= 980;
    main->foxi->text_exp_pos.y -= 380;
    main->foxi->text_exp_pos.x -= 980;
    sfSprite_setPosition(main->foxi->sprite_heart, main->foxi->pos_heart);
    sfSprite_setPosition(main->foxi->sprite_exp, main->foxi->pos_exp);
    sfText_setPosition(main->foxi->text_exp, main->foxi->text_exp_pos);
}

sfBool is_color_ok(sfColor color, struct rpg_s *main)
{
    if (color.r == 0 &&
    color.g == 0 && color.b == 255)
        main->game1->blue_zone += 1;
    if (main->invent->bomb->fox_have_it == sfTrue && color.r == 255 &&
    color.g == 255 && color.b == 0) {
        main->game1->yellow_zone = sfTrue;
        main->r_boss->is_here = sfTrue;
        update_new_room(main);
    }
    if (color.g == 255 || (color.r == 0 &&
    color.g == 255 && color.b == 0) || (color.r == 0 &&
    color.g == 0 && color.b == 255) || (color.r == 1 &&
    color.g == 185 && color.b == 71) || (color.r == 0 &&
    color.g == 49 && color.b == 206)) {
        return sfTrue;
    } else
        return sfFalse;
}

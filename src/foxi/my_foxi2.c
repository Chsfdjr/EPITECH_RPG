/*
** EPITECH PROJECT, 2023
** my
** File description:
** foxi
*/

#include "../../include/rpg.h"

void set_foxi(struct rpg_s *main, player *foxi)
{
    sfView_setCenter(main->game1->view, main->game1->center);
    sfSprite_setTextureRect(foxi->sprite_player,
    foxi->rect_player);
    sfSprite_setPosition(foxi->sprite_player,
    foxi->pos_player);
    sfSprite_setPosition(foxi->sprite_heart, foxi->pos_heart);
    sfSprite_setPosition(foxi->sprite_exp, foxi->pos_exp);
    sfText_setPosition(main->foxi->text_exp, main->foxi->text_exp_pos);
}

player move_foxi2(struct rpg_s *main, player *foxi, sfEvent event)
{
    sfColor cl = color_lef(main, main->foxi, event);
    if (main->foxi->key_press == sfTrue && main->menu_pt->version != 5 &&
    sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue && is_color_ok(cl, main)) {
        if (main->foxi->time_mvt_foxi.microseconds > 10000) {
        foxi->pos_player.x -= main->foxi->speed;
        foxi->rect_player.top = 44;
        main->game1->center.x -= main->foxi->speed;
        foxi->pos_heart.x -= main->foxi->speed;
        foxi->text_exp_pos.x -= main->foxi->speed;
        move_foxi_left(main);
        sfClock_restart(main->foxi->clock_mvt_foxi);
        }
    }
}

player *display_foxi(sfRenderWindow *window, player *foxi)
{
    sfRenderWindow_drawSprite(window, foxi->sprite_player, NULL);
}

player *destroy_foxi(player *foxi)
{
    sfSprite_destroy(foxi->sprite_player);
    sfTexture_destroy(foxi->texture_player);
}

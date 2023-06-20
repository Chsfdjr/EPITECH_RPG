/*
** EPITECH PROJECT, 2023
** foxi
** File description:
** fox
*/

#include "../../include/rpg.h"

player *create_foxi(player *foxi)
{
    foxi->pos_player.x = 345;
    foxi->pos_player.y = 1120;
    sfVector2f scale_foxi = {1.f , 1.f};
    foxi->texture_player =
    sfTexture_createFromFile("assets/fox_spritesheet.png", NULL);
    foxi->sprite_player =
    sfSprite_create();
    sfSprite_setScale(foxi->sprite_player, scale_foxi);
    sfSprite_setTexture(foxi->sprite_player,
    foxi->texture_player, sfTrue);
    sfSprite_setPosition(foxi->sprite_player,
    foxi->pos_player);
    foxi->rect_player.top = 0;
    foxi->rect_player.left = 0;
    foxi->rect_player.width = 45;
    foxi->rect_player.height = 47;
    sfSprite_setTextureRect(foxi->sprite_player,
    foxi->rect_player);
    return foxi;
}

void top_commands_pressed(struct rpg_s *main, player *foxi, sfEvent event)
{
    if (main->foxi->time_mvt_foxi.microseconds > 10000) {
        foxi->pos_player.y -= main->foxi->speed;
        foxi->rect_player.top = 126;
        main->game1->center.y -= main->foxi->speed;
        foxi->pos_heart.y -= main->foxi->speed;
        foxi->pos_exp.y -= main->foxi->speed;
        foxi->text_exp_pos.y -= main->foxi->speed;
        move_foxi_top(main);
        sfClock_restart(main->foxi->clock_mvt_foxi);
    }
}

void bot_commands_pressed(struct rpg_s *main, player *foxi, sfEvent event)
{
    if (main->foxi->time_mvt_foxi.microseconds > 10000) {
        foxi->pos_player.y += main->foxi->speed;
        foxi->rect_player.top = 0;
        main->game1->center.y += main->foxi->speed;
        foxi->pos_heart.y += main->foxi->speed;
        foxi->pos_exp.y += main->foxi->speed;
        foxi->text_exp_pos.y += main->foxi->speed;
        move_foxi_bot(main);
        sfClock_restart(main->foxi->clock_mvt_foxi);
    }
}

player move_top_bot(struct rpg_s *main, player *foxi, sfEvent event)
{
    sfColor ct = color_top(main, main->foxi, event);
    sfColor cb = color_bot(main, main->foxi, event);
    if (main->foxi->key_press == sfTrue && main->menu_pt->version != 5 &&
    sfKeyboard_isKeyPressed(sfKeyZ) == sfTrue && is_color_ok(ct, main))
        top_commands_pressed(main, foxi, event);
    if (main->foxi->key_press == sfTrue && main->menu_pt->version != 5 &&
    sfKeyboard_isKeyPressed(sfKeyS) == sfTrue && is_color_ok(cb, main))
        bot_commands_pressed(main, foxi, event);
}

player move_foxi(struct rpg_s *main, player *foxi, sfEvent event)
{
    main->foxi->time_mvt_foxi =
    sfClock_getElapsedTime(main->foxi->clock_mvt_foxi);
    sfColor cr = color_rig(main, main->foxi, event);
    move_top_bot(main, foxi, event);
    if (main->foxi->key_press == sfTrue && main->menu_pt->version != 5 &&
    sfKeyboard_isKeyPressed(sfKeyD) == sfTrue && is_color_ok(cr, main)) {
        if (main->foxi->time_mvt_foxi.microseconds > 10000) {
        foxi->pos_player.x += main->foxi->speed;
        foxi->rect_player.top = 84;
        main->game1->center.x += main->foxi->speed;
        foxi->pos_heart.x += main->foxi->speed;
        foxi->pos_exp.x += main->foxi->speed;
        foxi->text_exp_pos.x += main->foxi->speed;
        move_foxi_right(main);
        sfClock_restart(main->foxi->clock_mvt_foxi);
        }
    }
    move_foxi2(main, foxi, event);
}

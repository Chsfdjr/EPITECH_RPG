/*
** EPITECH PROJECT, 2023
** anime
** File description:
** fox
*/

#include "../../include/rpg.h"

void init_clock_foxi(struct rpg_s *main)
{
    main->foxi->clock_foxi = sfClock_create();
    sfClock_restart(main->foxi->clock_foxi);
}

void move_foxi_right(struct rpg_s *main)
{
    set_foxi(main, main->foxi);
    fox_step_on_right(main);
    main->foxi->time_foxi = sfClock_getElapsedTime(main->foxi->clock_foxi);
    if (main->foxi->time_foxi.microseconds > 100000) {
        if (main->foxi->rect_player.left <= 126) {
            main->foxi->rect_player.left += 48;
            sfSprite_setTextureRect(main->foxi->sprite_player,
            main->foxi->rect_player);
            sfClock_restart(main->foxi->clock_foxi);
        } else {
            main->foxi->rect_player.left = 0;
            sfSprite_setTextureRect(main->foxi->sprite_player,
            main->foxi->rect_player);
            sfClock_restart(main->foxi->clock_foxi);
        }
    }
}

void move_foxi_left(struct rpg_s *main)
{
    main->foxi->pos_exp.x -= main->foxi->speed;
    set_foxi(main, main->foxi);
    fox_step_on_left(main);
    main->foxi->time_foxi = sfClock_getElapsedTime(main->foxi->clock_foxi);
    if (main->foxi->time_foxi.microseconds > 100000) {
        if (main->foxi->rect_player.left <= 126) {
            main->foxi->rect_player.left += 48;
            sfSprite_setTextureRect(main->foxi->sprite_player,
            main->foxi->rect_player);
            sfClock_restart(main->foxi->clock_foxi);
        } else {
            main->foxi->rect_player.left = 0;
            sfSprite_setTextureRect(main->foxi->sprite_player,
            main->foxi->rect_player);
            sfClock_restart(main->foxi->clock_foxi);
        }
    }
}

void move_foxi_top(struct rpg_s *main)
{
    set_foxi(main, main->foxi);
    fox_step_on_top(main);
    main->foxi->time_foxi = sfClock_getElapsedTime(main->foxi->clock_foxi);
    if (main->foxi->time_foxi.microseconds > 100000) {
        if (main->foxi->rect_player.left <= 126) {
            main->foxi->rect_player.left += 48;
            sfSprite_setTextureRect(main->foxi->sprite_player,
            main->foxi->rect_player);
            sfClock_restart(main->foxi->clock_foxi);
        } else {
            main->foxi->rect_player.left = 0;
            sfSprite_setTextureRect(main->foxi->sprite_player,
            main->foxi->rect_player);
            sfClock_restart(main->foxi->clock_foxi);
        }
    }
}

void move_foxi_bot(struct rpg_s *main)
{
    set_foxi(main, main->foxi);
    fox_step_on_bot(main);
    main->foxi->time_foxi = sfClock_getElapsedTime(main->foxi->clock_foxi);
    if (main->foxi->time_foxi.microseconds > 100000) {
        if (main->foxi->rect_player.left <= 126) {
            main->foxi->rect_player.left += 48;
            sfSprite_setTextureRect(main->foxi->sprite_player,
            main->foxi->rect_player);
            sfClock_restart(main->foxi->clock_foxi);
        } else {
            main->foxi->rect_player.left = 0;
            sfSprite_setTextureRect(main->foxi->sprite_player,
            main->foxi->rect_player);
            sfClock_restart(main->foxi->clock_foxi);
        }
    }
}

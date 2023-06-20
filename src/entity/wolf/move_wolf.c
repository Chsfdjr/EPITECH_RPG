/*
** EPITECH PROJECT, 2023
** move
** File description:
** wolf
*/

#include "../../../include/rpg.h"

void wolf_end(struct rpg_s *main)
{
    if (main->en->rect_wolf.left == 100){
            main->en->rect_wolf.left = 0;
            sfSprite_setTextureRect(main->en->wolf_sprite,
            main->en->rect_wolf);
            sfClock_restart(main->en->clock_wolf);
        }
}

void move_wolf_right(struct rpg_s *main)
{
    set_ayawolf(main);
    main->en->time_wolf = sfClock_getElapsedTime(main->en->clock_wolf);
    if (main->en->time_wolf.microseconds > 100000) {
        if (main->en->rect_wolf.left <= 50) {
            main->en->rect_wolf.left += 50;
            sfSprite_setTextureRect(main->en->wolf_sprite,
            main->en->rect_wolf);
            sfClock_restart(main->en->clock_wolf);
        }
        wolf_end(main);
    }
}

void move_wolf_left(struct rpg_s *main)
{
    set_ayawolf(main);
    main->en->time_wolf = sfClock_getElapsedTime(main->en->clock_wolf);
    if (main->en->time_wolf.microseconds > 100000) {
        if (main->en->rect_wolf.left <= 50) {
            main->en->rect_wolf.left += 50;
            sfSprite_setTextureRect(main->en->wolf_sprite,
            main->en->rect_wolf);
            sfClock_restart(main->en->clock_wolf);
        }
        wolf_end(main);
    }
}

void move_wolf_top(struct rpg_s *main)
{
    set_ayawolf(main);
    main->en->time_wolf = sfClock_getElapsedTime(main->en->clock_wolf);
    if (main->en->time_wolf.microseconds > 100000) {
        if (main->en->rect_wolf.left <= 50) {
            main->en->rect_wolf.left += 50;
            sfSprite_setTextureRect(main->en->wolf_sprite,
            main->en->rect_wolf);
            sfClock_restart(main->en->clock_wolf);
        }
        wolf_end(main);
    }
}

void move_wolf_bot(struct rpg_s *main)
{
    set_ayawolf(main);
    main->en->time_wolf = sfClock_getElapsedTime(main->en->clock_wolf);
    if (main->en->time_wolf.microseconds > 100000) {
        if (main->en->rect_wolf.left <= 50) {
            main->en->rect_wolf.left += 50;
            sfSprite_setTextureRect(main->en->wolf_sprite,
            main->en->rect_wolf);
            sfClock_restart(main->en->clock_wolf);
        }
        wolf_end(main);
    }
}

/*
** EPITECH PROJECT, 2023
** dance foxi
** File description:
** dance
*/

#include "../../include/rpg.h"
void dance_foxi2(struct rpg_s *m);

void dance_foxi(struct rpg_s *m)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue &&
    m->menu_pt->version != 5) {
        sfClock_restart(m->foxi->clock_dance);
        m->foxi->time_dance = sfClock_getElapsedTime(m->foxi->clock_dance);
        if (m->foxi->time_dance.microseconds < 1 &&
        m->foxi->rect_player.top == 132) {
            m->foxi->rect_player.top = 0;
            sfSprite_setTextureRect(m->foxi->sprite_player,
            m->foxi->rect_player);
        }
        sfClock_restart(m->foxi->clock_dance);
        if (m->foxi->time_dance.microseconds < 1 &&
        m->foxi->rect_player.top == 0) {
            m->foxi->rect_player.top = 44;
            sfSprite_setTextureRect(m->foxi->sprite_player,
            m->foxi->rect_player);
        }
        dance_foxi2(m);
    }
}

void dance_foxi2(struct rpg_s *m)
{
        sfClock_restart(m->foxi->clock_dance);
    if (m->foxi->time_dance.microseconds < 1 &&
        m->foxi->rect_player.top == 44) {
            m->foxi->rect_player.top = 88;
            sfSprite_setTextureRect(m->foxi->sprite_player,
            m->foxi->rect_player);
        }
        sfClock_restart(m->foxi->clock_dance);
        if (m->foxi->time_dance.microseconds < 1 &&
        m->foxi->rect_player.top == 88) {
            m->foxi->rect_player.top = 132;
            sfSprite_setTextureRect(m->foxi->sprite_player,
            m->foxi->rect_player);
        }
}

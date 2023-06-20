/*
** EPITECH PROJECT, 2023
** hover settings
** File description:
** hover
*/

#include "../../../include/rpg.h"

struct rpg_s *hover_sett_no(struct rpg_s *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->menu_pt->version == 1) &&
    mouse.x > m->sett->no_pos.x &&
    mouse.x < (m->sett->no_pos.x + 160) &&
    mouse.y > m->sett->no_pos.y &&
        mouse.y < (m->sett->no_pos.y + 160)) {
        m->sett->rect_no.top = 0;
        sfSprite_setTextureRect(m->sett->sprite_no,m->sett->rect_no);
        sfSprite_setPosition(m->sett->sprite_no,m->sett->no_pos);
    } else {
        m->sett->rect_no.top = 310;
        sfSprite_setTextureRect(m->sett->sprite_no,
        m->sett->rect_no);
        sfSprite_setPosition(m->sett->sprite_no,
        m->sett->no_pos);
    }
    return m;
}

struct rpg_s *hover_sett_sound(struct rpg_s *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->menu_pt->version == 1) &&
    mouse.x > m->sett->sound_pos.x &&
    mouse.x < (m->sett->sound_pos.x + 160) &&
    mouse.y > m->sett->sound_pos.y &&
        mouse.y < (m->sett->sound_pos.y + 160)) {
        m->sett->rect_sound.top = 0;
        sfSprite_setTextureRect(m->sett->sprite_sound,m->sett->rect_sound);
        sfSprite_setPosition(m->sett->sprite_sound,m->sett->sound_pos);
    } else {
        m->sett->rect_sound.top = 310;
        sfSprite_setTextureRect(m->sett->sprite_sound,
        m->sett->rect_sound);
        sfSprite_setPosition(m->sett->sprite_sound,
        m->sett->sound_pos);
    }
    return m;
}

struct rpg_s *hover_sett_window(struct rpg_s *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->menu_pt->version == 1) &&
    mouse.x > m->sett->window_pos.x &&
    mouse.x < (m->sett->window_pos.x + 160) &&
    mouse.y > m->sett->window_pos.y &&
        mouse.y < (m->sett->window_pos.y + 160)) {
        m->sett->rect_window.top = 0;
        sfSprite_setTextureRect(m->sett->sprite_window,m->sett->rect_window);
        sfSprite_setPosition(m->sett->sprite_window,m->sett->window_pos);
    } else {
        m->sett->rect_window.top = 310;
        sfSprite_setTextureRect(m->sett->sprite_window,
        m->sett->rect_window);
        sfSprite_setPosition(m->sett->sprite_window,
        m->sett->window_pos);
    }
    return m;
}

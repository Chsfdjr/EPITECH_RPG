/*
** EPITECH PROJECT, 2023
** click settings
** File description:
** rpg
*/

#include "../../../../include/rpg.h"

struct rpg_s *click_sett_no(struct rpg_s *m, sfRenderWindow *window)
{
    int v;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->menu_pt->is_display == sfFalse || m->menu_pt->version == 1) &&
    mouse.x > m->sett->no_pos.x &&
    mouse.x < (m->sett->no_pos.x + 160) &&
    mouse.y > m->sett->no_pos.y &&
        mouse.y < (m->sett->no_pos.y + 160)) {
        m->sett->rect_no.top = 153;
        sfSprite_setTextureRect(m->sett->sprite_no,m->sett->rect_no);
        sfSprite_setPosition(m->sett->sprite_no,m->sett->no_pos);
        update_version(m);
    } else {
        m->sett->rect_no.top = 310;
        sfSprite_setTextureRect(m->sett->sprite_no,
        m->sett->rect_no);
        sfSprite_setPosition(m->sett->sprite_no,
        m->sett->no_pos);
    }
    return m;
}

struct rpg_s *click_sett_yes(struct rpg_s *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->menu_pt->is_display == sfFalse || m->menu_pt->version == 1) &&
    mouse.x > m->sett->yes_pos.x &&
    mouse.x < (m->sett->yes_pos.x + 160) &&
    mouse.y > m->sett->yes_pos.y &&
        mouse.y < (m->sett->yes_pos.y + 160)) {
        m->sett->rect_yes.top = 153;
        sfSprite_setTextureRect(m->sett->sprite_yes,
        m->sett->rect_yes);
        sfSprite_setPosition(m->sett->sprite_yes,
        m->sett->yes_pos);
    } else {
        m->sett->rect_yes.top = 310;
        sfSprite_setTextureRect(m->sett->sprite_yes,
        m->sett->rect_yes);
        sfSprite_setPosition(m->sett->sprite_yes,
        m->sett->yes_pos);
    }
    return m;
}

struct rpg_s *click_sett_sound(struct rpg_s *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->menu_pt->version == 1) &&
    mouse.x > m->sett->sound_pos.x &&
    mouse.x < (m->sett->sound_pos.x + 160) &&
    mouse.y > m->sett->sound_pos.y &&
        mouse.y < (m->sett->sound_pos.y + 160)) {
        m->sett->rect_sound.top = 153;
        sfSprite_setTextureRect(m->sett->sprite_sound,
        m->sett->rect_sound);
        sfSprite_setPosition(m->sett->sprite_sound,
        m->sett->sound_pos);
        sett_no_sound(m);
    } else {
        m->sett->rect_sound.top = 310;
        sfSprite_setTextureRect(m->sett->sprite_sound,
        m->sett->rect_sound);
        sfSprite_setPosition(m->sett->sprite_sound,
        m->sett->sound_pos);
    }
    return m;
}

struct rpg_s *click_sett_window(struct rpg_s *main, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (main->menu_pt->version == 1 &&
    mouse.x > main->sett->window_pos.x &&
    mouse.x < (main->sett->window_pos.x + 160) &&
    mouse.y > main->sett->window_pos.y &&
        mouse.y < (main->sett->window_pos.y + 160)) {
        main->sett->rect_window.top = 153;
        update_chang_win(main);
    } else {
        main->sett->rect_window.top = 310;
        sfSprite_setTextureRect(main->sett->sprite_window,
        main->sett->rect_window);
        sfSprite_setPosition(main->sett->sprite_window,
        main->sett->window_pos);
        main->change_win = sfFalse;
    }
    return main;
}

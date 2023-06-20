/*
** EPITECH PROJECT, 2023
** hover
** File description:
** settings
*/

#include "../../../include/rpg.h"

struct rpg_s *hover_sett_sound2(struct rpg_s *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->menu_pt->version == 1) &&
    mouse.x > m->sett->sound_pos2.x &&
    mouse.x < (m->sett->sound_pos2.x + 160) &&
    mouse.y > m->sett->sound_pos2.y &&
        mouse.y < (m->sett->sound_pos2.y + 160)) {
        m->sett->rect_sound2.top = 0;
        sfSprite_setTextureRect(m->sett->sprite_sound2,m->sett->rect_sound2);
        sfSprite_setPosition(m->sett->sprite_sound2,m->sett->sound_pos2);
    } else {
        m->sett->rect_sound2.top = 310;
        sfSprite_setTextureRect(m->sett->sprite_sound2,
        m->sett->rect_sound2);
        sfSprite_setPosition(m->sett->sprite_sound2,
        m->sett->sound_pos2);
    }
    return m;
}

struct rpg_s *hover_button_quit_game_over(struct rpg_s *main,
sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (main->menu_pt->version == 7 &&
    mouse.x > main->game_ov->button_quit_pos.x &&
    mouse.x < (main->game_ov->button_quit_pos.x + 160) &&
        mouse.y > main->game_ov->button_quit_pos.y &&
        mouse.y < (main->game_ov->button_quit_pos.y + 160)) {
        main->game_ov->rect_quit_button.top = 0;
        sfSprite_setTextureRect(main->game_ov->sprite_button_quit,
        main->game_ov->rect_quit_button);
        sfSprite_setPosition(main->game_ov->sprite_button_quit,
        main->game_ov->button_quit_pos);
    } else {
        main->game_ov->rect_quit_button.top = 310;
        sfSprite_setTextureRect(main->game_ov->sprite_button_quit,
        main->game_ov->rect_quit_button);
        sfSprite_setPosition(main->game_ov->sprite_button_quit,
        main->game_ov->button_quit_pos);
    }
    return main;
}

struct rpg_s *hover_button_quit_win(struct rpg_s *main,
sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (main->menu_pt->version == 9 &&
    mouse.x > main->win->button_quit_pos.x &&
    mouse.x < (main->win->button_quit_pos.x + 160) &&
        mouse.y > main->win->button_quit_pos.y &&
        mouse.y < (main->win->button_quit_pos.y + 160)) {
        main->win->rect_quit_button.top = 0;
        sfSprite_setTextureRect(main->win->sprite_button_quit,
        main->win->rect_quit_button);
        sfSprite_setPosition(main->win->sprite_button_quit,
        main->win->button_quit_pos);
    } else {
        main->win->rect_quit_button.top = 310;
        sfSprite_setTextureRect(main->win->sprite_button_quit,
        main->win->rect_quit_button);
        sfSprite_setPosition(main->win->sprite_button_quit,
        main->win->button_quit_pos);
    }
    return main;
}

main_menu *hover_button_resume2(main_menu *m, sfRenderWindow *window,
sfVector2i mouse)
{
    if (m->version == 0 &&
    mouse.x > m->button_resume_pos.x &&
    mouse.x < (m->button_resume_pos.x + 160) &&
        mouse.y > m->button_resume_pos.y &&
        mouse.y < (m->button_resume_pos.y + 160)) {
        m->rect_resume_button.top = 0;
        sfSprite_setTextureRect(m->sprite_button_resume,
        m->rect_resume_button);
        sfSprite_setPosition(m->sprite_button_resume,
        m->button_resume_pos);
    } else {
        m->rect_resume_button.top = 152;
        sfSprite_setTextureRect(m->sprite_button_resume,
        m->rect_resume_button);
        sfSprite_setPosition(m->sprite_button_resume,
        m->button_resume_pos);
    }
}

main_menu *update_play_init(main_menu *m, sfRenderWindow *window,
struct rpg_s* main)
{
    m->version = 10;
    m->old_version = 0;
    m->is_display = sfFalse;
    main->have_played = sfTrue;
    window_init(main->menu_pt, main);
    main->cinema->time_cine = sfClock_getElapsedTime(main->cinema->clock_cine);
}

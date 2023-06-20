/*
** EPITECH PROJECT, 2023
** hover_menu
** File description:
** menu
*/

#include "../../../include/rpg.h"

main_menu *hover_button_start(main_menu *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (m->version == 0 && mouse.x > m->button_start_pos.x &&
    mouse.x < (m->button_start_pos.x + 160) &&
        mouse.y > m->button_start_pos.y &&
        mouse.y < (m->button_start_pos.y + 160)) {
        m->rect_start_button.top = 0;
        sfSprite_setTextureRect(m->sprite_button_start,
        m->rect_start_button);
        sfSprite_setPosition(m->sprite_button_start,
        m->button_start_pos);
    } else {
        m->rect_start_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_start,
        m->rect_start_button);
        sfSprite_setPosition(m->sprite_button_start,
        m->button_start_pos);
    }
    return m;
}

main_menu *hover_button_resume(main_menu *m, sfRenderWindow *window,
struct rpg_s *main)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (m->save == sfFalse && m->version == 4) {
        sfSprite_setTextureRect(m->sprite_button_resume,
        m->rect_resume_button_nosave);
        sfSprite_setPosition(m->sprite_button_resume,
        m->button_resume_pos);
        return m;
    }
    if (m->version == 0 && main->have_played == sfFalse) {
        sfSprite_setTextureRect(m->sprite_button_resume,
        m->rect_resume_button_nosave);
        sfSprite_setPosition(m->sprite_button_resume,
        m->button_resume_pos);
        return m;
    }
    hover_button_resume2(m, window, mouse);
    return m;
}

main_menu *hover_button_settings(main_menu *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 0 || m->version == 4) &&
    mouse.x > m->button_settings_pos.x &&
    mouse.x < (m->button_settings_pos.x + 160) &&
        mouse.y > m->button_settings_pos.y &&
        mouse.y < (m->button_settings_pos.y + 160)) {
        m->rect_settings_button.top = 0;
        sfSprite_setTextureRect(m->sprite_button_settings,
        m->rect_settings_button);
        sfSprite_setPosition(m->sprite_button_settings,
        m->button_settings_pos);
    } else {
        m->rect_settings_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_settings,
        m->rect_settings_button);
        sfSprite_setPosition(m->sprite_button_settings,
        m->button_settings_pos);
    }
    return m;
}

main_menu *hover_button_quit(main_menu *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 0 || m->version == 4) &&
    mouse.x > m->button_quit_pos.x &&
    mouse.x < (m->button_quit_pos.x + 160) &&
        mouse.y > m->button_quit_pos.y &&
        mouse.y < (m->button_quit_pos.y + 160)) {
        m->rect_quit_button.top = 0;
        sfSprite_setTextureRect(m->sprite_button_quit,
        m->rect_quit_button);
        sfSprite_setPosition(m->sprite_button_quit,
        m->button_quit_pos);
    } else {
        m->rect_quit_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_quit,
        m->rect_quit_button);
        sfSprite_setPosition(m->sprite_button_quit,
        m->button_quit_pos);
    }
    return m;
}

void all_hover_menu(main_menu *menu_pt, sfRenderWindow *window,
struct rpg_s *main)
{
    hover_button_start(menu_pt, window);
    hover_button_resume(menu_pt, window, main);
    hover_button_settings(menu_pt, window);
    hover_button_quit(menu_pt, window);
    hover_sett_no(main, window);
    hover_sett_sound(main, window);
    hover_sett_sound2(main, window);
    hover_sett_window(main, window);
    hover_button_help(menu_pt, window);
    hover_button_return(menu_pt, window);
    hover_button_quit_game_over(main, window);
    hover_button_inventory(menu_pt, window);
    hover_button_sett_help(menu_pt, window);
    hover_button_save(menu_pt, window);
    hover_button_quit_win(main, window);
}

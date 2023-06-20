/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** handling_click4.c
*/

#include "../../../include/rpg.h"

main_menu *click_button_sett_help(main_menu *m, sfRenderWindow *window,
struct rpg_s *main)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 1) &&
    mouse.x > m->pos_button_sett2.x &&
    mouse.x < (m->pos_button_sett2.x + 160) &&
        mouse.y > m->pos_button_sett2.y &&
        mouse.y < (m->pos_button_sett2.y + 160)) {
        m->rect_sett_help_button.top = 153;
        sfSprite_setTextureRect(m->sprite_button_sett_help,
        m->rect_sett_help_button);
        sfSprite_setPosition(m->sprite_button_sett_help,
        m->pos_button_sett2);
        update_version_help(main);
    } else {
        m->rect_sett_help_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_sett_help,
        m->rect_sett_help_button);
        sfSprite_setPosition(m->sprite_button_sett_help,
        m->pos_button_sett2);
    }
    return m;
}

main_menu *click_button_save(main_menu *m, sfRenderWindow *window,
struct rpg_s *main)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 4) &&
    mouse.x > m->button_save_pos.x &&
    mouse.x < (m->button_save_pos.x + 160) &&
        mouse.y > m->button_save_pos.y &&
        mouse.y < (m->button_save_pos.y + 160)) {
        m->rect_save_button.top = 153;
        sfSprite_setTextureRect(m->sprite_button_save,
        m->rect_save_button);
        sfSprite_setPosition(m->sprite_button_save,
        m->button_save_pos);
        save_game(main);
    } else {
        m->rect_save_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_save,
        m->rect_save_button);
        sfSprite_setPosition(m->sprite_button_save,
        m->button_save_pos);
    }
    return m;
}

main_menu *click_button_resume2(main_menu *m, sfRenderWindow *window,
struct rpg_s *main, sfVector2i mouse)
{
    if ((m->version == 0) &&
    mouse.x > m->button_resume_pos.x &&
    mouse.x < (m->button_resume_pos.x + 160) &&
        mouse.y > m->button_resume_pos.y &&
        mouse.y < (m->button_resume_pos.y + 160)) {
        m->rect_resume_button.top = 304;
        sfSprite_setTextureRect(m->sprite_button_resume,
        m->rect_resume_button);
        sfSprite_setPosition(m->sprite_button_resume,
        m->button_resume_pos);
        update_version_play(m, main);
    } else {
        m->rect_resume_button.top = 152;
        sfSprite_setTextureRect(m->sprite_button_resume,
        m->rect_resume_button);
        sfSprite_setPosition(m->sprite_button_resume,
        m->button_resume_pos);
    }
}

main_menu *click_button_resume3(main_menu *m, sfRenderWindow *window,
struct rpg_s *main, sfVector2i mouse)
{
    if ((m->version == 4) &&
    mouse.x > m->button_resume_pos.x &&
    mouse.x < (m->button_resume_pos.x + 160) &&
        mouse.y > m->button_resume_pos.y &&
        mouse.y < (m->button_resume_pos.y + 160)) {
        m->rect_resume_button.top = 304;
        sfSprite_setTextureRect(m->sprite_button_resume,
        m->rect_resume_button);
        sfSprite_setPosition(m->sprite_button_resume,
        m->button_resume_pos);
        read_save_game(main);
    } else {
        m->rect_resume_button.top = 152;
        sfSprite_setTextureRect(m->sprite_button_resume,
        m->rect_resume_button);
        sfSprite_setPosition(m->sprite_button_resume,
        m->button_resume_pos);
    }
}

main_menu *click_button_resume_ingame(main_menu *m, sfRenderWindow *window,
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
    click_button_resume3(m, window, main, mouse);
    return m;
}

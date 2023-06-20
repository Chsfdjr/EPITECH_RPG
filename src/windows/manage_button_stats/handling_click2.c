/*
** EPITECH PROJECT, 2023
** handling
** File description:
** click2
*/

#include "../../../include/rpg.h"

void update_version_play(main_menu *m, struct rpg_s *main)
{
    m->version = 2;
    m->old_version = 0;
    m->is_display = sfFalse;
    main->have_played = sfTrue;
}

void update_version_settings(struct rpg_s *main)
{
    int v = main->menu_pt->version;
    main->sett->old_oldversion = main->menu_pt->old_version;
    main->menu_pt->version = 1;
    main->menu_pt->old_version = v;
    main->menu_pt->is_display = sfFalse;
}

void update_version_quit(main_menu *m)
{
    if (m->version == 0 || m->version == 7 || m->version == 9) {
        m->is_quit_click = sfTrue;
    }
    if (m->version == 4) {
        m->version = 0;
        m->old_version = 4;
    }
}

void update_version_help(struct rpg_s* main)
{
    int v = main->menu_pt->version;
    if (main->menu_pt->old_version != 6)
        main->sett->old_oldversion = main->menu_pt->old_version;
    main->menu_pt->version = 6;
    main->menu_pt->old_version = v;
}

struct rpg_s *click_button_quit_game_over(struct rpg_s *main,
sfRenderWindow *window)
{
    sfVector2i s = sfMouse_getPositionRenderWindow(window);
    if ((main->menu_pt->version == 7 || main->menu_pt->version == 9) &&
        s.x > main->game_ov->button_quit_pos.x && s.x <
        (main->game_ov->button_quit_pos.x + 160) &&
        s.y > main->game_ov->button_quit_pos.y && s.y <
        (main->game_ov->button_quit_pos.y + 160)) {
        main->game_ov->rect_quit_button.top = 153;
        sfSprite_setTextureRect(main->game_ov->sprite_button_quit,
        main->game_ov->rect_quit_button);
        sfSprite_setPosition(main->game_ov->sprite_button_quit,
        main->game_ov->button_quit_pos);
        update_version_quit(main->menu_pt);
    } else {
        main->game_ov->rect_quit_button.top = 310;
        sfSprite_setTextureRect(main->game_ov->sprite_button_quit,
        main->game_ov->rect_quit_button);
        sfSprite_setPosition(main->game_ov->sprite_button_quit,
        main->game_ov->button_quit_pos);
    }
    return main;
}

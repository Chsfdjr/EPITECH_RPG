/*
** EPITECH PROJECT, 2023
** click settings
** File description:
** 3
*/

#include "../../../../include/rpg.h"

struct rpg_s *click_sett_sound2(struct rpg_s *main, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (main->menu_pt->version == 1 &&
    mouse.x > main->sett->sound_pos2.x &&
    mouse.x < (main->sett->sound_pos2.x + 160) &&
    mouse.y > main->sett->sound_pos2.y &&
        mouse.y < (main->sett->sound_pos2.y + 160)) {
        main->sett->rect_sound2.top = 153;
        sfSprite_setTextureRect(main->sett->sprite_sound2,
        main->sett->rect_sound2);
        sfSprite_setPosition(main->sett->sprite_sound2,
        main->sett->sound_pos2);
        sett_no_sound2(main);
    } else {
        main->sett->rect_sound2.top = 310;
        sfSprite_setTextureRect(main->sett->sprite_sound2,
        main->sett->rect_sound2);
        sfSprite_setPosition(main->sett->sprite_sound2,
        main->sett->sound_pos2);
    }
    return main;
}

void sett_no_volume2(struct rpg_s *main)
{
    if (main->menu_pt->old_version == 4 || main->menu_pt->version == 4) {
            sfMusic_setVolume(main->sett->music_cave, 0.0);
        for (int i = 0 ; i < 3 ; i++)
        sfMusic_setVolume(main->taunt[i], 0.0);
    }
}

void sett_old_volume2(struct rpg_s *main)
{
    if (main->menu_pt->old_version == 4 || main->menu_pt->version == 4) {
            sfMusic_setVolume(main->sett->music_cave, main->sett->volume);
            for (int i = 0 ; i < 3 ; i++)
        sfMusic_setVolume(main->taunt[i], main->sett->volume_sound);
    }
}

void sett_no_sound2(struct rpg_s *main)
{
    sfVector2f newposbar = {701.f, 475.f};
    if (main->sett->no_sound_audio == sfFalse) {
        main->sett->pos_bar2 =
        sfRectangleShape_getPosition(main->sett->soundbar2);
        main->sett->old_volume_sound = main->sett->volume_sound;
        main->sett->volume_sound = 0.0;
        sett_no_volume2(main);
        main->sett->no_sound_audio = sfTrue;
        sfRectangleShape_setPosition(main->sett->soundbar2, newposbar);
    } else if (main->sett->no_sound_audio == sfTrue) {
        main->sett->volume_sound = main->sett->old_volume_sound;
        sett_old_volume2(main);
        main->sett->no_sound_audio = sfFalse;
        sfRectangleShape_setPosition(main->sett->soundbar2,
        main->sett->pos_bar2);
    }
}

void update_chang_win(struct rpg_s *main)
{
    sfSprite_setTextureRect(main->sett->sprite_window,
    main->sett->rect_window);
    sfSprite_setPosition(main->sett->sprite_window,
    main->sett->window_pos);
    main->change_win = sfTrue;
    change_screen(main);
}

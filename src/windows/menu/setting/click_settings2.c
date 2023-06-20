/*
** EPITECH PROJECT, 2023
** click_settings
** File description:
** 2
*/

#include "../../../../include/rpg.h"

void update_version(struct rpg_s* main)
{
    int v = main->menu_pt->version;
    if (main->menu_pt->old_version != 6)
        main->menu_pt->version = main->menu_pt->old_version;
    else
        main->menu_pt->version = main->sett->old_oldversion;
    main->menu_pt->old_version = v;
    main->menu_pt->is_display = sfTrue;
}

void sett_no_volume(struct rpg_s *main)
{
    if (main->menu_pt->old_version == 4) {
            sfMusic_setVolume(main->sett->music_play, 0.0);
    }
}

void sett_old_volume(struct rpg_s *main)
{
    if (main->menu_pt->old_version == 4)
        sfMusic_setVolume(main->sett->music_play, main->sett->volume);
    if (main->menu_pt->old_version == 0)
        sfMusic_setVolume(main->sett->music_bckg, main->sett->volume);
}

void sett_no_sound(struct rpg_s *main)
{
    sfVector2f newposbar = {701.f, 275.f};
    if (main->sett->no_sound == sfFalse) {
        main->sett->pos_bar =
        sfRectangleShape_getPosition(main->sett->soundbar);
        main->sett->old_volume = main->sett->volume;
        main->sett->volume = 0.0;
        sfMusic_setVolume(main->sett->music_bckg, 0.0);
        sett_no_volume(main);
        main->sett->no_sound = sfTrue;
        sfRectangleShape_setPosition(main->sett->soundbar, newposbar);
    } else if (main->sett->no_sound == sfTrue) {
        main->sett->volume = main->sett->old_volume;
        sett_old_volume(main);
        main->sett->no_sound = sfFalse;
        sfRectangleShape_setPosition(main->sett->soundbar, main->sett->pos_bar);
    }
}

/*
** EPITECH PROJECT, 2023
** init struct
** File description:
** 2
*/

#include "../../../include/rpg.h"

void window_init3(main_menu *menu_pt, struct rpg_s* main)
{
    main->foxi->key_press = sfFalse;
    main->en->hp_wolf = 100;
    main->foxi->damage = 10;
    main->foxi->hp = 100;
}

void window_init4(main_menu *menu_pt, struct rpg_s* main)
{
    sfClock_restart(main->game1->clock_jean);
    sfClock_restart(main->en->clock_wolf);
    sfClock_restart(main->foxi->clock_mvt_foxi);
    sfClock_restart(main->foxi->clock_dance);
    sfClock_restart(main->en->clock_att_wolf);
    sfClock_restart(main->en->clock_crow);
    create_heart(main);
    create_exp(main);
}

void init_main_menu3(main_menu *menu_pt, struct rpg_s* main)
{
    create_settings_main_text(main);
    create_settings_quit_text(main);
    create_settings_window_text(main);
    create_settings_audio_text(main);
    create_sett_soundbar(main);
    create_music_play(main);
    create_heart(main);
    create_exp(main);
    create_text_load(main);
    create_text_invent(main);
    create_text_igmenu(main);
    create_wolf(main);
    main->is_fullscreen = sfTrue;
    main->invent->is_display = sfFalse;
    create_collision_map1(main->hidden_map);
    create_collision_map2(main->hidden_map);
    create_settings_max_music(main);
    create_crow(main);
    create_subtitles2(main);
}

void init_main_menu4(main_menu *menu_pt, struct rpg_s* main)
{
    sfClock_restart(main->game1->clock_jean);
    main->en->clock_wolf = sfClock_create();
    sfClock_restart(main->en->clock_wolf);
    main->en->clock_att_wolf = sfClock_create();
    sfClock_restart(main->en->clock_att_wolf);
    main->en->clock_crow = sfClock_create();
    sfClock_restart(main->en->clock_crow);
    main->foxi->clock_mvt_foxi = sfClock_create();
    sfClock_restart(main->foxi->clock_mvt_foxi);
    main->foxi->clock_dance = sfClock_create();
    sfClock_restart(main->foxi->clock_dance);
    create_settings_min_music(main);
    create_rect_sound_min(main);
    create_rect_sound_max(main);
    create_cheeses_sprite(main);
    create_sett_soundbar2(main);
    create_sett_sound2(main);
    create_text_dps(main);
    create_text_pv(main);
    create_subtitles1(main);
}

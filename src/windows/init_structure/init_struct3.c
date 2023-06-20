/*
** EPITECH PROJECT, 2023
** init
** File description:
** struct
*/

#include "../../../include/rpg.h"

void window_init6(main_menu *menu_pt, struct rpg_s* main)
{
    main->sett->old_oldversion = 0;
    main->foxi->exp = 10;
    main->foxi->level = 1;
    main->foxi->speed = 5;
}

void window_init5(main_menu *menu_pt, struct rpg_s* main)
{
    create_wolf(main);
    main->foxi->fox_is_hit = sfFalse;
    main->foxi->fox_attack = sfFalse;
    main->game1->yellow_zone = sfFalse;
    sfClock_restart(main->en->clock_att_crow);
    main->en->crow_is_hit = sfFalse;
    main->en->hp_crow = 300;
    window_init6(main->menu_pt, main);
    create_exp_text(main);
}

void init_main_menu6(main_menu *menu_pt, struct rpg_s* main)
{
    create_background_roomboss(main);
    create_button_inventory(main->menu_pt);
    main->en->clock_att_crow = sfClock_create();
    sfClock_restart(main->en->clock_att_crow);
    main->en->crow_is_hit = sfFalse;
    main->en->hp_crow = 300;
    create_button_help_settings(main->menu_pt);
    main->sett->old_oldversion = 0;
    create_bomb(main);
    create_exp_text(main);
    create_megacheese(main);
    create_text_htp(main);
    create_save_text(main);
    create_text_noise(main);
    create_text_speed(main);
    main->foxi->exp = 10;
    main->foxi->level = 1;
    createwin(main);
    main->foxi->speed = 5;
    main->change_win = sfFalse;
}

void init_main_menu5(main_menu *menu_pt, struct rpg_s* main)
{
    create_subtitles3(main);
    create_subtitles4(main);
    create_subtitles5(main);
    create_subtitles6(main);
    main->sett->no_sound_audio = sfFalse;
    main->en->wolf_is_hit = sfFalse;
    main->en->hp_wolf = 100;
    main->foxi->hp = 100;
    main->foxi->damage = 10;
    create_button_help(main->menu_pt);
    main->foxi->fox_is_hit = sfFalse;
    main->foxi->fox_attack = sfFalse;
    create_powder(main);
    create_fire(main);
    create_background_help(main->menu_pt);
    create_gameover(main);
    create_button_return(main->menu_pt);
    main->game1->yellow_zone = sfFalse;
    init_taunt(main);
    init_main_menu6(main->menu_pt, main);
}

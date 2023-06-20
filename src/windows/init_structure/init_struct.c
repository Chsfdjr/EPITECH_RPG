/*
** EPITECH PROJECT, 2023
** init struc
** File description:
** struc
*/

#include "../../../include/rpg.h"

void window_init2(main_menu *menu_pt, struct rpg_s* main)
{
    main->invent->escape = sfFalse;
    main->menu_pt->is_quit_click = sfFalse;
    main->menu_pt->is_quit_click_ingame = sfFalse;
    init_clock_foxi(main);
}

void window_init(main_menu *menu_pt, struct rpg_s* main)
{
    create_view(main);
    create_view2(main);
    create_foxi(main->foxi);
    window_init2(main->menu_pt, main);
    window_init3(main->menu_pt, main);
    window_init4(main->menu_pt, main);
    window_init5(main->menu_pt, main);
}

void init_main_menu2(main_menu *menu_pt, struct rpg_s* main)
{
    menu_pt->version = 0;
    menu_pt->old_version = 0;
    menu_pt->is_display = sfTrue;
    main->invent->escape = sfFalse;
    main->menu_pt->is_quit_click = sfFalse;
    main->menu_pt->is_quit_click_ingame = sfFalse;
    create_music_play2(main);
    create_music_play3(main);
    main->game1->blue_zone = 0;
    main->game1->clock_jean = sfClock_create();
    create_sett_no(main);
    create_sett_sound(main);
    create_sett_window(main);
    create_foxi_invent_sprite(main);
    create_inventory_sprite(main);
    create_button_save(menu_pt);
    main->have_played = sfFalse;
    main->game1->room = 2;
    create_cinematics(main);
}

void init_main_menu(main_menu *menu_pt, struct rpg_s* main)
{
    create_background_start(menu_pt);
    create_button_start(menu_pt);
    create_button_resume(menu_pt);
    create_button_settings(menu_pt);
    create_button_quit(menu_pt);
    create_main_text(menu_pt);
    create_play_text(menu_pt);
    create_resume_text(menu_pt);
    create_settings_text(menu_pt);
    create_quit_text(menu_pt);
    create_background_map(main);
    create_view(main);
    create_view2(main);
    create_foxi(main->foxi);
    init_clock_foxi(main);
    init_main_menu2(main->menu_pt, main);
    init_main_menu3(main->menu_pt, main);
    init_main_menu4(main->menu_pt, main);
    init_main_menu5(main->menu_pt, main);
}

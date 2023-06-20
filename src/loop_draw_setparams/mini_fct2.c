/*
** EPITECH PROJECT, 2023
** mini fct
** File description:
** loops
*/

#include "../../include/rpg.h"

void minifct5(sfRenderWindow *w, sfEvent event, struct rpg_s *m)
{
    sfRenderWindow_setView(w, m->invent->view);
    sfRenderWindow_clear(w, sfColor_fromRGB(7, 21, 30));
    events(w, event, m);
    sfRenderWindow_drawSprite(w, m->menu_pt->sprite_background_start, NULL);
    sfRenderWindow_drawText(w, m->menu_pt->text_settings_menu, NULL);
    sfRenderWindow_drawSprite(w, m->menu_pt->sprite_button_settings, NULL);
    sfRenderWindow_drawSprite(w, m->menu_pt->sprite_button_resume, NULL);
    sfRenderWindow_drawText(w, m->menu_pt->text_quit_menu, NULL);
    sfRenderWindow_drawText(w, m->menu_pt->text_load, NULL);
    sfRenderWindow_drawText(w, m->menu_pt->text_invent, NULL);
    sfRenderWindow_drawText(w, m->menu_pt->text_igmenu, NULL);
    sfRenderWindow_drawText(w, m->menu_pt->text_save, NULL);
    sfRenderWindow_drawSprite(w, m->menu_pt->sprite_button_quit, NULL);
    sfRenderWindow_drawSprite(w, m->menu_pt->sprite_button_inventory, NULL);
    sfRenderWindow_drawSprite(w, m->menu_pt->sprite_button_save, NULL);
}

void minifct6_2e(sfRenderWindow *window, sfEvent event, struct rpg_s *main)
{
    sfRenderWindow_drawSprite(window,
    main->game1->sprite_map, NULL);
    sfRenderWindow_drawSprite(window,
    main->foxi->sprite_heart, NULL);
    sfRenderWindow_drawSprite(window,
    main->foxi->sprite_exp, NULL);
    sfRenderWindow_drawSprite(window,
    main->en->wolf_sprite, NULL);
    display_foxi(window, main->foxi);
    draw_subt(main);
    sfRenderWindow_drawText(window, main->foxi->text_exp, NULL);
    if (main->game1->time_jean.microseconds + 66000000 <=
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds)
        main->menu_pt->version = 2;
}

void minifct6(sfRenderWindow *window, sfEvent event, struct rpg_s *main)
{
    float vol;
    vol = main->sett->volume;
        if (vol > 50.0)
            vol -= 50.0;
        else
            vol = 10.0;
    sfRenderWindow_clear(window, sfColor_fromRGB(7, 21, 30));
    sfRenderWindow_setView(window, main->game1->view);
    events(window, event, main);
    sfMusic_setVolume(main->sett->music_play, vol);
        sfMusic_setVolume(main->sett->music_cave, vol);
        sfMusic_setVolume(main->sett->voice_jean, main->sett->volume);
    if (main->game1->blue_zone == 1) {
        sfMusic_play(main->sett->voice_jean);
        main->game1->blue_zone = 2;
    }
    minifct6_2e(main->window, event, main);
}

void minifct3_2e(sfRenderWindow *window, sfEvent event, struct rpg_s *m)
{
    display_foxi(window, m->foxi);
    draw_game(m);
    draw_game_object(m);
    if (m->en->hp_wolf > 0) {
        wolf_attack(m, event);
        check_attack_wolf(m);
        sfRenderWindow_drawSprite(window,
        m->en->wolf_sprite, NULL);
    }
    if (m->foxi->hp == 0) {
        m->menu_pt->version = 7;
    }
    cheese_degats(m);
    if (m->game1->blue_zone == 1) {
        m->game1->time_jean = sfClock_getElapsedTime(m->game1->clock_jean);
        m->menu_pt->version = 5;
    }
    update_xp_level(m);
    minifct3_3e(window, event, m);
}

void minifct7(sfRenderWindow *w, sfEvent event, struct rpg_s *m)
{
    sfRenderWindow_setView(w, m->invent->view);
    sfRenderWindow_clear(w, sfColor_fromRGB(7, 21, 30));
    events(w, event, m);
    sfRenderWindow_drawSprite(w, m->menu_pt->sprite_background_help, NULL);
    sfRenderWindow_drawSprite(w, m->menu_pt->sprite_button_return, NULL);
}

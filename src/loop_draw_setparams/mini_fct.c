/*
** EPITECH PROJECT, 2023
** mini
** File description:
** fct
*/

#include "../../include/rpg.h"

void minifct(sfRenderWindow *window, sfEvent event, struct rpg_s *main)
{
    sfRenderWindow_clear(window, sfColor_fromRGB(7, 21, 30));
    events(window, event, main);
    sfMusic_setVolume(main->sett->music_play, 0.0);
    sfMusic_setVolume(main->sett->music_cave, 0.0);
    sfMusic_setVolume(main->sett->music_bckg, main->sett->volume);
    display_main_menu(window, main->menu_pt);
    sfRenderWindow_drawText(window, main->sett->text_htp, NULL);
}

void minifct2(sfRenderWindow *window, sfEvent event, struct rpg_s *main)
{
    sfRenderWindow_clear(window, sfColor_fromRGB(7, 21, 30));
    events(window, event, main);
    sfRenderWindow_drawSprite(window,
    main->menu_pt->sprite_background_start, NULL);
    sfRenderWindow_drawSprite(window, main->sett->sprite_no, NULL);
    sfRenderWindow_drawSprite(window, main->sett->sprite_sound, NULL);
    sfRenderWindow_drawSprite(window, main->sett->sprite_sound2, NULL);
    sfRenderWindow_drawSprite(window, main->sett->sprite_window, NULL);
    sfRenderWindow_drawText(window, main->sett->text_big_settings, NULL);
    sfRenderWindow_drawText(window, main->sett->text_quit, NULL);
    sfRenderWindow_drawText(window, main->sett->text_audio, NULL);
    sfRenderWindow_drawText(window, main->sett->text_window, NULL);
    sfRenderWindow_drawText(window, main->sett->music_max, NULL);
    sfRenderWindow_drawText(window, main->sett->music_min, NULL);
    sfRenderWindow_drawRectangleShape(window, main->sett->soundbar, NULL);
    sfRenderWindow_drawRectangleShape(window, main->sett->soundbar2, NULL);
    sfRenderWindow_drawRectangleShape(window, main->sett->rect_max, NULL);
    sfRenderWindow_drawRectangleShape(window, main->sett->rect_min, NULL);
    minifct2_2e(window, event, main);
}

void minifct3(sfRenderWindow *window, sfEvent event, struct rpg_s *m)
{
    float vol;
    sfMusic_setVolume(m->sett->music_play, m->sett->volume);
    sfMusic_setVolume(m->sett->music_cave, m->sett->volume_sound);
    sfMusic_setVolume(m->sett->music_bckg, 0.0);
    sfRenderWindow_clear(window, sfColor_fromRGB(7, 21, 30));
    events(window, event, m);
    sfRenderWindow_setView(window, m->game1->view);
    sfRenderWindow_drawSprite(window,
    m->game1->sprite_map, NULL);
    minifct3_2e(m->window, event, m);

}

void minifct4(sfRenderWindow *window, sfEvent event, struct rpg_s *main)
{
    sfRenderWindow_clear(window, sfColor_fromRGB(7, 21, 30));
    events(window, event, main);
    sfRenderWindow_setView(window, main->invent->view);
    sfRenderWindow_drawSprite(window,
    main->menu_pt->sprite_background_start, NULL);
    sfRenderWindow_drawSprite(window, main->invent->sprite_invent_foxi, NULL);
    sfRenderWindow_drawSprite(window, main->invent->sprite_inventory, NULL);
    sfRenderWindow_drawText(window, main->invent->text_dps, NULL);
    sfRenderWindow_drawText(window, main->invent->text_pv, NULL);
    sfRenderWindow_drawText(window, main->invent->text_speed, NULL);
    draw_invent(main);
    draw_invent_object(main);
}

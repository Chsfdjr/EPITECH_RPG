/*
** EPITECH PROJECT, 2023
** minifct
** File description:
** 4
*/

#include "../../include/rpg.h"

void minifct9_2e(sfRenderWindow *w, sfEvent event, struct rpg_s *m)
{
    display_foxi(w, m->foxi);
    if (m->en->hp_crow > 0) {
        crow_attack(m, event);
        check_attack_crow(m);
        sfRenderWindow_drawSprite(w,
        m->en->craw_sprite, NULL);
    }
    sfRenderWindow_drawText(w, m->foxi->text_exp, NULL);
    sfRenderWindow_drawSprite(w,
    m->foxi->sprite_heart, NULL);
    sfRenderWindow_drawSprite(w,
    m->foxi->sprite_exp, NULL);
}

void minifct11_2e(sfRenderWindow *window, sfEvent event, struct rpg_s *main)
{
    draw_cine(main);
    if (main->cinema->time_cine.microseconds + 22000000 <=
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds)
        main->menu_pt->version = 2;
}

void minifct11(sfRenderWindow *window, sfEvent event, struct rpg_s *main)
{
    sfMusic_setVolume(main->sett->music_play, main->sett->volume);
    sfMusic_setVolume(main->sett->music_cave, main->sett->volume_sound);
    sfMusic_setVolume(main->sett->music_bckg, 0.0);
    float vol;
    vol = main->sett->volume;
        if (vol > 50.0)
            vol -= 50.0;
        else
            vol = 10.0;
    sfRenderWindow_clear(window, sfColor_fromRGB(7, 21, 30));
    sfRenderWindow_setView(window, main->invent->view);
    events(window, event, main);
    sfMusic_setVolume(main->sett->music_play, vol);
        sfMusic_setVolume(main->sett->music_cave, vol);
        sfMusic_setVolume(main->sett->voice_jean, main->sett->volume);
    minifct11_2e(main->window, event, main);
}

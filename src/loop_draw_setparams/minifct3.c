/*
** EPITECH PROJECT, 2023
** mini
** File description:
** fct3
*/

#include "../../include/rpg.h"

void minifct8(sfRenderWindow *w, sfEvent event, struct rpg_s *m)
{
    sfMusic_setVolume(m->sett->music_bckg, 0.0);
    sfMusic_setVolume(m->sett->music_play, 0.0);
    sfMusic_setVolume(m->sett->music_cave, 0.0);
    sfMusic_stop(m->sett->music_bckg);
    sfMusic_stop(m->sett->music_play);
    sfMusic_stop(m->sett->music_cave);
    sfRenderWindow_setView(w, m->invent->view);
    sfRenderWindow_clear(w, sfColor_fromRGB(7, 21, 30));
    events(w, event, m);
    sfRenderWindow_drawSprite(w, m->game_ov->sprite, NULL);
    sfRenderWindow_drawSprite(w, m->game_ov->sprite_button_quit, NULL);
    if (m->game_ov->is_music_play == sfFalse) {
        sfMusic_setVolume(m->game_ov->hugo_crow, 1000.0);
        sfMusic_play(m->game_ov->hugo_crow);
        sfMusic_setLoop(m->game_ov->hugo_crow, sfTrue);
        m->game_ov->is_music_play = sfTrue;
    }
}

void minifct9(sfRenderWindow *w, sfEvent event, struct rpg_s *m)
{
    sfRenderWindow_setView(w, m->game1->view);
    sfRenderWindow_clear(w, sfColor_fromRGB(7, 21, 30));
    events(w, event, m);
    sfRenderWindow_drawSprite(w, m->r_boss->sprite, NULL);
    if (m->invent->megacheese->fox_have_it == sfFalse) {
        sfRenderWindow_drawSprite(m->window,
    m->invent->megacheese->sprite_cheese, NULL);
    }
    if (m->foxi->hp == 0) {
        m->menu_pt->version = 7;
    }
    if (m->invent->megacheese->fox_have_it == sfTrue) {
        m->menu_pt->version = 9;
    }
    minifct9_2e(w, event, m);
}

void minifct3_3e(sfRenderWindow *window, sfEvent event, struct rpg_s *m)
{
    if (m->game1->blue_zone > 2 &&
    m->invent->powder->fox_have_it == sfTrue &&
    m->invent->fire->fox_have_it == sfTrue &&
    m->invent->bomb->fox_have_it == sfFalse) {
        m->invent->bomb->fox_have_it = sfTrue;
        m->game1->blue_zone += 1;
    }
    if (m->game1->yellow_zone == sfTrue) {
        m->menu_pt->version = 8;
        m->menu_pt->old_version = 2;
        m->game1->room = 8;
    }
    sfRenderWindow_drawText(window, m->foxi->text_exp, NULL);
    sfRenderWindow_drawSprite(window,
    m->foxi->sprite_heart, NULL);
    sfRenderWindow_drawSprite(window,
    m->foxi->sprite_exp, NULL);
}

void minifct10(sfRenderWindow *w, sfEvent event, struct rpg_s *m)
{
    sfMusic_setVolume(m->sett->music_bckg, 0.0);
    sfMusic_setVolume(m->sett->music_play, 0.0);
    sfMusic_setVolume(m->sett->music_cave, 0.0);
    sfMusic_stop(m->sett->music_bckg);
    sfMusic_stop(m->sett->music_play);
    sfMusic_stop(m->sett->music_cave);
    sfRenderWindow_setView(w, m->invent->view);
    sfRenderWindow_clear(w, sfColor_fromRGB(7, 21, 30));
    events(w, event, m);
    sfRenderWindow_drawSprite(w, m->win->sprite, NULL);
    sfRenderWindow_drawSprite(w, m->win->sprite_button_quit, NULL);
    if (m->game_ov->is_music_play == sfFalse) {
        sfMusic_setVolume(m->game_ov->hugo_crow, 1000.0);
        sfMusic_play(m->game_ov->hugo_crow);
        sfMusic_setLoop(m->game_ov->hugo_crow, sfTrue);
        m->game_ov->is_music_play = sfTrue;
    }
}

void minifct2_2e(sfRenderWindow *window, sfEvent event, struct rpg_s *main)
{
    sfRenderWindow_drawText(window, main->sett->text_noise, NULL);
    sfRenderWindow_drawText(window, main->sett->text_htp, NULL);
    sfRenderWindow_drawSprite(window, main->menu_pt->sprite_button_sett_help,
    NULL);
}

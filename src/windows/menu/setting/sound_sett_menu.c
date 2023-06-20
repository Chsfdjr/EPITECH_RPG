/*
** EPITECH PROJECT, 2023
** sound sett menu
** File description:
** rpg
*/

#include "../../../../include/rpg.h"

void create_sett_soundbar(struct rpg_s *main)
{
    sfVector2f size_bar;
    size_bar.x = 200;
    size_bar.y = 50;
    main->sett->pos_bar.x = 1300;
    main->sett->pos_bar.y = 275;
    main->sett->soundbar = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(main->sett->soundbar, 10.0);
    sfRectangleShape_setOutlineColor(main->sett->soundbar,
    sfColor_fromRGB(23, 0, 47));
    sfRectangleShape_setFillColor(main->sett->soundbar,
    sfColor_fromRGB(195, 0, 211));
    sfRectangleShape_setSize(main->sett->soundbar, size_bar);
    sfRectangleShape_setPosition(main->sett->soundbar, main->sett->pos_bar);
    main->sett->volume = 100.0;
    main->sett->no_sound = sfFalse;
    main->sett->old_pos.x = 1300;
    main->sett->old_pos.y = 275;
    main->sett->music_bckg = sfMusic_createFromFile("assets/MainMenu.ogg");
    create_sett_soundbar_2e(main);
}

void is_sound_bar_click(struct rpg_s *main, sfEvent event)
{
    if (event.mouseButton.button == sfMouseLeft)
        handle_moving_soundbar(main);
}

void display_sound_bar(struct rpg_s *m)
{
    sfRenderWindow_drawSprite(m->window, m->sett->sprite_no, NULL);
    sfRenderWindow_drawSprite(m->window, m->sett->sprite_sound, NULL);
    sfRenderWindow_drawSprite(m->window, m->sett->sprite_sound2, NULL);
    sfRenderWindow_drawSprite(m->window, m->sett->sprite_window, NULL);
    sfRenderWindow_drawText(m->window, m->sett->text_big_settings,
    NULL);
    sfRenderWindow_drawText(m->window, m->sett->text_quit, NULL);
    sfRenderWindow_drawText(m->window, m->sett->text_audio, NULL);
    sfRenderWindow_drawText(m->window, m->sett->text_window, NULL);
    sfRenderWindow_drawRectangleShape(m->window, m->sett->soundbar,
    NULL);
    sfRenderWindow_drawRectangleShape(m->window, m->sett->soundbar2,
    NULL);
    sfRenderWindow_drawText(m->window, m->sett->music_max, NULL);
    sfRenderWindow_drawText(m->window, m->sett->music_min, NULL);
    sfRenderWindow_drawRectangleShape(m->window, m->sett->rect_max, NULL);
    sfRenderWindow_drawRectangleShape(m->window, m->sett->rect_min, NULL);
    display_sound_bar2(m);
    sfRenderWindow_display(m->window);
}

void handle_moving2(struct rpg_s *m, sfVector2f bar_position)
{
    if (bar_position.x < 700)
        bar_position.x = 701;
    if (bar_position.x > 1500)
        bar_position.x = 1499;
    sfRectangleShape_setPosition(m->sett->soundbar,
    (sfVector2f){bar_position.x, bar_position.y});
    sfRenderWindow_clear(m->window, sfColor_fromRGB(7, 21, 30));
    sfRenderWindow_drawSprite(m->window,
    m->menu_pt->sprite_background_start, NULL);
    display_sound_bar(m);
    m->sett->volume = (bar_position.x - 700) / 8;
    sfMusic_setVolume(m->sett->music_bckg, m->sett->volume);
    if (m->menu_pt->old_version == 4)
        sfMusic_setVolume(m->sett->music_play, m->sett->volume);
}

void handle_moving_soundbar(struct rpg_s *m)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(m->window);
    sfVector2f bar_position =
    sfRectangleShape_getPosition(m->sett->soundbar);
    sfFloatRect bounds =
    sfRectangleShape_getGlobalBounds(m->sett->soundbar);
    if (m->menu_pt->version == 1 && m->sett->no_sound == sfFalse &&
    sfFloatRect_contains(&bounds, mouse_position.x, mouse_position.y)) {
        sfVector2f lim_y = {mouse_position.x - bar_position.x, 0};
        while (sfMouse_isButtonPressed(sfMouseLeft) && bar_position.x >= 700 &&
        bar_position.x <= 1500) {
            mouse_position = sfMouse_getPositionRenderWindow(m->window);
            bar_position.x = mouse_position.x - lim_y.x;
            handle_moving2(m, bar_position);
        }
    }
}

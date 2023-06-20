/*
** EPITECH PROJECT, 2023
** sound sett menu2
** File description:
** rpg
*/

#include "../../../../include/rpg.h"

void create_sett_soundbar2(struct rpg_s *main)
{
    sfVector2f size_bar;
    size_bar.x = 200;
    size_bar.y = 50;
    main->sett->pos_bar2.x = 1300;
    main->sett->pos_bar2.y = 475;
    main->sett->soundbar2 = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(main->sett->soundbar2, 10.0);
    sfRectangleShape_setOutlineColor(main->sett->soundbar2,
    sfColor_fromRGB(23, 0, 47));
    sfRectangleShape_setFillColor(main->sett->soundbar2,
    sfColor_fromRGB(195, 0, 211));
    sfRectangleShape_setSize(main->sett->soundbar2, size_bar);
    sfRectangleShape_setPosition(main->sett->soundbar2, main->sett->pos_bar2);
    main->sett->volume_sound = 100.0;
    main->sett->old_volume = 100.0;
    main->sett->old_volume_sound = 100.0;
    main->sett->no_sound_audio = sfFalse;
    main->sett->old_pos_audio.x = 1300;
    main->sett->old_pos_audio.y = 475;
}

void handle_moving3(struct rpg_s *m, sfVector2f bar_position)
{
    if (bar_position.x < 700)
        bar_position.x = 701;
    if (bar_position.x > 1500)
        bar_position.x = 1499;
    sfRectangleShape_setPosition(m->sett->soundbar2,
    (sfVector2f){bar_position.x, bar_position.y});
    sfRenderWindow_clear(m->window, sfColor_fromRGB(7, 21, 30));
    sfRenderWindow_drawSprite(m->window,
    m->menu_pt->sprite_background_start, NULL);
    display_sound_bar(m);
    m->sett->volume_sound = (bar_position.x - 700) / 8;
    if (m->menu_pt->old_version == 4 || m->menu_pt->version == 4)
        sfMusic_setVolume(m->sett->music_cave, m->sett->volume_sound);
}

void handle_moving_soundbar2(struct rpg_s *m)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(m->window);
    sfVector2f bar_position =
    sfRectangleShape_getPosition(m->sett->soundbar2);
    sfFloatRect bounds =
    sfRectangleShape_getGlobalBounds(m->sett->soundbar2);
    if (m->menu_pt->version == 1 && m->sett->no_sound_audio == sfFalse &&
    sfFloatRect_contains(&bounds, mouse_position.x, mouse_position.y)) {
        sfVector2f lim_y = {mouse_position.x - bar_position.x, 0};
        while (sfMouse_isButtonPressed(sfMouseLeft) && bar_position.x >= 700 &&
        bar_position.x <= 1500) {
            mouse_position = sfMouse_getPositionRenderWindow(m->window);
            bar_position.x = mouse_position.x - lim_y.x;
            handle_moving3(m, bar_position);
        }
    }
}

void is_sound_bar2_click(struct rpg_s *main, sfEvent event)
{
    if (event.mouseButton.button == sfMouseLeft)
        handle_moving_soundbar2(main);
}

void create_sett_soundbar_2e(struct rpg_s *main)
{
    sfMusic_setVolume(main->sett->music_bckg, main->sett->volume);
    sfMusic_play(main->sett->music_bckg);
    sfMusic_setLoop(main->sett->music_bckg, sfTrue);
}

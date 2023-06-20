/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** open_window
*/

#include "../../include/rpg.h"

sfRenderWindow *events(sfRenderWindow *w, sfEvent event,
struct rpg_s *m)
{
    while (sfRenderWindow_pollEvent(m->window, &event)) {
        if (m->menu_pt->is_quit_click == sfTrue && (m->menu_pt->version == 0 ||
        m->menu_pt->version == 7 || m->menu_pt->version == 9))
            sfRenderWindow_close(m->window);
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(m->window);
        if (event.type == sfEvtMouseMoved)
            all_hover_menu(m->menu_pt, m->window, m);
        if (event.type == sfEvtMouseButtonPressed) {
            all_click_menu(m->menu_pt, m->window, m);
            is_sound_bar_click(m, event);
            is_sound_bar2_click(m, event);
        }
        if (event.type == sfEvtKeyPressed) {
            m->foxi->key_press = sfTrue;
            event_ispressed(event, m);
        }
        if (event.type == sfEvtKeyReleased)
            m->foxi->key_press = sfFalse;
    }
}

void destroy_all(main_menu *menu_pt, player *foxi, struct rpg_s *main)
{
    destroy_main_menu(menu_pt, main);
    destroy_foxi(foxi);
    free(foxi);
    free(menu_pt);
}

void my_rpg(void)
{
    struct rpg_s *main = malloc(sizeof(struct rpg_s));
    main->menu_pt = malloc(sizeof(main_menu));
    main->foxi = malloc(sizeof(player));
    main->sett = malloc(sizeof(sett));
    main->game1 = malloc(sizeof(map1));
    main->invent = malloc(sizeof(invent));
    main->hidden_map = malloc(sizeof(collision));
    main->en = malloc(sizeof(ennemys));
    main->r_boss = malloc(sizeof(boss));
    sfEvent event;
    cursor mouse_cursor = init_cursor("assets/tale.png");
    createwindow(main);
    init_delay(main);
    init_main_menu(main->menu_pt, main);
    while (sfRenderWindow_isOpen(main->window)) {
        loops(main->window, event, main, mouse_cursor);
        sfRenderWindow_display(main->window);
    }
    destroy_all(main->menu_pt, main->foxi, main);
}

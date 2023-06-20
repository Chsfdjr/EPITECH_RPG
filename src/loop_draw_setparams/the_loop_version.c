/*
** EPITECH PROJECT, 2023
** the loop
** File description:
** version
*/

#include "../../include/rpg.h"

void loops3(sfRenderWindow *window,sfEvent event, struct rpg_s *main,
cursor mouse_cursor)
{
    if (main->menu_pt->version == 9) {
            minifct10(window, event, main);
            settarget(mouse_cursor, window, main);
        }
    if (main->menu_pt->version == 10)
        minifct11(window, event, main);
}

void loops2(sfRenderWindow *window,sfEvent event, struct rpg_s *main,
cursor mouse_cursor)
{
    if (main->menu_pt->version == 4) {
        minifct5(window, event, main);
        settarget(mouse_cursor, window, main);
    }
    if (main->menu_pt->version == 5)
            minifct6(window, event, main);
    if (main->menu_pt->version == 6) {
            minifct7(window, event, main);
            settarget(mouse_cursor, window, main);
            }
    if (main->menu_pt->version == 7) {
            minifct8(window, event, main);
            settarget(mouse_cursor, window, main);
        }
    if (main->menu_pt->version == 8)
            minifct9(window, event, main);
    loops3(main->window, event, main, mouse_cursor);
}

void loops(sfRenderWindow *window, sfEvent event, struct rpg_s *main,
cursor mouse_cursor)
{
    if (open("save.txt", O_RDONLY) != -1)
        main->menu_pt->save = sfTrue;
    else
        main->menu_pt->save = sfFalse;
    if (main->menu_pt->version == 0) {
            minifct(window, event, main);
            settarget(mouse_cursor, window, main);
    }
    if (main->menu_pt->version == 1) {
        minifct2(window, event, main);
        settarget(mouse_cursor, window, main);
    }
    if (main->menu_pt->version == 2)
        minifct3(window, event, main);
    if (main->menu_pt->version == 3) {
        minifct4(window, event, main);
        settarget(mouse_cursor, window, main);
    }
    loops2(main->window, event, main, mouse_cursor);
}

void display_sound_bar2(struct rpg_s *m)
{
    sfRenderWindow_drawText(m->window, m->sett->text_noise, NULL);
    sfRenderWindow_drawText(m->window, m->sett->text_htp, NULL);
    sfRenderWindow_drawSprite(m->window, m->menu_pt->sprite_button_sett_help,
    NULL);
}

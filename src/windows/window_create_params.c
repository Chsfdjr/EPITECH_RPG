/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** open_window
*/

#include "../../include/rpg.h"

void set_window_params(sfRenderWindow *window)
{
    sfImage *icone = sfImage_createFromFile("assets/renard_icone.png");
    sfRenderWindow_setFramerateLimit(window, 120);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfRenderWindow_setIcon(window, 79, 84, sfImage_getPixelsPtr(icone));
}

void createwindow(struct rpg_s *main)
{
    sfVideoMode video_mode = {1920, 1080, 32};

    main->window2 = sfRenderWindow_create(video_mode,
    "Renard qui dance", sfResize | sfClose, NULL);
    set_window_params(main->window2);
    sfRenderWindow_setVisible(main->window2, sfFalse);
    main->window = sfRenderWindow_create(video_mode,
    "Renard qui dance", sfResize | sfClose | sfFullscreen, NULL);
    set_window_params(main->window);
}

void swap_window(struct rpg_s *main)
{
    sfRenderWindow *tmp;

    tmp = main->window;
    main->window = main->window2;
    main->window2 = tmp;
}

void change_screen(struct rpg_s *main)
{
    if (sfKeyboard_isKeyPressed(sfKeyF11) == sfTrue ||
    main->change_win == sfTrue) {
        if (main->is_fullscreen == sfTrue) {
            sfRenderWindow_setVisible(main->window, sfFalse);
            swap_window(main);
            main->is_fullscreen = sfFalse;
            sfRenderWindow_setVisible(main->window, sfTrue);
            return;
        }
        if (main->is_fullscreen == sfFalse) {
            sfRenderWindow_setVisible(main->window, sfFalse);
            swap_window(main);
            main->is_fullscreen = sfTrue;
            sfRenderWindow_setVisible(main->window, sfTrue);
            return;
        }
    }
}

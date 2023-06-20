/*
** EPITECH PROJECT, 2023
** game over
** File description:
** fin
*/

#include "../../include/rpg.h"

struct rpg_s *create_background_win(struct rpg_s *main)
{
    main->win = malloc(sizeof(win));
    main->win->texture =
    sfTexture_createFromFile("assets/won.jpg", NULL);
    main->win->sprite = sfSprite_create();
    sfSprite_setTexture(main->win->sprite,
    main->win->texture, sfTrue);
    return main;
}

struct rpg_s *create_button_quit_win(struct rpg_s *main)
{
    main->win->button_quit_pos.x = 880;
    main->win->button_quit_pos.y = 750;
    main->win->texture_button_quit =
    sfTexture_createFromFile("assets/button/OnOff.png", NULL);
    main->win->sprite_button_quit =
    sfSprite_create();
    sfSprite_setTexture(main->win->sprite_button_quit,
    main->win->texture_button_quit, sfTrue);
    sfSprite_setPosition(main->win->sprite_button_quit,
    main->win->button_quit_pos);
    main->win->rect_quit_button.top = 310;
    main->win->rect_quit_button.left = 0;
    main->win->rect_quit_button.width = 160;
    main->win->rect_quit_button.height = 160;
    sfSprite_setTextureRect(main->win->sprite_button_quit,
    main->win->rect_quit_button);
    return main;
}

struct rpg_s *createwin(struct rpg_s *main)
{
    create_background_win(main);
    create_button_quit_win(main);
}

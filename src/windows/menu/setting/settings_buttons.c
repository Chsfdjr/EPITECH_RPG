/*
** EPITECH PROJECT, 2023
** settings button
** File description:
** rpg
*/

#include "../../../../include/rpg.h"

struct rpg_s *create_sett_no(struct rpg_s *main)
{
    main->sett->no_pos.x = 880;
    main->sett->no_pos.y = 875;
    main->sett->texture_no =
    sfTexture_createFromFile("assets/button/No.png", NULL);
    main->sett->sprite_no =
    sfSprite_create();
    sfSprite_setTexture(main->sett->sprite_no,
    main->sett->texture_no, sfTrue);
    sfSprite_setPosition(main->sett->sprite_no,
    main->sett->no_pos);
    main->sett->rect_no.top = 315;
    main->sett->rect_no.left = 0;
    main->sett->rect_no.width = 310;
    main->sett->rect_no.height = 155;
    sfSprite_setTextureRect(main->sett->sprite_no,
    main->sett->rect_no);
    return main;
}

struct rpg_s *create_sett_sound(struct rpg_s *main)
{
    main->sett->sound_pos.x = 500;
    main->sett->sound_pos.y = 200;
    main->sett->texture_sound =
    sfTexture_createFromFile("assets/button/Sound.png", NULL);
    main->sett->sprite_sound =
    sfSprite_create();
    sfSprite_setTexture(main->sett->sprite_sound,
    main->sett->texture_sound, sfTrue);
    sfSprite_setPosition(main->sett->sprite_sound,
    main->sett->sound_pos);
    main->sett->rect_sound.top = 310;
    main->sett->rect_sound.left = 0;
    main->sett->rect_sound.width = 310;
    main->sett->rect_sound.height = 155;
    sfSprite_setTextureRect(main->sett->sprite_sound,
    main->sett->rect_sound);
    return main;
}

struct rpg_s *create_sett_window(struct rpg_s *main)
{
    main->sett->window_pos.x = 500;
    main->sett->window_pos.y = 620;
    main->sett->texture_window =
    sfTexture_createFromFile("assets/button/Menu.png", NULL);
    main->sett->sprite_window =
    sfSprite_create();
    sfSprite_setTexture(main->sett->sprite_window,
    main->sett->texture_window, sfTrue);
    sfSprite_setPosition(main->sett->sprite_window,
    main->sett->window_pos);
    main->sett->rect_window.top = 310;
    main->sett->rect_window.left = 0;
    main->sett->rect_window.width = 310;
    main->sett->rect_window.height = 155;
    sfSprite_setTextureRect(main->sett->sprite_window,
    main->sett->rect_window);
    return main;
}

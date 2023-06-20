/*
** EPITECH PROJECT, 2023
** game over
** File description:
** fin
*/

#include "../../include/rpg.h"

struct rpg_s *create_background_gameover(struct rpg_s *main)
{
    main->game_ov = malloc(sizeof(g_o));
    main->game_ov->texture =
    sfTexture_createFromFile("assets/dead.jpg", NULL);
    main->game_ov->sprite = sfSprite_create();
    sfSprite_setTexture(main->game_ov->sprite,
    main->game_ov->texture, sfTrue);
    return main;
}

void create_music_gamover(struct rpg_s *main)
{
    main->game_ov->hugo_crow = sfMusic_createFromFile("assets/hugocrow.ogg");
    sfMusic_setVolume(main->game_ov->hugo_crow, main->sett->volume_sound);
    main->game_ov->is_music_play = sfFalse;
}

struct rpg_s *create_button_quit_gameover(struct rpg_s *main)
{
    main->game_ov->button_quit_pos.x = 880;
    main->game_ov->button_quit_pos.y = 750;
    main->game_ov->texture_button_quit =
    sfTexture_createFromFile("assets/button/OnOff.png", NULL);
    main->game_ov->sprite_button_quit =
    sfSprite_create();
    sfSprite_setTexture(main->game_ov->sprite_button_quit,
    main->game_ov->texture_button_quit, sfTrue);
    sfSprite_setPosition(main->game_ov->sprite_button_quit,
    main->game_ov->button_quit_pos);
    main->game_ov->rect_quit_button.top = 310;
    main->game_ov->rect_quit_button.left = 0;
    main->game_ov->rect_quit_button.width = 160;
    main->game_ov->rect_quit_button.height = 160;
    sfSprite_setTextureRect(main->game_ov->sprite_button_quit,
    main->game_ov->rect_quit_button);
    return main;
}

struct rpg_s *create_gameover(struct rpg_s *main)
{
    create_background_gameover(main);
    create_music_gamover(main);
    create_button_quit_gameover(main);
}

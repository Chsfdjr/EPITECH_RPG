/*
** EPITECH PROJECT, 2023
** create_sound_minifcontion
** File description:
** rpg
*/

#include "../../../include/rpg.h"

struct rpg_s *create_sett_sound2(struct rpg_s *main)
{
    main->sett->sound_pos2.x = 500;
    main->sett->sound_pos2.y = 415;
    main->sett->texture_sound2 =
    sfTexture_createFromFile("assets/button/Sound.png", NULL);
    main->sett->sprite_sound2 =
    sfSprite_create();
    sfSprite_setTexture(main->sett->sprite_sound2,
    main->sett->texture_sound2, sfTrue);
    sfSprite_setPosition(main->sett->sprite_sound2,
    main->sett->sound_pos2);
    main->sett->rect_sound2.top = 310;
    main->sett->rect_sound2.left = 0;
    main->sett->rect_sound2.width = 310;
    main->sett->rect_sound2.height = 155;
    sfSprite_setTextureRect(main->sett->sprite_sound2,
    main->sett->rect_sound2);
    return main;
}

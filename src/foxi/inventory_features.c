/*
** EPITECH PROJECT, 2023
** inventory features
** File description:
** rpg
*/

#include "../../include/rpg.h"

void *create_heart(struct rpg_s *main)
{
    main->foxi->pos_heart.x = 620;
    main->foxi->pos_heart.y = 1240;
    sfVector2f scale_foxi = {0.2f , 0.2f};
    main->foxi->texture_heart =
    sfTexture_createFromFile("assets/heart.png", NULL);
    main->foxi->sprite_heart =
    sfSprite_create();
    sfSprite_setScale(main->foxi->sprite_heart, scale_foxi);
    sfSprite_setTexture(main->foxi->sprite_heart,
    main->foxi->texture_heart, sfTrue);
    sfSprite_setPosition(main->foxi->sprite_heart,
    main->foxi->pos_heart);
    main->foxi->rect_heart.top = 0;
    main->foxi->rect_heart.left = 0;
    main->foxi->rect_heart.width = 275;
    main->foxi->rect_heart.height = 260;
    sfSprite_setTextureRect(main->foxi->sprite_heart,
    main->foxi->rect_heart);
}

void *create_exp(struct rpg_s *main)
{
    main->foxi->pos_exp.x = 50;
    main->foxi->pos_exp.y = 1240;
    sfVector2f scale_foxi = {0.15f , 0.15f};
    main->foxi->texture_exp =
    sfTexture_createFromFile("assets/exp.png", NULL);
    main->foxi->sprite_exp =
    sfSprite_create();
    sfSprite_setScale(main->foxi->sprite_exp, scale_foxi);
    sfSprite_setTexture(main->foxi->sprite_exp,
    main->foxi->texture_exp, sfTrue);
    sfSprite_setPosition(main->foxi->sprite_exp,
    main->foxi->pos_exp);
    main->foxi->rect_exp.top = 0;
    main->foxi->rect_exp.left = 0;
    main->foxi->rect_exp.width = 1000;
    main->foxi->rect_exp.height = 175;
    sfSprite_setTextureRect(main->foxi->sprite_exp,
    main->foxi->rect_exp);
}

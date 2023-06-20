/*
** EPITECH PROJECT, 2023
** object
** File description:
** powder + fire
*/

#include "../../include/rpg.h"

struct rpg_s *create_powder(struct rpg_s *main)
{
    main->invent->powder = malloc(sizeof(cheese));
    main->invent->powder->pos.x = 200;
    main->invent->powder->pos.y = 820;
    sfVector2f scale_foxi = {0.2f , 0.2f};
    main->invent->powder->text_cheese =
    sfTexture_createFromFile("assets/powder.png", NULL);
    main->invent->powder->sprite_cheese = sfSprite_create();
    sfSprite_setScale(main->invent->powder->sprite_cheese, scale_foxi);
    sfSprite_setTexture(main->invent->powder->sprite_cheese,
    main->invent->powder->text_cheese, sfTrue);
    sfSprite_setPosition(main->invent->powder->sprite_cheese,
    main->invent->powder->pos);
    main->invent->powder->fox_have_it = sfFalse;
    return main;
}

struct rpg_s *create_fire(struct rpg_s *main)
{
    main->invent->fire = malloc(sizeof(cheese));
    main->invent->fire->pos.x = 477;
    main->invent->fire->pos.y = 225;
    sfVector2f scale_foxi = {0.05f , 0.05f};
    main->invent->fire->text_cheese =
    sfTexture_createFromFile("assets/fire.png", NULL);
    main->invent->fire->sprite_cheese = sfSprite_create();
    sfSprite_setScale(main->invent->fire->sprite_cheese, scale_foxi);
    sfSprite_setTexture(main->invent->fire->sprite_cheese,
    main->invent->fire->text_cheese, sfTrue);
    sfSprite_setPosition(main->invent->fire->sprite_cheese,
    main->invent->fire->pos);
    main->invent->fire->fox_have_it = sfFalse;
    return main;
}

struct rpg_s *create_bomb(struct rpg_s *main)
{
    main->invent->bomb = malloc(sizeof(cheese));
    main->invent->bomb->pos.x = 1255;
    main->invent->bomb->pos.y = 515;
    sfVector2f scale_foxi = {0.3f , 0.3f};
    main->invent->bomb->text_cheese =
    sfTexture_createFromFile("assets/bombe.png", NULL);
    main->invent->bomb->sprite_cheese = sfSprite_create();
    sfSprite_setScale(main->invent->bomb->sprite_cheese, scale_foxi);
    sfSprite_setTexture(main->invent->bomb->sprite_cheese,
    main->invent->bomb->text_cheese, sfTrue);
    sfSprite_setPosition(main->invent->bomb->sprite_cheese,
    main->invent->bomb->pos);
    main->invent->bomb->fox_have_it = sfFalse;
    return main;
}

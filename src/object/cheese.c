/*
** EPITECH PROJECT, 2023
** cheese
** File description:
** create
*/

#include "../../include/rpg.h"

struct rpg_s *create_cheese1(struct rpg_s *main)
{
    main->invent->cheese_1 = malloc(sizeof(cheese));
    sfVector2f scale_foxi;
    main->invent->cheese_1->fox_have_it = sfFalse;
    scale_foxi.x = 0.04f;
    scale_foxi.y = 0.04f;
    main->invent->cheese_1->pos.x = 395;
    main->invent->cheese_1->pos.y = 1120;
    main->invent->cheese_1->text_cheese =
    sfTexture_createFromFile("assets/cheese1.png", NULL);
    main->invent->cheese_1->sprite_cheese = sfSprite_create();
    sfSprite_setScale(main->invent->cheese_1->sprite_cheese, scale_foxi);
    sfSprite_setTexture(main->invent->cheese_1->sprite_cheese,
    main->invent->cheese_1->text_cheese, sfTrue);
    sfSprite_setPosition(main->invent->cheese_1->sprite_cheese,
    main->invent->cheese_1->pos);
    main->invent->cheese_1->fox_have_it = sfFalse;
    return main;
}

struct rpg_s *create_cheese2(struct rpg_s *main)
{
    main->invent->cheese_2 = malloc(sizeof(cheese));
    main->invent->cheese_2->pos.x = 415;
    main->invent->cheese_2->pos.y = 1120;
    sfVector2f scale_foxi = {0.15f , 0.15f};
    main->invent->cheese_2->text_cheese =
    sfTexture_createFromFile("assets/cheese2.png", NULL);
    main->invent->cheese_2->sprite_cheese = sfSprite_create();
    sfSprite_setScale(main->invent->cheese_2->sprite_cheese, scale_foxi);
    sfSprite_setTexture(main->invent->cheese_2->sprite_cheese,
    main->invent->cheese_2->text_cheese, sfTrue);
    sfSprite_setPosition(main->invent->cheese_2->sprite_cheese,
    main->invent->cheese_2->pos);
    main->invent->cheese_2->fox_have_it = sfFalse;
    return main;
}

struct rpg_s *create_cheese3(struct rpg_s *main)
{
    main->invent->cheese_3 = malloc(sizeof(cheese));
    main->invent->cheese_3->pos.x = 435;
    main->invent->cheese_3->pos.y = 1120;
    sfVector2f scale_foxi = {0.12f , 0.12f};
    main->invent->cheese_3->text_cheese =
    sfTexture_createFromFile("assets/cheese3-2.png", NULL);
    main->invent->cheese_3->sprite_cheese = sfSprite_create();
    sfSprite_setScale(main->invent->cheese_3->sprite_cheese, scale_foxi);
    sfSprite_setTexture(main->invent->cheese_3->sprite_cheese,
    main->invent->cheese_3->text_cheese, sfTrue);
    sfSprite_setPosition(main->invent->cheese_3->sprite_cheese,
    main->invent->cheese_3->pos);
    main->invent->cheese_3->fox_have_it = sfFalse;
    return main;
}

struct rpg_s *create_cheese4(struct rpg_s *main)
{
    main->invent->cheese_4 = malloc(sizeof(cheese));
    main->invent->cheese_4->pos.x = 455;
    main->invent->cheese_4->pos.y = 1120;
    sfVector2f scale_foxi = {0.15f , 0.15f};
    main->invent->cheese_4->text_cheese =
    sfTexture_createFromFile("assets/cheese4.png", NULL);
    main->invent->cheese_4->sprite_cheese = sfSprite_create();
    sfSprite_setScale(main->invent->cheese_4->sprite_cheese, scale_foxi);
    sfSprite_setTexture(main->invent->cheese_4->sprite_cheese,
    main->invent->cheese_4->text_cheese, sfTrue);
    sfSprite_setPosition(main->invent->cheese_4->sprite_cheese,
    main->invent->cheese_4->pos);
    main->invent->cheese_4->fox_have_it = sfFalse;
    return main;
}

struct rpg_s *create_cheeses_sprite(struct rpg_s *main)
{
    create_cheese1(main);
    create_cheese2(main);
    create_cheese3(main);
    create_cheese4(main);
}

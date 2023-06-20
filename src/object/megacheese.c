/*
** EPITECH PROJECT, 2023
** MEGACHEESE
** File description:
** rpg
*/

#include "../../include/rpg.h"

void create_megacheese(struct rpg_s *main)
{
    main->invent->megacheese = malloc(sizeof(cheese));
    main->invent->megacheese->pos.x = 400;
    main->invent->megacheese->pos.y = 170;
    sfVector2f scale_foxi = {0.2f , 0.2f};
    main->invent->megacheese->text_cheese =
    sfTexture_createFromFile("assets/tresor.png", NULL);
    main->invent->megacheese->sprite_cheese =
    sfSprite_create();
    sfSprite_setScale(main->invent->megacheese->sprite_cheese, scale_foxi);
    sfSprite_setTexture(main->invent->megacheese->sprite_cheese,
    main->invent->megacheese->text_cheese, sfTrue);
    sfSprite_setPosition(main->invent->megacheese->sprite_cheese,
    main->invent->megacheese->pos);
    main->invent->megacheese->fox_have_it = sfFalse;
}

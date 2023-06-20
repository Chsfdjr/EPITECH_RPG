/*
** EPITECH PROJECT, 2023
** take object
** File description:
** fct
*/

#include "../../../include/rpg.h"

void verif_if_objects_taken(struct rpg_s *main, sfVector2f pos_fox)
{
    sfFloatRect zone1 =
    sfSprite_getGlobalBounds(main->invent->powder->sprite_cheese);
    sfFloatRect zone2 =
    sfSprite_getGlobalBounds(main->invent->fire->sprite_cheese);
    sfFloatRect zone3 =
    sfSprite_getGlobalBounds(main->invent->megacheese->sprite_cheese);
    if (main->invent->powder->fox_have_it == sfFalse)
        main->invent->powder->fox_have_it =
        sfFloatRect_contains(&zone1, pos_fox.x, pos_fox.y);
    if (main->invent->fire->fox_have_it == sfFalse && main->en->hp_wolf <= 0)
        main->invent->fire->fox_have_it =
        sfFloatRect_contains(&zone2, pos_fox.x, pos_fox.y);
    if (main->invent->megacheese->fox_have_it == sfFalse &&
    main->en->hp_crow <= 0)
        main->invent->megacheese->fox_have_it =
        sfFloatRect_contains(&zone3, pos_fox.x, pos_fox.y);
}

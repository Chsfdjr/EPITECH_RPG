/*
** EPITECH PROJECT, 2023
** take
** File description:
** cheese
*/

#include "../../../include/rpg.h"

void verif_if_cheese_taken2(struct rpg_s *main, sfVector2f pos_fox)
{
    sfFloatRect zone3 =
    sfSprite_getGlobalBounds(main->invent->cheese_3->sprite_cheese);
    sfFloatRect zone4 =
    sfSprite_getGlobalBounds(main->invent->cheese_4->sprite_cheese);
    if (main->invent->cheese_3->fox_have_it == sfFalse)
        main->invent->cheese_3->fox_have_it =
        sfFloatRect_contains(&zone3, pos_fox.x, pos_fox.y);
    if (main->invent->cheese_4->fox_have_it == sfFalse) {
        main->invent->cheese_4->fox_have_it =
        sfFloatRect_contains(&zone4, pos_fox.x, pos_fox.y);
    }
}

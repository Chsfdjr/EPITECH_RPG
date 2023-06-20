/*
** EPITECH PROJECT, 2023
** take cheese
** File description:
** fct
*/

#include "../../../include/rpg.h"

void verif_if_cheese_taken(struct rpg_s *main, sfVector2f pos_fox)
{
    sfFloatRect zone1 =
    sfSprite_getGlobalBounds(main->invent->cheese_1->sprite_cheese);
    sfFloatRect zone2 =
    sfSprite_getGlobalBounds(main->invent->cheese_2->sprite_cheese);
    if (main->invent->cheese_1->fox_have_it == sfFalse)
        main->invent->cheese_1->fox_have_it =
        sfFloatRect_contains(&zone1, pos_fox.x, pos_fox.y);
    if (main->invent->cheese_2->fox_have_it == sfFalse)
        main->invent->cheese_2->fox_have_it =
        sfFloatRect_contains(&zone2, pos_fox.x, pos_fox.y);
    verif_if_cheese_taken2(main, pos_fox);
}

void fox_step_on_top(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 24,
    main->foxi->pos_player.y + 11};
    verif_if_cheese_taken(main, pos_fox);
    verif_if_objects_taken(main, pos_fox);
}

void fox_step_on_bot(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 24,
    main->foxi->pos_player.y + 41};
    verif_if_cheese_taken(main, pos_fox);
    verif_if_objects_taken(main, pos_fox);
}

void fox_step_on_left(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 4,
    main->foxi->pos_player.y + 26};
    verif_if_cheese_taken(main, pos_fox);
    verif_if_objects_taken(main, pos_fox);
}

void fox_step_on_right(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 44,
    main->foxi->pos_player.y + 30};
    verif_if_cheese_taken(main, pos_fox);
    verif_if_objects_taken(main, pos_fox);
}

/*
** EPITECH PROJECT, 2023
** fight
** File description:
** sensor
*/

#include "../../include/rpg.h"

void verif_if_fox_touch(struct rpg_s *main, sfVector2f pos_fox)
{
    sfFloatRect zone1 =
    sfSprite_getGlobalBounds(main->en->wolf_sprite);
    main->foxi->fox_is_hit =
    sfFloatRect_contains(&zone1, pos_fox.x, pos_fox.y);
}

void wolf_step_on_top_fox(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 24,
    main->foxi->pos_player.y + 11};
    verif_if_fox_touch(main, pos_fox);
    give_damage_to_fox(main);
}

void wolf_step_on_bot_fox(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 24,
    main->foxi->pos_player.y + 41};
    verif_if_fox_touch(main, pos_fox);
    give_damage_to_fox(main);
}

void wolf_step_on_left_fox(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 4,
    main->foxi->pos_player.y + 26};
    verif_if_fox_touch(main, pos_fox);
    give_damage_to_fox(main);
}

void wolf_step_on_right_fox(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 44,
    main->foxi->pos_player.y + 30};
    verif_if_fox_touch(main, pos_fox);
    give_damage_to_fox(main);
}

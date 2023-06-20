/*
** EPITECH PROJECT, 2023
** fight fox
** File description:
** sensor
*/

#include "../../include/rpg.h"

void verif_if_wolf_touch(struct rpg_s *main, sfVector2f pos_fox)
{
    sfFloatRect zone1 =
    sfSprite_getGlobalBounds(main->en->wolf_sprite);
    main->en->wolf_is_hit =
    sfFloatRect_contains(&zone1, pos_fox.x, pos_fox.y);
}

void fox_step_on_top_wolf(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 25,
    main->foxi->pos_player.y + 11};
    verif_if_wolf_touch(main, pos_fox);
}

void fox_step_on_bot_wolf(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 25,
    main->foxi->pos_player.y + 41};
    verif_if_wolf_touch(main, pos_fox);
}

void fox_step_on_left_wolf(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 20,
    main->foxi->pos_player.y + 26};
    verif_if_wolf_touch(main, pos_fox);
}

void fox_step_on_right_wolf(struct rpg_s *main)
{
    sfVector2f pos_fox = {main->foxi->pos_player.x + 30,
    main->foxi->pos_player.y + 30};
    verif_if_wolf_touch(main, pos_fox);
}

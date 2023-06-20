/*
** EPITECH PROJECT, 2023
** sensor2
** File description:
** fight
*/

#include "../../include/rpg.h"

void check_attack_wolf (struct rpg_s* main)
{
    wolf_step_on_bot_fox(main);
    wolf_step_on_top_fox(main);
    wolf_step_on_left_fox(main);
    wolf_step_on_right_fox(main);
}

void give_damage_to_fox(struct rpg_s *main)
{
    if (main->foxi->fox_is_hit == sfTrue &&
    sfClock_getElapsedTime(main->en->clock_att_wolf).microseconds > 1000000 &&
    main->foxi->hp > 0) {
        main->foxi->hp -= 10;
        sfClock_restart(main->en->clock_att_wolf);
        update_heart(main);
    }
}

void check_attack_fox (struct rpg_s* main)
{
    fox_step_on_top_wolf(main);
    fox_step_on_bot_wolf(main);
    fox_step_on_left_wolf(main);
    fox_step_on_right_wolf(main);
}

void give_damage_to_wolf(struct rpg_s *main)
{
    check_attack_fox(main);
    if (main->en->wolf_is_hit == sfTrue && main->en->hp_wolf > 0) {
        main->en->hp_wolf -= main->foxi->damage;
    }
}

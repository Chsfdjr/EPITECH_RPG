/*
** EPITECH PROJECT, 2023
** sensor2
** File description:
** fight
*/

#include "../../include/rpg.h"

void check_attack_crow (struct rpg_s* main)
{
    crow_step_on_bot_fox(main);
    crow_step_on_top_fox(main);
    crow_step_on_left_fox(main);
    crow_step_on_right_fox(main);
}

void cr_give_damage_to_fox(struct rpg_s *main)
{
    if (main->foxi->fox_is_hit == sfTrue &&
    sfClock_getElapsedTime(main->en->clock_att_crow).microseconds > 1000000 &&
    main->foxi->hp > 0) {
        main->foxi->hp -= 10;
        sfClock_restart(main->en->clock_att_crow);
        update_heart(main);
    }
}

void cr_check_attack_fox (struct rpg_s* main)
{
    fox_step_on_top_crow(main);
    fox_step_on_bot_crow(main);
    fox_step_on_left_crow(main);
    fox_step_on_right_crow(main);
}

void give_damage_to_crow(struct rpg_s *main)
{
    cr_check_attack_fox(main);
    if (main->en->crow_is_hit == sfTrue && main->en->hp_crow > 0) {
        main->en->hp_crow -= main->foxi->damage;
    }
}

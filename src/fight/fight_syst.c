/*
** EPITECH PROJECT, 2023
** fight sys
** File description:
** rpg
*/

#include "../../include/rpg.h"

void wolf_is_fighting(struct rpg_s *main)
{
    main->en->time_wolf = sfClock_getElapsedTime(main->en->clock_att_wolf);
}

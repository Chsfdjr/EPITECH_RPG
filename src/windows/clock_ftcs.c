/*
** EPITECH PROJECT, 2023
** click_settings
** File description:
** 2
*/

#include "../../include/rpg.h"

void init_delay(struct rpg_s *m)
{
    m->delay = sfClock_create();
}

sfBool allowed_click(struct rpg_s *m)
{
    sfTime time;

    time = sfClock_getElapsedTime(m->delay);
    if (time.microseconds > 1000000) {
        sfClock_restart(m->delay);
        return sfTrue;
    } else
        return sfFalse;
}

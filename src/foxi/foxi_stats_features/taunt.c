/*
** EPITECH PROJECT, 2023
** tant
** File description:
** fox
*/

#include "../../../include/rpg.h"

void init_taunt(struct rpg_s *main)
{
    char *filepath[4] = {"taunt/taunt1.ogg", "taunt/taunt2.ogg",
    "taunt/taunt3.ogg", "taunt/taunt4.ogg"};

    for (int i = 0 ; i < 3 ; i++) {
        main->taunt[i] = sfMusic_createFromFile(filepath[i]);
        sfMusic_setVolume(main->taunt[i], main->sett->volume_sound);
    }
}

void taunt(struct rpg_s *main)
{
    srand(time(NULL));

    if (sfKeyboard_isKeyPressed(sfKeyT) == sfTrue) {
        sfMusic_play(main->taunt[rand() % 3]);
        return;
    }
}

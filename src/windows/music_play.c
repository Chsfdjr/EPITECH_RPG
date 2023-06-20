/*
** EPITECH PROJECT, 2023
** music play
** File description:
** rpg
*/

#include "../../include/rpg.h"

void create_music_play(struct rpg_s *main)
{
    main->sett->music_play = sfMusic_createFromFile("assets/CaveSong.ogg");
    sfMusic_setVolume(main->sett->music_play, 0.0);
    sfMusic_play(main->sett->music_play);
    sfMusic_setLoop(main->sett->music_play, sfTrue);
}

void create_music_play2(struct rpg_s *main)
{
    main->sett->music_cave = sfMusic_createFromFile("assets/cave_effects.ogg");
    sfMusic_setVolume(main->sett->music_cave, 0.0);
    sfMusic_play(main->sett->music_cave);
    sfMusic_setLoop(main->sett->music_cave, sfTrue);
}

void create_music_play3(struct rpg_s *main)
{
    main->sett->voice_jean = sfMusic_createFromFile("assets/jean.ogg");
    sfMusic_setVolume(main->sett->voice_jean, 0.0);
}

/*
** EPITECH PROJECT, 2023
** aya wolf
** File description:
** 2
*/

#include "../../../include/rpg.h"

void wolf_left_right(struct rpg_s *main)
{
    if (main->foxi->pos_player.x < main->en->pos_wolf.x + 5) {
            main->en->pos_wolf.x -= 0.5;
            main->en->rect_wolf.top = 0;
            set_ayawolf(main);
            move_wolf_left(main);
        }
        if (main->foxi->pos_player.x > main->en->pos_wolf.x - 5) {
            main->en->pos_wolf.x += 0.5;
            main->en->rect_wolf.top = 65;
            set_ayawolf(main);
            move_wolf_right(main);
        }
}

void wolf_top_bot(struct rpg_s *main)
{
    if (main->foxi->pos_player.y < main->en->pos_wolf.y + 5){
            main->en->pos_wolf.y -= 0.5;
            main->en->rect_wolf.top = 130;
            set_ayawolf(main);
            move_wolf_top(main);
        }
        if (main->foxi->pos_player.y > main->en->pos_wolf.y - 5) {
            main->en->pos_wolf.y += 0.5;
            main->en->rect_wolf.top = 195;
            set_ayawolf(main);
            move_wolf_bot(main);
        }
}

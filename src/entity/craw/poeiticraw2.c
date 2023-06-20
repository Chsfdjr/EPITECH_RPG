/*
** EPITECH PROJECT, 2023
** poe craw
** File description:
** 2
*/

#include "../../../include/rpg.h"

void crow_left_right(struct rpg_s* main)
{
    if (main->foxi->pos_player.y < main->en->pos_craw.y + 25) {
            main->en->pos_craw.y -= 0.5;
            move_crow_left(main);
            set_crow(main);
        }
        if (main->foxi->pos_player.y > main->en->pos_craw.y - 25) {
            main->en->pos_craw.y += 0.5;
            move_crow_right(main);
            set_crow(main);
        }
}

void crow_top_bot(struct rpg_s* main)
{
    if (main->foxi->pos_player.x < main->en->pos_craw.x + 25) {
            main->en->pos_craw.x -= 0.5;
            move_crow_left(main);
            set_crow(main);
        }
        if (main->foxi->pos_player.x > main->en->pos_craw.x - 25) {
            main->en->pos_craw.x += 0.5;
            move_crow_right(main);
            set_crow(main);

        }
}

void crow_attack(struct rpg_s *main, sfEvent event)
{
    sfColor wolfcolor_top = color_top(main, main->foxi, event);
    sfColor wolfcolor_bot = color_bot(main, main->foxi, event);
    sfColor color_right = color_rig(main, main->foxi, event);
    sfColor color_left = color_lef(main, main->foxi, event);
    if (main->en->pos_craw.x != main->foxi->pos_player.x &&
    main->en->pos_craw.y != main->foxi->pos_player.y) {
        crow_top_bot(main);
        crow_left_right(main);
    }
}

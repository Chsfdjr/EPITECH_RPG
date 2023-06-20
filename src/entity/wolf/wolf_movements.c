/*
** EPITECH PROJECT, 2023
** wolf
** File description:
** movements
*/

#include "../../../include/rpg.h"

sfColor col_top(struct rpg_s *main)
{
    sfColor next_color_top = sfImage_getPixel(main->hidden_map->image_map1,
    main->en->pos_wolf.x + 23, main->en->pos_wolf.y - 5 + 44);
    return next_color_top;
}

sfColor col_bot(struct rpg_s *main)
{
    sfColor next_color_bot = sfImage_getPixel(main->hidden_map->image_map1,
    main->en->pos_wolf.x + 24, main->en->pos_wolf.y + 5 + 64);
    return next_color_bot;
}

sfColor col_lef(struct rpg_s *main)
{
    sfColor next_color_left = sfImage_getPixel(main->hidden_map->image_map1,
    main->en->pos_wolf.x - 5 + 4, main->en->pos_wolf.y + 26);
    return next_color_left;
}

sfColor col_rig(struct rpg_s *main)
{
    sfColor next_color_right = sfImage_getPixel(main->hidden_map->image_map1,
    main->en->pos_wolf.x + 5 + 44, main->en->pos_wolf.y + 30);
    return next_color_right;
}

sfBool is_col_ok(sfColor color, struct rpg_s *main)
{
    if (color.r == 0 &&
    color.g == 255 && color.b == 255) {
        return sfTrue;
    } else
        return sfFalse;
}

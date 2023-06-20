/*
** EPITECH PROJECT, 2023
** hitbox
** File description:
** calcul
*/

#include "../../include/rpg.h"

sfColor color_top(struct rpg_s *main, player *foxi, sfEvent event)
{
    sfColor next_color_top;
    if (main->r_boss->is_here == sfFalse)
        next_color_top = sfImage_getPixel(main->hidden_map->image_map1,
        foxi->pos_player.x + 24, foxi->pos_player.y - 5 + 11);
    if (main->r_boss->is_here == sfTrue || main->menu_pt->version == 8) {
        next_color_top = sfImage_getPixel(main->r_boss->image,
        foxi->pos_player.x + 24, foxi->pos_player.y - 5 + 11);
    }
    return next_color_top;
}

sfColor color_bot(struct rpg_s *main, player *foxi, sfEvent event)
{
    sfColor next_color_bot;
    if (main->r_boss->is_here == sfFalse)
        next_color_bot = sfImage_getPixel(main->hidden_map->image_map1,
        foxi->pos_player.x + 24, foxi->pos_player.y + 5 + 41);
    if (main->r_boss->is_here == sfTrue || main->menu_pt->version == 8) {
        next_color_bot = sfImage_getPixel(main->r_boss->image,
        foxi->pos_player.x + 24, foxi->pos_player.y + 5 + 41);
    }
    return next_color_bot;
}

sfColor color_lef(struct rpg_s *main, player *foxi, sfEvent event)
{
    sfColor next_color_left;
    if (main->r_boss->is_here == sfFalse)
        next_color_left = sfImage_getPixel(main->hidden_map->image_map1,
        foxi->pos_player.x - 5 + 4, foxi->pos_player.y + 26);
    if (main->r_boss->is_here == sfTrue || main->menu_pt->version == 8) {
        next_color_left = sfImage_getPixel(main->r_boss->image,
        foxi->pos_player.x - 5 + 4, foxi->pos_player.y + 26);

    }
    return next_color_left;
}

sfColor color_rig(struct rpg_s *main, player *foxi, sfEvent event)
{
    sfColor next_color_right;
    if (main->r_boss->is_here == sfFalse)
        next_color_right = sfImage_getPixel(main->hidden_map->image_map1,
        foxi->pos_player.x + 5 + 44, foxi->pos_player.y + 30);
    if (main->r_boss->is_here == sfTrue || main->menu_pt->version == 8) {
        next_color_right = sfImage_getPixel(main->r_boss->image,
        foxi->pos_player.x + 5 + 44, foxi->pos_player.y + 30);
    }
    return next_color_right;
}

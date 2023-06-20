/*
** EPITECH PROJECT, 2023
** main
** File description:
** ayawolf
*/

#include "../../../include/rpg.h"

void create_wolf(struct rpg_s *main)
{
    main->en->pos_wolf.x = 480;
    main->en->pos_wolf.y = 240;
    sfVector2f scale_foxi = {0.8f , 0.8f};
    main->en->wolf_texture =
    sfTexture_createFromFile("assets/wolf.png", NULL);
    main->en->wolf_sprite = sfSprite_create();
    sfSprite_setScale(main->en->wolf_sprite, scale_foxi);
    sfSprite_setTexture(main->en->wolf_sprite,
    main->en->wolf_texture, sfTrue);
    sfSprite_setPosition(main->en->wolf_sprite,
    main->en->pos_wolf);
    main->en->rect_wolf.top = 65;
    main->en->rect_wolf.left = 0;
    main->en->rect_wolf.width = 45;
    main->en->rect_wolf.height = 60;
    sfSprite_setTextureRect(main->en->wolf_sprite,
    main->en->rect_wolf);
}

void set_ayawolf(struct rpg_s *main)
{
    sfSprite_setTextureRect(main->en->wolf_sprite,
    main->en->rect_wolf);
    sfSprite_setPosition(main->en->wolf_sprite,
    main->en->pos_wolf);
}

void wolf_attack(struct rpg_s *main, sfEvent event)
{
    sfColor wolfcolor_top = color_top(main, main->foxi, event);
    sfColor wolfcolor_bot = color_bot(main, main->foxi, event);
    sfColor color_right = color_rig(main, main->foxi, event);
    sfColor color_left = color_lef(main, main->foxi, event);
    if (main->en->pos_wolf.x != main->foxi->pos_player.x &&
    main->en->pos_wolf.y != main->foxi->pos_player.y &&
    is_col_ok(wolfcolor_top, main)) {
        wolf_left_right(main);
        wolf_top_bot(main);
    }
}

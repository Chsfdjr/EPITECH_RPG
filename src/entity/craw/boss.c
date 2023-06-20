/*
** EPITECH PROJECT, 2023
** boss
** File description:
** room
*/

#include "../../../include/rpg.h"

struct rpg_s *create_background_roomboss(struct rpg_s *main)
{
    sfVector2f scale = {1.f, 1.f};
    sfVector2f pos = {0, 0};
    main->r_boss->texture =
    sfTexture_createFromFile("assets/map2.png", NULL);
    main->r_boss->sprite = sfSprite_create();
    sfSprite_setTexture(main->r_boss->sprite,
    main->r_boss->texture, sfTrue);
    sfSprite_setScale(main->r_boss->sprite, scale);
    sfSprite_setPosition(main->r_boss->sprite, pos);
    main->r_boss->is_here = sfFalse;
    main->r_boss->image = sfImage_createFromFile("assets/map2_backend.png");
    return main;
}

void update_size(struct rpg_s* main)
{
    sfVector2f scale_f = {3.f, 3.f};
    sfVector2f scale_h = {3.f, 3.f};
    sfVector2f scale_x = {3.f, 3.f};
}

/*
** EPITECH PROJECT, 2023
** poeiti craw
** File description:
** rpg
*/

#include "../../../include/rpg.h"

void create_crow(struct rpg_s *main)
{
    main->en->pos_craw.x = 380;
    main->en->pos_craw.y = 240;
    sfVector2f scale_foxi = {0.4f , 0.4f};
    main->en->craw_texture =
    sfTexture_createFromFile("assets/crow.png", NULL);
    main->en->craw_sprite =
    sfSprite_create();
    sfSprite_setScale(main->en->craw_sprite, scale_foxi);
    sfSprite_setTexture(main->en->craw_sprite,
    main->en->craw_texture, sfTrue);
    sfSprite_setPosition(main->en->craw_sprite,
    main->en->pos_craw);
    main->en->rect_craw.top = 128;
    main->en->rect_craw.left = 0;
    main->en->rect_craw.width = 128;
    main->en->rect_craw.height = 128;
    sfSprite_setTextureRect(main->en->craw_sprite,
    main->en->rect_craw);
}

void set_crow(struct rpg_s *main)
{
    sfSprite_setTextureRect(main->en->craw_sprite,
    main->en->rect_craw);
    sfSprite_setPosition(main->en->craw_sprite,
    main->en->pos_craw);
}

void crow_end(struct rpg_s *main)
{
    if (main->en->rect_craw.left >= 512) {
            main->en->rect_craw.left = 0;
            sfSprite_setTextureRect(main->en->craw_sprite,
            main->en->rect_craw);
            sfClock_restart(main->en->clock_crow);
    }
}

void move_crow_right(struct rpg_s *main)
{
    set_crow(main);
    main->en->time_crow = sfClock_getElapsedTime(main->en->clock_crow);
    if (main->en->time_crow.microseconds > 100000) {
        if (main->en->rect_craw.left <= 512) {
            main->en->rect_craw.left += 128;
            sfSprite_setTextureRect(main->en->craw_sprite,
            main->en->rect_craw);
            sfClock_restart(main->en->clock_crow);
        }
        crow_end(main);
    }
}

void move_crow_left(struct rpg_s *main)
{
    set_crow(main);
    main->en->time_crow = sfClock_getElapsedTime(main->en->clock_crow);
    if (main->en->time_crow.microseconds > 100000) {
        if (main->en->rect_craw.left <= 512) {
            main->en->rect_craw.left += 128;
            sfSprite_setTextureRect(main->en->craw_sprite,
            main->en->rect_craw);
            sfClock_restart(main->en->clock_crow);
        }
        crow_end(main);
    }
}

/*
** EPITECH PROJECT, 2023
** loop draw2
** File description:
** loop_draw2
*/

#include "../../include/rpg.h"

void draw_game_object(struct rpg_s *main)
{
    if (main->invent->powder->fox_have_it == sfFalse) {
        sfRenderWindow_drawSprite(main->window,
    main->invent->powder->sprite_cheese, NULL);
    }
    if (main->invent->fire->fox_have_it == sfFalse) {
        sfRenderWindow_drawSprite(main->window,
    main->invent->fire->sprite_cheese, NULL);
    }
}

void draw_invent_object2(struct rpg_s *main)
{
    if (main->invent->bomb->fox_have_it == sfTrue)
        sfRenderWindow_drawSprite(main->window,
        main->invent->bomb->sprite_cheese, NULL);
}

void draw_invent_object(struct rpg_s *main)
{
    sfVector2f p_powder = {950.f, 540.f};
    sfVector2f s_powder = {1.8f, 1.8f};
    sfVector2f s_fire = {0.15f, 0.15f};
    sfVector2f p_fire = {1125.f, 540.f};
    if (main->invent->powder->fox_have_it == sfTrue &&
    main->invent->bomb->fox_have_it == sfFalse) {
        sfSprite_setScale(main->invent->powder->sprite_cheese, s_powder);
        sfSprite_setPosition(main->invent->powder->sprite_cheese, p_powder);
        sfRenderWindow_drawSprite(main->window,
    main->invent->powder->sprite_cheese, NULL);
    }
    if (main->invent->fire->fox_have_it == sfTrue &&
    main->invent->bomb->fox_have_it == sfFalse) {
        sfSprite_setScale(main->invent->fire->sprite_cheese, s_fire);
        sfSprite_setPosition(main->invent->fire->sprite_cheese, p_fire);
        sfRenderWindow_drawSprite(main->window,
    main->invent->fire->sprite_cheese, NULL);
    }
    draw_invent_object2(main);
}

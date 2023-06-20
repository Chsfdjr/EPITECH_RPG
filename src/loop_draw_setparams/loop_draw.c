/*
** EPITECH PROJECT, 2023
** loop draw
** File description:
** minifct
*/

#include "../../include/rpg.h"

void draw_game2(struct rpg_s *main)
{
    sfVector2f p_cheese4 = {300.f, 400.f};
    if (main->invent->cheese_4->fox_have_it == sfFalse) {
        sfSprite_setPosition(main->invent->cheese_4->sprite_cheese, p_cheese4);
        sfRenderWindow_drawSprite(main->window,
    main->invent->cheese_4->sprite_cheese, NULL);
    }
}

void draw_game(struct rpg_s *main)
{
    sfVector2f p_cheese1 = {155.f, 1150.f};
    sfVector2f p_cheese2 = {245.f, 700.f};
    sfVector2f p_cheese3 = {1110.f, 550.f};
    if (main->invent->cheese_1->fox_have_it == sfFalse) {
        sfSprite_setPosition(main->invent->cheese_1->sprite_cheese, p_cheese1);
        sfRenderWindow_drawSprite(main->window,
    main->invent->cheese_1->sprite_cheese, NULL);
    }
    if (main->invent->cheese_2->fox_have_it == sfFalse) {
        sfSprite_setPosition(main->invent->cheese_2->sprite_cheese, p_cheese2);
        sfRenderWindow_drawSprite(main->window,
    main->invent->cheese_2->sprite_cheese, NULL);
    }
    if (main->invent->cheese_3->fox_have_it == sfFalse) {
        sfSprite_setPosition(main->invent->cheese_3->sprite_cheese, p_cheese3);
        sfRenderWindow_drawSprite(main->window,
    main->invent->cheese_3->sprite_cheese, NULL);
    }
    draw_game2(main);
}

void draw_invent2(struct rpg_s *main)
{
    sfVector2f p_cheese4 = {1445.f, 375.f};
    sfVector2f s_cheese4 = {1.1f, 1.1f};
    sfVector2f s_cheese3 = {1.f, 1.f};
    sfVector2f p_cheese3 = {1285.f, 375.f};
    if (main->invent->cheese_3->fox_have_it == sfTrue) {
        sfSprite_setScale(main->invent->cheese_3->sprite_cheese, s_cheese3);
        sfSprite_setPosition(main->invent->cheese_3->sprite_cheese, p_cheese3);
        sfRenderWindow_drawSprite(main->window,
    main->invent->cheese_3->sprite_cheese, NULL);
    }
    if (main->invent->cheese_4->fox_have_it == sfTrue) {
        sfSprite_setScale(main->invent->cheese_4->sprite_cheese, s_cheese4);
        sfSprite_setPosition(main->invent->cheese_4->sprite_cheese, p_cheese4);
        sfRenderWindow_drawSprite(main->window,
    main->invent->cheese_4->sprite_cheese, NULL);
    }
}

void draw_invent(struct rpg_s *main)
{
    sfVector2f p_cheese1 = {955.f, 380.f};
    sfVector2f p_cheese2 = {1110.f, 375.f};
    sfVector2f s_cheese1 = {0.2f, 0.2f};
    sfVector2f s_cheese2 = {1.f, 1.f};
    if (main->invent->cheese_1->fox_have_it == sfTrue) {
        sfSprite_setScale(main->invent->cheese_1->sprite_cheese, s_cheese1);
        sfSprite_setPosition(main->invent->cheese_1->sprite_cheese, p_cheese1);
        sfRenderWindow_drawSprite(main->window,
    main->invent->cheese_1->sprite_cheese, NULL);
    }
    if (main->invent->cheese_2->fox_have_it == sfTrue) {
        sfSprite_setScale(main->invent->cheese_2->sprite_cheese, s_cheese2);
        sfSprite_setPosition(main->invent->cheese_2->sprite_cheese, p_cheese2);
        sfRenderWindow_drawSprite(main->window,
    main->invent->cheese_2->sprite_cheese, NULL);
    }
    draw_invent2(main);
}

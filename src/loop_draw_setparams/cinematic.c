/*
** EPITECH PROJECT, 2023
** cinematic
** File description:
** cine
*/

#include "../../include/rpg.h"

void draw_cine3(struct rpg_s *main)
{
    if (main->cinema->time_cine.microseconds + 15000000 <
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds &&
    main->cinema->time_cine.microseconds + 16000000 >
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->cinema->c7->sprite_sub, NULL);
    if (main->cinema->time_cine.microseconds + 16000000 <
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds &&
    main->cinema->time_cine.microseconds + 17000000 >
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->cinema->c8->sprite_sub, NULL);
    if (main->cinema->time_cine.microseconds + 17000000 <
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds &&
    main->cinema->time_cine.microseconds + 22000000 >
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->cinema->c9->sprite_sub, NULL);
}

void draw_cine2(struct rpg_s *main)
{
    if (main->cinema->time_cine.microseconds + 10000000 <
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds &&
    main->cinema->time_cine.microseconds + 13000000 >
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->cinema->c4->sprite_sub, NULL);
    if (main->cinema->time_cine.microseconds + 13000000 <
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds &&
    main->cinema->time_cine.microseconds + 14000000 >
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->cinema->c5->sprite_sub, NULL);
    if (main->cinema->time_cine.microseconds + 14000000 <
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds &&
    main->cinema->time_cine.microseconds + 15000000 >
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->cinema->c6->sprite_sub, NULL);
}

void draw_cine(struct rpg_s *main)
{
    if (main->cinema->time_cine.microseconds <
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds &&
    main->cinema->time_cine.microseconds + 2000000 >
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->cinema->c1->sprite_sub, NULL);
    if (main->cinema->time_cine.microseconds + 2000000 <
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds &&
    main->cinema->time_cine.microseconds + 7000000 >
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->cinema->c2->sprite_sub, NULL);
    if (main->cinema->time_cine.microseconds + 7000000 <
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds &&
    main->cinema->time_cine.microseconds + 10000000 >
    sfClock_getElapsedTime(main->cinema->clock_cine).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->cinema->c3->sprite_sub, NULL);
    draw_cine2(main);
    draw_cine3(main);
}

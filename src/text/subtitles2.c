/*
** EPITECH PROJECT, 2023
** subtitles2
** File description:
** 2
*/

#include "../../include/rpg.h"

struct rpg_s *create_subtitles5(struct rpg_s *main)
{
    main->game1->s5 = malloc(sizeof(subt));
    main->game1->s5->pos.x = 600;
    main->game1->s5->pos.y = 1050;
    sfVector2f scale_foxi = {0.6f , 0.6f};
    main->game1->s5->text_sub =
    sfTexture_createFromFile("assets/jean5.png", NULL);
    main->game1->s5->sprite_sub = sfSprite_create();
    sfSprite_setScale(main->game1->s5->sprite_sub, scale_foxi);
    sfSprite_setTexture(main->game1->s5->sprite_sub,
    main->game1->s5->text_sub, sfTrue);
    sfSprite_setPosition(main->game1->s5->sprite_sub,
    main->game1->s5->pos);
    return main;
}

struct rpg_s *create_subtitles6(struct rpg_s *main)
{
    main->game1->s6 = malloc(sizeof(subt));
    main->game1->s6->pos.x = 600;
    main->game1->s6->pos.y = 1050;
    sfVector2f scale_foxi = {0.6f , 0.6f};
    main->game1->s6->text_sub =
    sfTexture_createFromFile("assets/jean6.png", NULL);
    main->game1->s6->sprite_sub = sfSprite_create();
    sfSprite_setScale(main->game1->s6->sprite_sub, scale_foxi);
    sfSprite_setTexture(main->game1->s6->sprite_sub,
    main->game1->s6->text_sub, sfTrue);
    sfSprite_setPosition(main->game1->s6->sprite_sub,
    main->game1->s6->pos);
    return main;
}

void draw_subt2(struct rpg_s *main)
{
    if (main->game1->time_jean.microseconds + 36000000 <
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds &&
    main->game1->time_jean.microseconds + 45000000 >
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->game1->s4->sprite_sub, NULL);
    if (main->game1->time_jean.microseconds + 45000000 <
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds &&
    main->game1->time_jean.microseconds + 59000000 >
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->game1->s5->sprite_sub, NULL);
    if (main->game1->time_jean.microseconds + 59000000 <
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds &&
    main->game1->time_jean.microseconds + 66000000 >
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->game1->s6->sprite_sub, NULL);
}

void draw_subt(struct rpg_s *main)
{
    if (main->game1->time_jean.microseconds <
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds &&
    main->game1->time_jean.microseconds + 10000000 >
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->game1->s1->sprite_sub, NULL);
    if (main->game1->time_jean.microseconds + 10000000 <
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds &&
    main->game1->time_jean.microseconds + 23000000 >
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->game1->s2->sprite_sub, NULL);
    if (main->game1->time_jean.microseconds + 23000000 <
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds &&
    main->game1->time_jean.microseconds + 36000000 >
    sfClock_getElapsedTime(main->game1->clock_jean).microseconds)
        sfRenderWindow_drawSprite(main->window,
        main->game1->s3->sprite_sub, NULL);
    draw_subt2(main);
}

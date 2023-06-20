/*
** EPITECH PROJECT, 2023
** subtitles
** File description:
** jean
*/

#include "../../include/rpg.h"

struct rpg_s *create_subtitles1(struct rpg_s *main)
{
    main->game1->s1 = malloc(sizeof(subt));
    main->game1->s1->pos.x = 600;
    main->game1->s1->pos.y = 1050;
    sfVector2f scale_foxi = {0.6f , 0.6f};
    main->game1->s1->text_sub =
    sfTexture_createFromFile("assets/jean1.png", NULL);
    main->game1->s1->sprite_sub = sfSprite_create();
    sfSprite_setScale(main->game1->s1->sprite_sub, scale_foxi);
    sfSprite_setTexture(main->game1->s1->sprite_sub,
    main->game1->s1->text_sub, sfTrue);
    sfSprite_setPosition(main->game1->s1->sprite_sub,
    main->game1->s1->pos);
    return main;
}

struct rpg_s *create_subtitles2(struct rpg_s *main)
{
    main->game1->s2 = malloc(sizeof(subt));
    main->game1->s2->pos.x = 600;
    main->game1->s2->pos.y = 1050;
    sfVector2f scale_foxi = {0.6f , 0.6f};
    main->game1->s2->text_sub =
    sfTexture_createFromFile("assets/jean2.png", NULL);
    main->game1->s2->sprite_sub = sfSprite_create();
    sfSprite_setScale(main->game1->s2->sprite_sub, scale_foxi);
    sfSprite_setTexture(main->game1->s2->sprite_sub,
    main->game1->s2->text_sub, sfTrue);
    sfSprite_setPosition(main->game1->s2->sprite_sub,
    main->game1->s2->pos);
    return main;
}

struct rpg_s *create_subtitles3(struct rpg_s *main)
{
    main->game1->s3 = malloc(sizeof(subt));
    main->game1->s3->pos.x = 600;
    main->game1->s3->pos.y = 1050;
    sfVector2f scale_foxi = {0.6f , 0.6f};
    main->game1->s3->text_sub =
    sfTexture_createFromFile("assets/jean3.png", NULL);
    main->game1->s3->sprite_sub = sfSprite_create();
    sfSprite_setScale(main->game1->s3->sprite_sub, scale_foxi);
    sfSprite_setTexture(main->game1->s3->sprite_sub,
    main->game1->s3->text_sub, sfTrue);
    sfSprite_setPosition(main->game1->s3->sprite_sub,
    main->game1->s3->pos);
    return main;
}

struct rpg_s *create_subtitles4(struct rpg_s *main)
{
    main->game1->s4 = malloc(sizeof(subt));
    main->game1->s4->pos.x = 600;
    main->game1->s4->pos.y = 1050;
    sfVector2f scale_foxi = {0.6f , 0.6f};
    main->game1->s4->text_sub =
    sfTexture_createFromFile("assets/jean4.png", NULL);
    main->game1->s4->sprite_sub = sfSprite_create();
    sfSprite_setScale(main->game1->s4->sprite_sub, scale_foxi);
    sfSprite_setTexture(main->game1->s4->sprite_sub,
    main->game1->s4->text_sub, sfTrue);
    sfSprite_setPosition(main->game1->s4->sprite_sub,
    main->game1->s4->pos);
    return main;
}

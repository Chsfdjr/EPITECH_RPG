/*
** EPITECH PROJECT, 2023
** create
** File description:
** cinematic
*/

#include "../../../include/rpg.h"

struct rpg_s *create_cinema1(struct rpg_s* main)
{
    main->cinema = malloc(sizeof(cine));
    main->cinema->c1 = malloc(sizeof(subt));
    main->cinema->c1->text_sub =
    sfTexture_createFromFile("assets/cine1.jpg", NULL);
    main->cinema->c1->sprite_sub = sfSprite_create();
    sfSprite_setTexture(main->cinema->c1->sprite_sub,
    main->cinema->c1->text_sub, sfTrue);
    return main;
}

struct rpg_s *create_cinema2(struct rpg_s* main)
{
    main->cinema->c2 = malloc(sizeof(subt));
    main->cinema->c2->text_sub =
    sfTexture_createFromFile("assets/cine2.jpg", NULL);
    main->cinema->c2->sprite_sub = sfSprite_create();
    sfSprite_setTexture(main->cinema->c2->sprite_sub,
    main->cinema->c2->text_sub, sfTrue);
    return main;
}

struct rpg_s *create_cinema3(struct rpg_s* main)
{
    main->cinema->c3 = malloc(sizeof(subt));
    main->cinema->c3->text_sub =
    sfTexture_createFromFile("assets/cine3.jpg", NULL);
    main->cinema->c3->sprite_sub = sfSprite_create();
    sfSprite_setTexture(main->cinema->c3->sprite_sub,
    main->cinema->c3->text_sub, sfTrue);
    return main;
}

struct rpg_s *create_cinema4(struct rpg_s* main)
{
    main->cinema->c4 = malloc(sizeof(subt));
    main->cinema->c4->text_sub =
    sfTexture_createFromFile("assets/cine4.jpg", NULL);
    main->cinema->c4->sprite_sub = sfSprite_create();
    sfSprite_setTexture(main->cinema->c4->sprite_sub,
    main->cinema->c4->text_sub, sfTrue);
    return main;
}

struct rpg_s *create_cinema5(struct rpg_s* main)
{
    main->cinema->c5 = malloc(sizeof(subt));
    main->cinema->c5->text_sub =
    sfTexture_createFromFile("assets/cine5.jpg", NULL);
    main->cinema->c5->sprite_sub = sfSprite_create();
    sfSprite_setTexture(main->cinema->c5->sprite_sub,
    main->cinema->c5->text_sub, sfTrue);
    return main;
}

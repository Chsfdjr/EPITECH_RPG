/*
** EPITECH PROJECT, 2023
** create
** File description:
** cinematic2
*/

#include "../../../include/rpg.h"

struct rpg_s *create_cinema6(struct rpg_s* main)
{
    main->cinema->c6 = malloc(sizeof(subt));
    main->cinema->c6->text_sub =
    sfTexture_createFromFile("assets/cine6.jpg", NULL);
    main->cinema->c6->sprite_sub = sfSprite_create();
    sfSprite_setTexture(main->cinema->c6->sprite_sub,
    main->cinema->c6->text_sub, sfTrue);
    return main;
}

struct rpg_s *create_cinema7(struct rpg_s* main)
{
    main->cinema->c7 = malloc(sizeof(subt));
    main->cinema->c7->text_sub =
    sfTexture_createFromFile("assets/cine7.jpg", NULL);
    main->cinema->c7->sprite_sub = sfSprite_create();
    sfSprite_setTexture(main->cinema->c7->sprite_sub,
    main->cinema->c7->text_sub, sfTrue);
    return main;
}

struct rpg_s *create_cinema8(struct rpg_s* main)
{
    main->cinema->c8 = malloc(sizeof(subt));
    main->cinema->c8->text_sub =
    sfTexture_createFromFile("assets/cine8.jpg", NULL);
    main->cinema->c8->sprite_sub = sfSprite_create();
    sfSprite_setTexture(main->cinema->c8->sprite_sub,
    main->cinema->c8->text_sub, sfTrue);
    return main;
}

struct rpg_s *create_cinema9(struct rpg_s* main)
{
    main->cinema->c9 = malloc(sizeof(subt));
    main->cinema->c9->text_sub =
    sfTexture_createFromFile("assets/cine9.jpg", NULL);
    main->cinema->c9->sprite_sub = sfSprite_create();
    sfSprite_setTexture(main->cinema->c9->sprite_sub,
    main->cinema->c9->text_sub, sfTrue);
    return main;
}

struct rpg_s *create_cinematics(struct rpg_s* main)
{
    create_cinema1(main);
    create_cinema2(main);
    create_cinema3(main);
    create_cinema4(main);
    create_cinema5(main);
    create_cinema6(main);
    create_cinema7(main);
    create_cinema8(main);
    create_cinema9(main);
    main->cinema->clock_cine = sfClock_create();
    sfClock_restart(main->cinema->clock_cine);
    return main;
}

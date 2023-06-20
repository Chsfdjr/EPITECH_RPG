/*
** EPITECH PROJECT, 2023
** menu
** File description:
** menu
*/

#include "../../../include/rpg.h"

main_menu *create_background_start(main_menu *menu_pt)
{
    menu_pt->texture_background_start =
    sfTexture_createFromFile("assets/background_start.jpg", NULL);
    menu_pt->sprite_background_start = sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_background_start,
    menu_pt->texture_background_start, sfTrue);
    return menu_pt;
}

struct rpg_s* create_background_map(struct rpg_s* main)
{
    main->game1->texture_map =
    sfTexture_createFromFile("assets/map1.jpg", NULL);
    main->game1->sprite_map = sfSprite_create();
    sfSprite_setTexture(main->game1->sprite_map,
    main->game1->texture_map, sfTrue);
    return main;
}

struct rpg_s* create_view(struct rpg_s* main)
{
    main->game1->view = sfView_create();
    sfFloatRect rect;
    rect.height = 450;
    rect.left = 0;
    rect.top = 0;
    rect.width = 700;
    main->game1->view = sfView_createFromRect(rect);
    main->game1->center.x = 350;
    main->game1->center.y = 1100;
    sfView_setCenter(main->game1->view, main->game1->center);
}

struct rpg_s* create_view2(struct rpg_s* main)
{
    main->invent->view = sfView_create();
    sfFloatRect rect;
    rect.height = 1080;
    rect.left = 0;
    rect.top = 0;
    rect.width = 1920;
    main->invent->view = sfView_createFromRect(rect);
    main->invent->center.x = 960;
    main->invent->center.y = 540;
    sfView_setCenter(main->invent->view, main->invent->center);
}

main_menu *create_background_help(main_menu *menu_pt)
{
    menu_pt->texture_background_help =
    sfTexture_createFromFile("assets/help_background.jpg", NULL);
    menu_pt->sprite_background_help = sfSprite_create();
    sfSprite_setTexture(menu_pt->sprite_background_help,
    menu_pt->texture_background_help, sfTrue);
    return menu_pt;
}

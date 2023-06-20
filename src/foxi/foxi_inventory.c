/*
** EPITECH PROJECT, 2023
** foxi fox
** File description:
** fox
*/

#include "../../include/rpg.h"

struct rpg_s *create_foxi_invent_sprite(struct rpg_s *main)
{
    main->invent->foxi_invent_pos.x = 5;
    main->invent->foxi_invent_pos.y = 5;
    sfVector2f scale_foxi = {1.5 , 1.5};
    main->invent->text_invent_foxi =
    sfTexture_createFromFile("assets/fox_inventory.png", NULL);
    main->invent->sprite_invent_foxi =
    sfSprite_create();
    sfSprite_setScale(main->invent->sprite_invent_foxi, scale_foxi);
    sfSprite_setTexture(main->invent->sprite_invent_foxi,
    main->invent->text_invent_foxi, sfTrue);
    sfSprite_setPosition(main->invent->sprite_invent_foxi,
    main->invent->foxi_invent_pos);
    return main;
}

struct rpg_s *create_inventory_sprite(struct rpg_s *main)
{
    main->invent->pos_inventory.x = 650;
    main->invent->pos_inventory.y = -180;
    sfVector2f scale_foxi = {2.f , 2.f};
    main->invent->text_inventory =
    sfTexture_createFromFile("assets/inventory.png", NULL);
    main->invent->sprite_inventory = sfSprite_create();
    sfSprite_setScale(main->invent->sprite_inventory, scale_foxi);
    sfSprite_setTexture(main->invent->sprite_inventory,
    main->invent->text_inventory, sfTrue);
    sfSprite_setPosition(main->invent->sprite_inventory,
    main->invent->pos_inventory);
    return main;
}

void open_inventory(struct rpg_s *main)
{
    if (sfKeyboard_isKeyPressed(sfKeyA) == sfTrue &&
        main->invent->is_display == sfFalse &&
        (main->menu_pt->version == 2 || main->menu_pt->version == 8)) {
        main->game1->room = main->menu_pt->version;
        main->menu_pt->version = 3;
        main->invent->is_display = sfTrue;
    } else if (sfKeyboard_isKeyPressed(sfKeyA) == sfTrue &&
        main->invent->is_display == sfTrue) {
        main->menu_pt->version = main->game1->room;
        main->invent->is_display = sfFalse;
    }
}

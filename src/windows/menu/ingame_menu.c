/*
** EPITECH PROJECT, 2023
** in game menu
** File description:
** rpg
*/

#include "../../../include/rpg.h"

void open_ingamemenu(struct rpg_s *main)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue &&
    (main->menu_pt->version == 2 ||
    main->menu_pt->version == 8)) {
        main->menu_pt->old_version = main->menu_pt->version;
        main->menu_pt->version = 4;
        main->menu_pt->in_game = sfTrue;
    } else if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue &&
    main->menu_pt->version == 4) {
        main->menu_pt->version = main->game1->room;
        main->menu_pt->in_game = sfFalse;
        main->menu_pt->old_version = 4;
    }
}

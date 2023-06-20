/*
** EPITECH PROJECT, 2023
** handling
** File description:
** clic3
*/

#include "../../../include/rpg.h"
void update_version_invent(struct rpg_s *main);

main_menu *click_button_help(main_menu *m, sfRenderWindow *window,
struct rpg_s *main)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 0) &&
    mouse.x > m->button_help_pos.x &&
    mouse.x < (m->button_help_pos.x + 160) &&
        mouse.y > m->button_help_pos.y &&
        mouse.y < (m->button_help_pos.y + 160)) {
        m->rect_help_button.top = 153;
        sfSprite_setTextureRect(m->sprite_button_help,
        m->rect_help_button);
        sfSprite_setPosition(m->sprite_button_help,
        m->button_help_pos);
        update_version_help(main);
    } else {
        m->rect_help_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_help,
        m->rect_help_button);
        sfSprite_setPosition(m->sprite_button_help,
        m->button_help_pos);
    }
    return m;
}

void update_version_exit(struct rpg_s *main)
{
    int v = main->menu_pt->version;
    main->menu_pt->version = main->menu_pt->old_version;
    main->menu_pt->old_version = v;
    main->menu_pt->is_display = sfTrue;
}

main_menu *click_button_return(main_menu *m, sfRenderWindow *window,
struct rpg_s *main)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 6) &&
    mouse.x > m->button_return_pos.x &&
    mouse.x < (m->button_return_pos.x + 160) &&
        mouse.y > m->button_return_pos.y &&
        mouse.y < (m->button_return_pos.y + 160)) {
        m->rect_return_button.top = 153;
        sfSprite_setTextureRect(m->sprite_button_return,
        m->rect_return_button);
        sfSprite_setPosition(m->sprite_button_return,
        m->button_return_pos);
        update_version_exit(main);
    } else {
        m->rect_return_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_return,
        m->rect_return_button);
        sfSprite_setPosition(m->sprite_button_return,
        m->button_return_pos);
    }
    return m;
}

void update_version_invent(struct rpg_s *main)
{
    main->menu_pt->old_version = main->menu_pt->version;
    main->menu_pt->version = 3;
    main->menu_pt->is_display = sfFalse;
    main->invent->is_display = sfTrue;
}

main_menu *click_button_inventory(main_menu *m, sfRenderWindow *window,
struct rpg_s *main)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 4) &&
    mouse.x > m->button_inventory_pos.x &&
    mouse.x < (m->button_inventory_pos.x + 160) &&
        mouse.y > m->button_inventory_pos.y &&
        mouse.y < (m->button_inventory_pos.y + 160)) {
        m->rect_inventory_button.top = 153;
        sfSprite_setTextureRect(m->sprite_button_inventory,
        m->rect_inventory_button);
        sfSprite_setPosition(m->sprite_button_inventory,
        m->button_inventory_pos);
        update_version_invent(main);
    } else {
        m->rect_inventory_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_inventory,
        m->rect_inventory_button);
        sfSprite_setPosition(m->sprite_button_inventory,
        m->button_inventory_pos);
    }
    return m;
}

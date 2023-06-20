/*
** EPITECH PROJECT, 2023
** handling
** File description:
** hover2
*/

#include "../../../include/rpg.h"


main_menu *hover_button_help(main_menu *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 0) &&
    mouse.x > m->button_help_pos.x &&
    mouse.x < (m->button_help_pos.x + 160) &&
        mouse.y > m->button_help_pos.y &&
        mouse.y < (m->button_help_pos.y + 160)) {
        m->rect_help_button.top = 0;
        sfSprite_setTextureRect(m->sprite_button_help,
        m->rect_help_button);
        sfSprite_setPosition(m->sprite_button_help,
        m->button_help_pos);
    } else {
        m->rect_help_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_help,
        m->rect_help_button);
        sfSprite_setPosition(m->sprite_button_help,
        m->button_help_pos);
    }
    return m;
}

main_menu *hover_button_return(main_menu *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (( m->version == 6) &&
    mouse.x > m->button_return_pos.x &&
    mouse.x < (m->button_return_pos.x + 160) &&
        mouse.y > m->button_return_pos.y &&
        mouse.y < (m->button_return_pos.y + 160)) {
        m->rect_return_button.top = 0;
        sfSprite_setTextureRect(m->sprite_button_return,
        m->rect_return_button);
        sfSprite_setPosition(m->sprite_button_return,
        m->button_return_pos);
    } else {
        m->rect_return_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_return,
        m->rect_return_button);
        sfSprite_setPosition(m->sprite_button_return,
        m->button_return_pos);
    }
    return m;
}

main_menu *hover_button_inventory(main_menu *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 4) &&
    mouse.x > m->button_inventory_pos.x &&
    mouse.x < (m->button_inventory_pos.x + 160) &&
        mouse.y > m->button_inventory_pos.y &&
        mouse.y < (m->button_inventory_pos.y + 160)) {
        m->rect_inventory_button.top = 0;
        sfSprite_setTextureRect(m->sprite_button_inventory,
        m->rect_inventory_button);
        sfSprite_setPosition(m->sprite_button_inventory,
        m->button_inventory_pos);
    } else {
        m->rect_inventory_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_inventory,
        m->rect_inventory_button);
        sfSprite_setPosition(m->sprite_button_inventory,
        m->button_inventory_pos);
    }
    return m;
}

main_menu *hover_button_sett_help(main_menu *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 1) &&
    mouse.x > m->pos_button_sett2.x &&
    mouse.x < (m->pos_button_sett2.x + 160) &&
        mouse.y > m->pos_button_sett2.y &&
        mouse.y < (m->pos_button_sett2.y + 160)) {
        m->rect_sett_help_button.top = 0;
        sfSprite_setTextureRect(m->sprite_button_sett_help,
        m->rect_sett_help_button);
        sfSprite_setPosition(m->sprite_button_sett_help,
        m->pos_button_sett2);
    } else {
        m->rect_sett_help_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_sett_help,
        m->rect_sett_help_button);
        sfSprite_setPosition(m->sprite_button_sett_help,
        m->pos_button_sett2);
    }
    return m;
}

main_menu *hover_button_save(main_menu *m, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if ((m->version == 4) &&
    mouse.x > m->button_save_pos.x &&
    mouse.x < (m->button_save_pos.x + 160) &&
        mouse.y > m->button_save_pos.y &&
        mouse.y < (m->button_save_pos.y + 160)) {
        m->rect_save_button.top = 0;
        sfSprite_setTextureRect(m->sprite_button_save,
        m->rect_save_button);
        sfSprite_setPosition(m->sprite_button_save,
        m->button_save_pos);
    } else {
        m->rect_save_button.top = 310;
        sfSprite_setTextureRect(m->sprite_button_save,
        m->rect_save_button);
        sfSprite_setPosition(m->sprite_button_save,
        m->button_save_pos);
    }
    return m;
}

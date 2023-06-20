/*
** EPITECH PROJECT, 2023
** foxi
** File description:
** fox
*/

#include "../../include/rpg.h"

cursor init_cursor(char *path)
{
    cursor mouse_cursor;
    mouse_cursor.texture_cursor = sfTexture_createFromFile(path, NULL);
    mouse_cursor.sprite_cursor = sfSprite_create();
    sfSprite_setTexture(mouse_cursor.sprite_cursor,
                        mouse_cursor.texture_cursor, sfTrue);
    return mouse_cursor;
}

void settarget(cursor mouse_cursor, sfRenderWindow *window, struct rpg_s *main)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(window);
    sfSprite_setPosition(mouse_cursor.sprite_cursor,
                        (sfVector2f){pos.x, pos.y});
    sfRenderWindow_drawSprite(window, mouse_cursor.sprite_cursor,
                                NULL);
}

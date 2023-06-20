/*
** EPITECH PROJECT, 2023
** event
** File description:
** event fct
*/

#include "../../include/rpg.h"

void screenshot_taken(struct rpg_s *main)
{
    sfVector2u WSize;
    sfTexture* screen;
    sfImage* screenshot;

    if (sfKeyboard_isKeyPressed(sfKeyF3) == sfTrue) {
        WSize = sfRenderWindow_getSize(main->window);
        screen = sfTexture_create(WSize.x, WSize.y);
        sfTexture_updateFromRenderWindow(screen, main->window,
        WSize.x, WSize.y);
        screenshot = sfTexture_copyToImage(screen);
        sfImage_saveToFile(screenshot, "screenshot.jpg");
    }
}

void event_ispressed(sfEvent event, struct rpg_s *main)
{
    move_foxi(main, main->foxi, event);
    dance_foxi(main);
    taunt(main);
    change_screen(main);
    open_inventory(main);
    open_ingamemenu(main);
    screenshot_taken(main);
    if (event.key.code == sfKeyE) {
        give_damage_to_wolf(main);
        give_damage_to_crow(main);
    }
}

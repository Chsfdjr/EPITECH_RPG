/*
** EPITECH PROJECT, 2023
** destroy display
** File description:
** destroy
*/

#include "../../include/rpg.h"

void display_main_menu(sfRenderWindow *window, main_menu *menu_pt)
{
    sfRenderWindow_drawSprite(window, menu_pt->sprite_background_start, NULL);
    sfRenderWindow_drawSprite(window, menu_pt->sprite_button_start, NULL);
    sfRenderWindow_drawSprite(window, menu_pt->sprite_button_resume, NULL);
    sfRenderWindow_drawSprite(window, menu_pt->sprite_button_settings, NULL);
    sfRenderWindow_drawSprite(window, menu_pt->sprite_button_quit, NULL);
    sfRenderWindow_drawText(window, menu_pt->text_main_menu, NULL);
    sfRenderWindow_drawText(window, menu_pt->text_play_menu, NULL);
    sfRenderWindow_drawText(window, menu_pt->text_resume_menu, NULL);
    sfRenderWindow_drawText(window, menu_pt->text_settings_menu, NULL);
    sfRenderWindow_drawText(window, menu_pt->text_quit_menu, NULL);
    sfRenderWindow_drawSprite(window, menu_pt->sprite_button_help, NULL);
}

void destroy_main_menu(main_menu *menu_pt, struct rpg_s* main)
{
    sfSprite_destroy(menu_pt->sprite_background_start);
    sfSprite_destroy(menu_pt->sprite_button_start);
    sfTexture_destroy(menu_pt->texture_background_start);
    sfTexture_destroy(menu_pt->texture_button_start);
    sfFont_destroy(menu_pt->font_menu);
    sfText_destroy(menu_pt->text_main_menu);
    sfText_destroy(menu_pt->text_play_menu);
    sfText_destroy(menu_pt->text_resume_menu);
    sfText_destroy(menu_pt->text_settings_menu);
    sfText_destroy(menu_pt->text_quit_menu);
    sfRenderWindow_destroy(main->window);
    sfRectangleShape_destroy(main->sett->rect_max);
    sfClock_destroy(main->foxi->clock_foxi);
}

/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** collision_map.c
*/

#include "../../include/rpg.h"

collision *create_collision_map1(collision *hidden_map1)
{
    hidden_map1->map1_backend =
    sfTexture_createFromFile("assets/map1_backend.png", NULL);
    hidden_map1->s_backend1 = sfSprite_create();
    sfSprite_setTexture(hidden_map1->s_backend1,
    hidden_map1->map1_backend, sfTrue);
    hidden_map1->image_map1 =
    sfImage_createFromFile("assets/map1_backend.png");
    return hidden_map1;
}

collision *create_collision_map2(collision *hidden_map2)
{
    hidden_map2->map2_backend =
    sfTexture_createFromFile("assets/map2_backend.png", NULL);
    hidden_map2->s_backend2 = sfSprite_create();
    sfSprite_setTexture(hidden_map2->s_backend2,
    hidden_map2->map2_backend, sfTrue);
    hidden_map2->image_map2 =
    sfImage_createFromFile("assets/map2_backend.png");
    return hidden_map2;
}

/*
** EPITECH PROJECT, 2023
** in game menu
** File description:
** rpg
*/

#include "../../include/rpg.h"

void freetab(char **tab)
{
    int i = 0;

    for (i = 0 ; tab[i] != NULL ; i++)
        free(tab[i]);
    free(tab);
}

void fill_player_stat(struct rpg_s *m, char **data)
{
    m->foxi->pos_player.x = my_getnbr(data[PLAYER_POS_X]);
    m->foxi->pos_player.y = my_getnbr(data[PLAYER_POS_Y]);
    m->foxi->hp = my_getnbr(data[PLAYER_HP]);
    m->foxi->pos_heart.x = my_getnbr(data[PLAYER_HP_X]);
    m->foxi->pos_heart.y = my_getnbr(data[PLAYER_HP_Y]);
    m->foxi->damage = my_getnbr(data[PLAYER_DAMAGE]);
    m->foxi->exp = my_getnbr(data[PLAYER_EXP]);
    m->foxi->pos_exp.x = my_getnbr(data[PLAYER_EXP_X]);
    m->foxi->pos_exp.y = my_getnbr(data[PLAYER_EXP_Y]);
    m->foxi->text_exp_pos.x = my_getnbr(data[PLAYER_LEV_X]);
    m->foxi->text_exp_pos.y = my_getnbr(data[PLAYER_LEV_Y]);
}

void fill_inventory(struct rpg_s *m, char **data)
{
    m->invent->cheese_1->fox_have_it = my_getnbr(data[CHEESE_1_OBTAIN]);
    m->invent->cheese_2->fox_have_it = my_getnbr(data[CHEESE_2_OBTAIN]);
    m->invent->cheese_3->fox_have_it = my_getnbr(data[CHEESE_3_OBTAIN]);
    m->invent->cheese_4->fox_have_it = my_getnbr(data[CHEESE_4_OBTAIN]);
    m->invent->powder->fox_have_it = my_getnbr(data[POWDER_OBTAIN]);
    m->invent->fire->fox_have_it = my_getnbr(data[FIRE_OBTAIN]);
    m->invent->bomb->fox_have_it = my_getnbr(data[BOMB_OPTAIN]);
}

void fill_ennemies_stat(struct rpg_s *m, char **data)
{
    m->en->pos_wolf.x = my_getnbr(data[WOLF_POS_X]);
    m->en->pos_wolf.y = my_getnbr(data[WOLF_POS_Y]);
    m->en->hp_wolf = my_getnbr(data[WOLF_HP]);
    m->en->pos_craw.x = my_getnbr(data[CROW_POS_X]);
    m->en->pos_craw.y = my_getnbr(data[CROW_POS_Y]);
    m->en->hp_crow = my_getnbr(data[CROW_HP]);
}

void fill_map_data(struct rpg_s *m, char **data)
{
    m->game1->blue_zone = my_getnbr(data[BLUE_ZONE]);
    m->game1->center.x = my_getnbr(data[MAP_CENTER_X]);
    m->game1->center.y = my_getnbr(data[MAP_CENTER_Y]);
}

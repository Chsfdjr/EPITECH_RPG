/*
** EPITECH PROJECT, 2023
** in game menu
** File description:
** rpg
*/

#include "../../include/rpg.h"

void write_player_stat(struct rpg_s *m, int fd)
{
    write(fd, "PLAYER\n", 7);
    my_put_nbr_in_file(m->foxi->pos_player.x, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->foxi->pos_player.y, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->foxi->hp, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->foxi->pos_heart.x, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->foxi->pos_heart.y, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->foxi->damage, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->foxi->exp, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->foxi->pos_exp.x, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->foxi->pos_exp.y, fd);
    write(fd, "\n", 1);
}

void write_inventory_stuff(cheese *stuff, int fd)
{
    my_put_nbr_in_file(stuff->fox_have_it, fd);
    write(fd, "\n", 1);
}

void write_inventory(struct rpg_s *m, int fd)
{
    write(fd, "INVENTORY\n", 10);
    write_inventory_stuff(m->invent->cheese_1, fd);
    write_inventory_stuff(m->invent->cheese_2, fd);
    write_inventory_stuff(m->invent->cheese_3, fd);
    write_inventory_stuff(m->invent->cheese_4, fd);
    write_inventory_stuff(m->invent->powder, fd);
    write_inventory_stuff(m->invent->fire, fd);
    write_inventory_stuff(m->invent->bomb, fd);
}

void write_ennemies_stat(struct rpg_s *m, int fd)
{
    write(fd, "ENNEMIES\n", 9);
    my_put_nbr_in_file(m->en->pos_wolf.x, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->en->pos_wolf.y, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->en->hp_wolf, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->en->pos_craw.x, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->en->pos_craw.y, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->en->hp_crow, fd);
    write(fd, "\n", 1);
}

void write_map_data(struct rpg_s *m, int fd)
{
    my_put_nbr_in_file(m->foxi->text_exp_pos.x, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->foxi->text_exp_pos.y, fd);
    write(fd, "\n", 1);
    write(fd, "MAP\n", 4);
    my_put_nbr_in_file(m->game1->blue_zone, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->game1->center.x, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->game1->center.y, fd);
    write(fd, "\n", 1);
}

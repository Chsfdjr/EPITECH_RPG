/*
** EPITECH PROJECT, 2023
** saving
** File description:
** game2
*/

#include "../../include/rpg.h"

void write_map_version(struct rpg_s *m, int fd)
{
    write(fd, "VERSION\n", 8);
    my_put_nbr_in_file(m->game1->room, fd);
    write(fd, "\n", 1);
    my_put_nbr_in_file(m->menu_pt->version, fd);
    write(fd, "\n", 1);
}

void save_game(struct rpg_s *m)
{
    int i = 0;
    int fd = 0;

    fd = open("save.txt", O_CREAT | O_RDWR, 0644);
    write_player_stat(m, fd);
    write_map_data(m, fd);
    write_inventory(m, fd);
    write_ennemies_stat(m, fd);
    write_map_version(m, fd);
    write(fd, "\n", 1);
    close(fd);
}

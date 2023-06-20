/*
** EPITECH PROJECT, 2023
** in game menu
** File description:
** rpg
*/

#include "../../include/rpg.h"

void my_putchar(char c, int fd)
{
    write(fd, &c, 1);
}

int my_put_nbr_in_file(int nb, int fd)
{
    if (nb < 0) {
        my_putchar('-', fd);
        nb = (nb * -1);
    }
    if ((nb / 10) == 0) {
        my_putchar(nb + '0', fd);
    } else {
        my_put_nbr_in_file(nb / 10, fd);
        my_putchar ((nb % 10) + '0', fd);
    }
    return 0;
}

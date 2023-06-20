/*
** EPITECH PROJECT, 2023
** read saving
** File description:
** game
*/

#include "../../include/rpg.h"

void fill_map_version(struct rpg_s *m, char **data)
{
    m->menu_pt->version = my_getnbr(data[VERSION]);
    m->menu_pt->old_version = my_getnbr(data[OLD_VERSION]);
}

char **read_file(char *path)
{
    int fd;
    char *buf;
    char **data;
    struct stat st;

    fd = open(path, O_RDONLY);
    stat(path, &st);
    buf = malloc(sizeof(char *) * st.st_size + 1);
    read(fd, buf, st.st_size);
    close(fd);
    buf[st.st_size] = '\0';
    data = my_str_to_word_array(buf, "\n");
    return data;
}

void set_new_data(struct rpg_s* main)
{
    sfSprite_setPosition(main->foxi->sprite_player, main->foxi->pos_player);
    sfSprite_setPosition(main->en->wolf_sprite, main->en->pos_wolf);
    sfSprite_setPosition(main->en->craw_sprite, main->en->pos_craw);
    sfView_setCenter(main->game1->view, main->game1->center);
    sfSprite_setPosition(main->foxi->sprite_heart, main->foxi->pos_heart);
    sfSprite_setPosition(main->foxi->sprite_exp, main->foxi->pos_exp);
    sfText_setPosition(main->foxi->text_exp, main->foxi->text_exp_pos);
    update_heart(main);
    update_xp_level(main);
}

int is_empty(char *path)
{
    int fd;
    struct stat st;

    fd = open(path, O_RDONLY);
    stat(path, &st);
    int size = st.st_size;
    close(fd);
    if (size == 0)
        return 1;
    else
        return 0;
}

void read_save_game(struct rpg_s *m)
{
    int i = 0;
    if (is_empty("save.txt") == 1)
        return;
    char **data = read_file("save.txt");

    fill_player_stat(m, data);
    fill_map_data(m, data);
    fill_inventory(m, data);
    fill_ennemies_stat(m, data);
    fill_map_version(m, data);
    set_new_data(m);
    freetab(data);
}

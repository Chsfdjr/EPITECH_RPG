/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** header
*/

#ifndef rpg
    #define rpg
    #include <SFML/System/Types.h>
    #include <SFML/System/InputStream.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/System/Clock.h>
    #include <SFML/System.h>
    #include <SFML/Audio/SoundBuffer.h>
    #include <SFML/Audio/Export.h>
    #include <SFML/Audio.h>
    #include <SFML/Audio/SoundStatus.h>
    #include <SFML/Audio/Sound.h>
    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Window/Types.h>
    #include <SFML/Window/Mouse.h>
    #include <SFML/Window/Export.h>
    #include <stdio.h>
    #include <time.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <sys/wait.h>
    #include <sys/stat.h>
    #include <sys/sysmacros.h>
    #include <sys/types.h>
    #include <dirent.h>
    #include <string.h>
    #include <fcntl.h>
    #define PLAYER_POS_X 1
    #define PLAYER_POS_Y 2
    #define PLAYER_HP 3
    #define PLAYER_HP_X 4
    #define PLAYER_HP_Y 5
    #define PLAYER_DAMAGE 6
    #define PLAYER_EXP 7
    #define PLAYER_EXP_X 8
    #define PLAYER_EXP_Y 9
    #define PLAYER_LEV_X 10
    #define PLAYER_LEV_Y 11
    #define BLUE_ZONE 13
    #define MAP_CENTER_X 14
    #define MAP_CENTER_Y 15
    #define CHEESE_1_OBTAIN 17
    #define CHEESE_2_OBTAIN 18
    #define CHEESE_3_OBTAIN 19
    #define CHEESE_4_OBTAIN 20
    #define POWDER_OBTAIN 21
    #define FIRE_OBTAIN 22
    #define BOMB_OPTAIN 23
    #define WOLF_POS_X 25
    #define WOLF_POS_Y 26
    #define WOLF_HP 27
    #define CROW_POS_X 28
    #define CROW_POS_Y 29
    #define CROW_HP 30
    #define VERSION 32
    #define OLD_VERSION 33

typedef struct defcursor {
    sfTexture* texture_cursor;
    sfSprite* sprite_cursor;
    sfIntRect rect_cursor;
    sfVector2f pos_cursor;
    sfVector2f scale_cursor;
} cursor;

typedef struct defplayer {
    sfTexture* texture_player;
    sfSprite* sprite_player;
    sfIntRect rect_player;
    sfVector2f pos_player;
    sfVector2f scale_foxi;
    sfClock *clock_foxi;
    sfTime time_foxi;
    sfTexture* texture_heart;
    sfSprite* sprite_heart;
    sfVector2f pos_heart;
    sfIntRect rect_heart;
    sfTexture* texture_exp;
    sfSprite* sprite_exp;
    sfVector2f pos_exp;
    sfIntRect rect_exp;
    sfText* text_exp;
    sfVector2f text_exp_pos;
    int hp;
    int damage;
    int money;
    int exp;
    int level;
    int speed;
    sfBool key_press;
    sfBool fox_attack;
    sfBool fox_is_hit;
    sfClock *clock_mvt_foxi;
    sfTime time_mvt_foxi;
    sfClock* clock_dance;
    sfTime time_dance;
} player;

typedef struct menu {
    sfText* text_save;
    sfTexture* texture_background_start;
    sfSprite* sprite_background_start;
    sfTexture* texture_button_start;
    sfSprite* sprite_button_start;
    sfTexture* texture_button_resume;
    sfSprite* sprite_button_resume;
    sfTexture* texture_button_settings;
    sfSprite* sprite_button_settings;
    sfTexture* texture_button_quit;
    sfSprite* sprite_button_quit;
    sfTexture* texture_button_help;
    sfSprite* sprite_button_help;
    sfVector2f button_help_pos;
    sfIntRect rect_help_button;
    sfVector2f button_start_pos;
    sfVector2f button_resume_pos;
    sfVector2f button_settings_pos;
    sfVector2f button_quit_pos;
    sfIntRect rect_start_button;
    sfIntRect rect_resume_button;
    sfIntRect rect_resume_button_nosave;
    sfIntRect rect_settings_button;
    sfIntRect rect_quit_button;
    sfFont* font_menu;
    sfText* text_main_menu;
    sfText* text_play_menu;
    sfText* text_resume_menu;
    sfText* text_settings_menu;
    sfText* text_quit_menu;
    sfText* text_load;
    sfText* text_invent;
    sfText* text_igmenu;
    sfBool is_quit_click;
    sfBool is_quit_click_ingame;
    int version;
    int old_version;
    sfBool is_display;
    sfBool in_game;
    sfTexture* texture_background_help;
    sfSprite* sprite_background_help;
    sfTexture* texture_button_return;
    sfSprite* sprite_button_return;
    sfVector2f button_return_pos;
    sfIntRect rect_return_button;
    sfTexture* texture_button_inventory;
    sfSprite* sprite_button_inventory;
    sfVector2f button_inventory_pos;
    sfIntRect rect_inventory_button;
    sfTexture* texture_button_sett_help;
    sfSprite* sprite_button_sett_help;
    sfVector2f pos_button_sett2;
    sfIntRect rect_sett_help_button;
    sfBool save;
    sfTexture* texture_button_save;
    sfSprite* sprite_button_save;
    sfVector2f button_save_pos;
    sfIntRect rect_save_button;

} main_menu;

typedef struct settings{
    sfTexture* texture_no;
    sfSprite* sprite_no;
    sfTexture* texture_yes;
    sfSprite* sprite_yes;
    sfTexture* texture_sound;
    sfSprite* sprite_sound;
    sfTexture* texture_sound2;
    sfSprite* sprite_sound2;
    sfTexture* texture_window;
    sfSprite* sprite_window;
    sfVector2f yes_pos;
    sfVector2f no_pos;
    sfVector2f sound_pos;
    sfVector2f sound_pos2;
    sfVector2f window_pos;
    sfIntRect rect_no;
    sfIntRect rect_yes;
    sfIntRect rect_sound;
    sfIntRect rect_sound2;
    sfIntRect rect_window;
    sfText* text_save;
    sfText* text_quit;
    sfText* text_window;
    sfText* text_audio;
    sfText* text_big_settings;
    sfRectangleShape *soundbar;
    sfVector2f pos_bar;
    float volume;
    float old_volume;
    float old_volume_sound;
    float volume_sound;
    sfMusic *music_bckg;
    sfMusic *music_play;
    sfMusic *music_cave;
    sfMusic *voice_jean;
    sfText* music_min;
    sfText* music_max;
    sfRectangleShape *rect_max;
    sfRectangleShape *rect_min;
    sfVector2f pos_rectmin;
    sfVector2f pos_max;
    sfRectangleShape *soundbar2;
    sfVector2f pos_bar2;
    sfBool no_sound;
    sfVector2f old_pos;
    sfBool no_sound_audio;
    sfVector2f old_pos_audio;
    int old_oldversion;
    sfText* text_noise;
    sfText* text_htp;
} sett;

typedef struct subt_s{
    sfTexture* text_sub;
    sfSprite* sprite_sub;
    sfVector2f pos;
} subt;

typedef struct map_1{
    sfTexture* texture_map;
    sfSprite* sprite_map;
    sfView *view;
    sfRectangleShape *rect;
    sfVector2f center;
    int blue_zone;
    sfBool yellow_zone;
    sfClock *clock_jean;
    sfTime time_jean;
    subt *s1;
    subt *s2;
    subt *s3;
    subt *s4;
    subt *s5;
    subt *s6;
    int room;
} map1;

typedef struct cheese_s{
    sfTexture* text_cheese;
    sfSprite* sprite_cheese;
    sfVector2f pos;
    sfBool fox_have_it;
} cheese;

typedef struct inventory{
    sfTexture* text_invent_foxi;
    sfSprite* sprite_invent_foxi;
    sfVector2f foxi_invent_pos;
    sfTexture* text_inventory;
    sfSprite* sprite_inventory;
    sfVector2f pos_inventory;
    sfView *view;
    sfVector2f center;
    sfBool is_display;
    sfBool escape;
    int old_version;
    cheese *cheese_1;
    cheese *cheese_2;
    cheese *cheese_3;
    cheese *cheese_4;
    sfText* text_dps;
    sfText* text_pv;
    cheese *powder;
    cheese *fire;
    cheese *bomb;
    cheese *megacheese;
    sfText* text_speed;
} invent;

typedef struct collision_map{
    sfTexture* map1_backend;
    sfSprite* s_backend1;
    sfTexture* map2_backend;
    sfSprite* s_backend2;
    sfTexture* map3_backend;
    sfSprite* s_backend3;
    sfImage *image_map1;
    sfImage *image_map2;
    sfImage *image_map3;
} collision;

typedef struct ennemys{

    sfTexture *wolf_texture;
    sfSprite *wolf_sprite;
    sfVector2f pos_wolf;
    sfIntRect rect_wolf;
    sfTexture *craw_texture;
    sfSprite *craw_sprite;
    sfVector2f pos_craw;
    sfIntRect rect_craw;
    sfClock *clock_wolf;
    sfTime time_wolf;
    sfClock *clock_crow;
    sfTime time_crow;
    sfClock *clock_att_wolf;
    sfTime time_att_wolf;
    sfBool wolf_is_hit;
    int hp_wolf;
    sfClock *clock_att_crow;
    sfTime time_att_crow;
    sfBool crow_is_hit;
    int hp_crow;
} ennemys;

typedef struct game_over{
    sfTexture* texture;
    sfSprite* sprite;
    sfMusic *hugo_crow;
    sfIntRect rect_quit_button;
    sfTexture* texture_button_quit;
    sfSprite* sprite_button_quit;
    sfVector2f button_quit_pos;
    sfBool is_music_play;
} g_o;

typedef struct win{
    sfTexture* texture;
    sfSprite* sprite;
    sfIntRect rect_quit_button;
    sfTexture* texture_button_quit;
    sfSprite* sprite_button_quit;
    sfVector2f button_quit_pos;
    sfBool is_music_play;
} win;

typedef struct boss{
    sfTexture* texture;
    sfSprite* sprite;
    sfBool is_here;
    sfView *view;
    sfVector2f center;
    sfImage *image;
} boss;

typedef struct cine{
    sfClock *clock_cine;
    sfTime time_cine;
    subt *c1;
    subt *c2;
    subt *c3;
    subt *c4;
    subt *c5;
    subt *c6;
    subt *c7;
    subt *c8;
    subt *c9;
} cine;

struct rpg_s{
    sfBool change_win;
    sfRenderWindow *window;
    sfRenderWindow *window2;
    sfBool is_fullscreen;
    sfMusic *taunt[4];
    sfClock *delay;
    struct menu *menu_pt;
    struct defplayer *foxi;
    struct defcursor *curs;
    struct settings *sett;
    struct map_1* game1;
    struct inventory* invent;
    struct collision_map* hidden_map;
    struct ennemys* en;
    struct game_over *game_ov;
    struct boss* r_boss;
    struct win *win;
    sfBool have_played;
    cine *cinema;
};

sfRenderWindow *events(sfRenderWindow *window, sfEvent event,
struct rpg_s *main);
void my_rpg(void);
main_menu *create_background_start(main_menu *menu_pt);
void display_main_menu(sfRenderWindow *window, main_menu *menu_pt);
main_menu *create_button_start(main_menu *menu_pt);
void destroy_main_menu(main_menu *menu_pt, struct rpg_s* main);
main_menu *hover_button_start(main_menu *menu_pt, sfRenderWindow *window);
void init_main_menu(main_menu *menu_pt, struct rpg_s* main);
void all_hover_menu(main_menu *menu_pt, sfRenderWindow *window,
struct rpg_s *main);
void all_click_menu(main_menu *menu_pt, sfRenderWindow *window,
struct rpg_s *main);
void create_main_text(main_menu *menu_pt);
void create_play_text(main_menu *menu_pt);
player *create_foxi(player *foxi);
player *display_foxi(sfRenderWindow *window, player *foxi);
player move_foxi(struct rpg_s *main, player *foxi, sfEvent event);
void create_resume_text(main_menu *menu_pt);
void create_settings_text(main_menu *menu_pt);
void create_quit_text(main_menu *menu_pt);
player move_top_bot(struct rpg_s *main, player *foxi, sfEvent event);
player *destroy_foxi(player *foxi);
main_menu *hover_button_resume(main_menu *m, sfRenderWindow *window,
struct rpg_s *main);
main_menu *click_button_quit(main_menu *menu_pt, sfRenderWindow *window);
cursor init_cursor(char *path);
void settarget(cursor mouse_cursor, sfRenderWindow *window,
struct rpg_s *main);
void minifct(sfRenderWindow *window, sfEvent event, struct rpg_s *main);
void init_clock_foxi(struct rpg_s *main);
void move_foxi_right(struct rpg_s *main);
void move_foxi_left(struct rpg_s *main);
void move_foxi_top(struct rpg_s *main);
void move_foxi_bot(struct rpg_s *main);
void minifct2(sfRenderWindow *window, sfEvent event, struct rpg_s *main);
struct rpg_s *create_sett_no(struct rpg_s *main);
struct rpg_s *create_sett_yes(struct rpg_s *main);
struct rpg_s *click_sett_no(struct rpg_s *main, sfRenderWindow *window);
struct rpg_s *click_sett_yes(struct rpg_s *main, sfRenderWindow *window);
struct rpg_s *hover_sett_no(struct rpg_s *main, sfRenderWindow *window);
struct rpg_s *hover_sett_yes(struct rpg_s *main, sfRenderWindow *window);
struct rpg_s* create_background_map(struct rpg_s* main);
void minifct3(sfRenderWindow *window, sfEvent event, struct rpg_s *main);
struct rpg_s* create_view(struct rpg_s* main);
void loops(sfRenderWindow *window, sfEvent event, struct rpg_s *main,
cursor mouse_cursor);
void set_window_params(sfRenderWindow *window);
void window_init(main_menu *menu_pt, struct rpg_s* main);
main_menu *create_button_start(main_menu *menu_pt);
main_menu *create_button_resume(main_menu *menu_pt);
main_menu *create_button_settings(main_menu *menu_pt);
main_menu *create_button_quit(main_menu *menu_pt);
struct rpg_s *create_sett_sound(struct rpg_s *main);
struct rpg_s *create_sett_window(struct rpg_s *main);
struct rpg_s *hover_sett_sound(struct rpg_s *main, sfRenderWindow *window);
struct rpg_s *hover_sett_window(struct rpg_s *main, sfRenderWindow *window);
struct rpg_s *click_sett_sound(struct rpg_s *main, sfRenderWindow *window);
struct rpg_s *click_sett_window(struct rpg_s *main, sfRenderWindow *window);
struct rpg_s *create_foxi_invent_sprite(struct rpg_s *main);
void open_inventory(struct rpg_s *main);
struct rpg_s *create_inventory_sprite(struct rpg_s *main);
struct rpg_s* create_view2(struct rpg_s* main);
void set_foxi(struct rpg_s *main, player *foxi);
void create_settings_main_text(struct rpg_s *main);
void create_settings_audio_text(struct rpg_s *main);
void create_settings_window_text(struct rpg_s *main);
void create_settings_quit_text(struct rpg_s *main);
void create_settings_save_text(struct rpg_s *main);
collision *create_collision_map1(collision *hidden_map1);
collision *create_collision_map2(collision *hidden_map2);
collision *create_collision_map3(collision *hidden_map3);
void create_sett_soundbar(struct rpg_s *main);
void handle_moving_soundbar(struct rpg_s *main);
void is_sound_bar_click(struct rpg_s *main, sfEvent event);
void create_music_play(struct rpg_s *main);
void *create_heart(struct rpg_s *main);
void *create_exp(struct rpg_s *main);
void open_ingamemenu(struct rpg_s *main);
void minifct5(sfRenderWindow *window, sfEvent event, struct rpg_s *main);
sfColor color_top (struct rpg_s *main, player *foxi, sfEvent event);
sfColor color_bot (struct rpg_s *main, player *foxi, sfEvent event);
sfColor color_lef(struct rpg_s *main, player *foxi, sfEvent event);
sfColor color_rig(struct rpg_s *main, player *foxi, sfEvent event);
sfBool is_color_ok(sfColor color, struct rpg_s *main);
void event_ispressed(sfEvent event, struct rpg_s *main);
void change_screen(struct rpg_s *main);
void create_settings_max_music(struct rpg_s *main);
void create_settings_min_music(struct rpg_s *main);
void create_music_play2(struct rpg_s *main);
void create_music_play3(struct rpg_s *main);
void create_text_load(struct rpg_s *main);
void create_text_invent(struct rpg_s *main);
void create_text_igmenu(struct rpg_s *main);
void create_wolf(struct rpg_s *main);
void minifct6(sfRenderWindow *window, sfEvent event, struct rpg_s *main);
void wolf_attack(struct rpg_s *main, sfEvent event);
sfColor col_top(struct rpg_s *main);
sfColor col_bot(struct rpg_s *main);
sfColor col_lef(struct rpg_s *main);
sfColor col_rig(struct rpg_s *main);
sfBool is_col_ok(sfColor color, struct rpg_s *main);
void create_rect_sound_min(struct rpg_s *main);
void create_rect_sound_max(struct rpg_s *main);
struct rpg_s *create_cheeses_sprite(struct rpg_s *main);
void fox_step_on_top(struct rpg_s *main);
void fox_step_on_bot(struct rpg_s *main);
void fox_step_on_left(struct rpg_s *main);
void fox_step_on_right(struct rpg_s *main);
void draw_game(struct rpg_s *main);
void draw_invent(struct rpg_s *main);
void move_wolf_bot(struct rpg_s *main);
void move_wolf_top(struct rpg_s *main);
void move_wolf_left(struct rpg_s *main);
void move_wolf_right(struct rpg_s *main);
void create_sett_soundbar2(struct rpg_s *main);
void display_sound_bar(struct rpg_s *m);
void is_sound_bar2_click(struct rpg_s *main, sfEvent event);
struct rpg_s *create_sett_sound2(struct rpg_s *main);
void create_text_dps(struct rpg_s *main);
void create_text_pv(struct rpg_s *main);
void wolf_left_right(struct rpg_s *main);
void wolf_top_bot(struct rpg_s *main);
void update_version(struct rpg_s* main);
void sett_no_sound(struct rpg_s *main);
void update_version_play(main_menu *m, struct rpg_s *main);
void update_version_settings(struct rpg_s *main);
void update_version_quit(main_menu *m);
void init_main_menu3(main_menu *menu_pt, struct rpg_s* main);
void window_init3(main_menu *menu_pt, struct rpg_s* main);
void init_main_menu4(main_menu *menu_pt, struct rpg_s* main);
void minifct3_2e(sfRenderWindow *window, sfEvent event, struct rpg_s *m);
void create_sett_soundbar_2e(struct rpg_s *main);
void set_ayawolf(struct rpg_s *main);
void verif_if_cheese_taken2(struct rpg_s *main, sfVector2f pos_fox);
struct rpg_s *create_cheese_invent1(struct rpg_s *main);
void create_crow(struct rpg_s *main);
void crow_attack(struct rpg_s *main, sfEvent event);
struct rpg_s *create_subtitles1(struct rpg_s *main);
struct rpg_s *create_subtitles2(struct rpg_s *main);
struct rpg_s *create_subtitles3(struct rpg_s *main);
struct rpg_s *create_subtitles4(struct rpg_s *main);
struct rpg_s *create_subtitles5(struct rpg_s *main);
struct rpg_s *create_subtitles6(struct rpg_s *main);
void draw_subt(struct rpg_s *main);
void sett_no_sound2(struct rpg_s *main);
struct rpg_s *click_sett_sound2(struct rpg_s *main, sfRenderWindow *window);
struct rpg_s *hover_sett_sound2(struct rpg_s *m, sfRenderWindow *window);
void cheese_degats(struct rpg_s *main);
void window_init4(main_menu *menu_pt, struct rpg_s* main);
void move_crow_left(struct rpg_s *main);
void move_crow_right(struct rpg_s *main);
main_menu *create_button_help(main_menu *menu_pt);
main_menu *click_button_button(main_menu *m, sfRenderWindow *window);
main_menu *hover_button_help(main_menu *m, sfRenderWindow *window);
void wolf_step_on_top_fox(struct rpg_s *main);
void wolf_step_on_bot_fox(struct rpg_s *main);
void wolf_step_on_left_fox(struct rpg_s *main);
void wolf_step_on_right_fox(struct rpg_s *main);
void check_attack_wolf (struct rpg_s* main);
void give_damage_to_fox(struct rpg_s *main);
void give_damage_to_wolf(struct rpg_s *main);
void fox_step_on_top_wolf(struct rpg_s *main);
void fox_step_on_bot_wolf(struct rpg_s *main);
void fox_step_on_left_wolf(struct rpg_s *main);
void fox_step_on_right_wolf(struct rpg_s *main);
void update_heart(struct rpg_s *main);
void window_init5(main_menu *menu_pt, struct rpg_s* main);
void init_main_menu5(main_menu *menu_pt, struct rpg_s* main);
struct rpg_s *create_powder(struct rpg_s *main);
struct rpg_s *create_fire(struct rpg_s *main);
void verif_if_objects_taken(struct rpg_s *main, sfVector2f pos_fox);
void draw_game_object(struct rpg_s *main);
void draw_invent_object(struct rpg_s *main);
main_menu *create_background_help(main_menu *menu_pt);
void update_version_help(struct rpg_s* main);
void minifct7(sfRenderWindow *w, sfEvent event, struct rpg_s *m);
struct rpg_s *create_gameover(struct rpg_s *main);
void minifct8(sfRenderWindow *w, sfEvent event, struct rpg_s *m);
main_menu *create_button_return(main_menu *menu_pt);
struct rpg_s *click_button_quit_game_over(struct rpg_s *main,
sfRenderWindow *window);
struct rpg_s *hover_button_quit_game_over(struct rpg_s *main,
sfRenderWindow *window);
struct rpg_s *create_background_roomboss(struct rpg_s *main);
void minifct9(sfRenderWindow *w, sfEvent event, struct rpg_s *m);
void set_window_params(sfRenderWindow *window);
void createwindow(struct rpg_s *main);
void swap_window(struct rpg_s *main);
void change_screen(struct rpg_s *main);
void taunt(struct rpg_s *main);
main_menu *create_button_inventory(main_menu *menu_pt);
void save_game(struct rpg_s *m);
int my_put_nbr_in_file(int nb, int fd);
void init_taunt(struct rpg_s *main);
void set_crow(struct rpg_s *main);
void verif_if_crow_touch(struct rpg_s *main, sfVector2f pos_fox);
void fox_step_on_top_crow(struct rpg_s *main);
void fox_step_on_bot_crow(struct rpg_s *main);
void fox_step_on_left_crow(struct rpg_s *main);
void fox_step_on_right_crow(struct rpg_s *main);
void check_attack_crow (struct rpg_s* main);
void cr_give_damage_to_fox(struct rpg_s *main);
void cr_check_attack_fox (struct rpg_s* main);
void give_damage_to_crow(struct rpg_s *main);
void verif_if_fox_touch(struct rpg_s *main, sfVector2f pos_fox);
void crow_step_on_top_fox(struct rpg_s *main);
void crow_step_on_bot_fox(struct rpg_s *main);
void crow_step_on_left_fox(struct rpg_s *main);
void crow_step_on_right_fox(struct rpg_s *main);
void read_save_game(struct rpg_s *m);
char **my_str_to_word_array(char *buf, char *del);
int my_getnbr(char const *str);
main_menu *create_button_help_settings(main_menu *menu_pt);
main_menu *hover_button_help(main_menu *m, sfRenderWindow *window);
main_menu *hover_button_return(main_menu *m, sfRenderWindow *window);
main_menu *hover_button_inventory(main_menu *m, sfRenderWindow *window);
main_menu *click_button_help(main_menu *m, sfRenderWindow *window,
struct rpg_s *main);
main_menu *click_button_return(main_menu *m, sfRenderWindow *window,
struct rpg_s *main);
main_menu *click_button_inventory(main_menu *m, sfRenderWindow *window,
struct rpg_s *main);
void minifct4(sfRenderWindow *window, sfEvent event, struct rpg_s *main);
struct rpg_s *create_bomb(struct rpg_s *main);
void minifct3_3e(sfRenderWindow *window, sfEvent event, struct rpg_s *m);
void create_exp_text(struct rpg_s *main);
main_menu *click_button_sett_help(main_menu *m, sfRenderWindow *window,
struct rpg_s *main);
main_menu *hover_button_sett_help(main_menu *m, sfRenderWindow *window);
main_menu *create_button_save(main_menu *menu_pt);
main_menu *hover_button_save(main_menu *m, sfRenderWindow *window);
main_menu *click_button_save(main_menu *m, sfRenderWindow *window,
struct rpg_s *main);
void update_xp_level(struct rpg_s *main);
main_menu *click_button_resume(main_menu *m, sfRenderWindow *window,
struct rpg_s *main);
void create_megacheese(struct rpg_s *main);
struct rpg_s *createwin(struct rpg_s *main);
void minifct10(sfRenderWindow *w, sfEvent event, struct rpg_s *m);
struct rpg_s *hover_button_quit_win(struct rpg_s *main,
sfRenderWindow *window);
void create_text_noise(struct rpg_s *main);
void create_text_htp(struct rpg_s *main);
void create_text_speed(struct rpg_s *main);
void update_chang_win(struct rpg_s *main);
main_menu *click_button_resume2(main_menu *m, sfRenderWindow *window,
struct rpg_s *main, sfVector2i mouse);
main_menu *hover_button_resume2(main_menu *m, sfRenderWindow *window,
sfVector2i mouse);
void minifct2_2e(sfRenderWindow *window, sfEvent event, struct rpg_s *main);
void minifct9_2e(sfRenderWindow *w, sfEvent event, struct rpg_s *m);
player move_foxi2(struct rpg_s *main, player *foxi, sfEvent event);
void display_sound_bar2(struct rpg_s *m);
void write_player_stat(struct rpg_s *m, int fd);
void write_inventory_stuff(cheese *stuff, int fd);
void write_inventory(struct rpg_s *m, int fd);
void write_ennemies_stat(struct rpg_s *m, int fd);
void write_map_data(struct rpg_s *m, int fd);
void write_map_version(struct rpg_s *m, int fd);
char **read_file(char *path);
void read_save_game(struct rpg_s *m);
void freetab(char **tab);
void fill_player_stat(struct rpg_s *m, char **data);
void fill_inventory(struct rpg_s *m, char **data);
void fill_ennemies_stat(struct rpg_s *m, char **data);
void fill_map_data(struct rpg_s *m, char **data);
void fill_map_version(struct rpg_s *m, char **data);
void dance_foxi(struct rpg_s* main);
void create_save_text(struct rpg_s *main);
main_menu *click_button_start(main_menu *m, sfRenderWindow *window,
struct rpg_s* main);
void init_delay(struct rpg_s *m);
sfBool allowed_click(struct rpg_s *m);
main_menu *click_button_resume_ingame(main_menu *m, sfRenderWindow *window,
struct rpg_s *main);
void screenshot_taken(struct rpg_s *main);
main_menu *update_play_init(main_menu *m, sfRenderWindow *window,
struct rpg_s* main);
struct rpg_s *create_cinema1(struct rpg_s* main);
struct rpg_s *create_cinema2(struct rpg_s* main);
struct rpg_s *create_cinema3(struct rpg_s* main);
struct rpg_s *create_cinema4(struct rpg_s* main);
struct rpg_s *create_cinema5(struct rpg_s* main);
struct rpg_s *create_cinema6(struct rpg_s* main);
struct rpg_s *create_cinema7(struct rpg_s* main);
struct rpg_s *create_cinema8(struct rpg_s* main);
struct rpg_s *create_cinema9(struct rpg_s* main);
struct rpg_s *create_cinematics(struct rpg_s* main);
void draw_cine(struct rpg_s *main);
void minifct11(sfRenderWindow *window, sfEvent event, struct rpg_s *main);
#endif

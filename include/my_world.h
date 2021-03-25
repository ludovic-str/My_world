/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
** File description:
** my_world
*/

#ifndef MY_WORLD_H_
#define MY_WORLD_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <math.h>

#define keycode_m

typedef struct popup_s popup_t;
struct popup_s {
    sfTexture *create_ksp;
    sfSprite *ksp;
    sfTexture *create_up;
    sfSprite *up;
    sfTexture *create_down;
    sfSprite *down;
    sfTexture *create_equal;
    sfSprite *equal;
    sfTexture *create_buldo;
    sfSprite *buldo;
    sfTexture *create_shortcuts;
    sfSprite *shortcuts;
    int is_popup;
};


typedef struct map_settings_s map_settings_t;
struct map_settings_s {
    sfTexture *create_blur_font;
    sfSprite *blur_font;
    sfTexture *create_menu;
    sfSprite *menu;
    sfTexture *create_menu_clicked;
    sfSprite *menu_clicked;
    sfTexture *create_menu_hover;
    sfSprite *menu_hover;
    sfTexture *create_settings;
    sfSprite *settings;
    sfTexture *create_settings_clicked;
    sfSprite *settings_clicked;
    sfTexture *create_settings_hover;
    sfSprite *settings_hover;
    sfTexture *create_resume;
    sfSprite *resume;
    sfTexture *create_resume_clicked;
    sfSprite *resume_clicked;
    sfTexture *create_resume_hover;
    sfSprite *resume_hover;
    sfTexture *create_settings_font;
    sfSprite *settings_font;
    sfTexture *create_back;
    sfSprite *back;
    sfTexture *create_back_clicked;
    sfSprite *back_clicked;
};

typedef struct map_s map_t;
struct map_s {
    map_settings_t *map_settings;
    sfTexture *back;
    sfSprite *background;
    sfTexture *create_menu;
    sfSprite *menu;
    sfTexture *create_settings;
    sfSprite *settings;
    sfTexture *create_zoom;
    sfSprite *zoom;
    sfTexture *create_helpbox_cursor;
    sfSprite *helpbox_cursor;
    sfTexture *create_helpbox_buildozer;
    sfSprite *helpbox_buildozer;
    sfTexture *create_helpbox_up;
    sfSprite *helpbox_up;
    sfTexture *create_helpbox_down;
    sfSprite *helpbox_down;
    sfTexture *create_helpbox_equal;
    sfSprite *helpbox_equal;
    sfTexture *create_helpbox_home;
    sfSprite *helpbox_home;
    sfTexture *create_helpbox_building;
    sfSprite *helpbox_building;
    sfTexture *create_helpbox_cityhall;
    sfSprite *helpbox_cityhall;
    sfVector2f **mapthree;
    sfCircleShape *circleshape;
    int iscircle;
    int *clothesti;
    int *clothestj;
    int shaperadius;
    int arraysize;
    int **map;
    int select_menu_cursor;
    int istiles;
};

typedef struct cursor_s cursor_t;
struct cursor_s {
    sfTexture *create_cursor;
    sfSprite *cursor;
    sfTexture *create_text_cursor;
    sfSprite *cursor_text;
    sfTexture *create_buldozer;
    sfSprite *cursor_buldozer;
    sfTexture *create_up;
    sfSprite *cursor_up;
    sfTexture *create_down;
    sfSprite *cursor_down;
    sfTexture *create_equal;
    sfSprite *cursor_equal;
    sfTexture *create_home;
    sfSprite *cursor_home;
    sfTexture *create_hotel;
    sfSprite *cursor_hotel;
    sfTexture *create_skyscraper;
    sfSprite *cursor_skyscraper;
};

typedef struct audio_s audio_t;
struct audio_s {
    int audio;
    int volume;
    sfSoundBuffer *create_clic;
    sfSound *clic;
    sfSoundBuffer *create_sound;
    sfSound *sound;
};

typedef struct window_s window_t;
struct window_s {
    sfVector2u size;
    sfVector2f bgsize;
    sfRenderWindow *my_window;
    sfEvent event;
    sfVector2i mouse;
    int video_mode_x;
    int video_mode_y;
    int height;
    int width;
};

typedef struct menu_s menu_t;
struct menu_s {
    sfTexture *back;
    sfSprite *background;
    sfTexture *band;
    sfSprite *banderol;
    sfTexture *map;
    sfSprite *map_editor;
    sfTexture *cop;
    sfSprite *copyright;
    sfTexture *create;
    sfSprite *buttom_create;
    sfTexture *create_hover;
    sfSprite *buttom_create_hover;
    sfTexture *create_clicked;
    sfSprite *button_create_clicked;
    sfTexture *settings;
    sfSprite *buttom_settings;
    sfTexture *settings_hover;
    sfSprite *buttom_settings_hover;
    sfTexture *settings_clicked;
    sfSprite *button_settings_clicked;
    sfTexture *band_create;
    sfSprite *banderol_create;
    sfTexture *height;
    sfSprite *button_height;
    sfTexture *width;
    sfSprite *button_width;
    sfTexture *height_empty;
    sfSprite *button_height_empty;
    sfTexture *width_empty;
    sfSprite *button_width_empty;
    sfTexture *create_map;
    sfSprite *button_create_map;
    sfTexture *create_map_hover;
    sfSprite *button_create_map_hover;
    sfTexture *create_map_clicked;
    sfSprite *button_create_map_clicked;
    sfTexture *band_settings;
    sfSprite *banderol_settings;
    sfTexture *txt_resolution;
    sfSprite *texte_resolution;
    sfTexture *create_resolution_1;
    sfSprite *resolution_1;
    sfTexture *create_resolution_2;
    sfSprite *resolution_2;
    sfTexture *create_resolution_3;
    sfSprite *resolution_3;
    sfTexture *create_resolution_clicked;
    sfSprite *resolution_clicked;
    sfTexture *txt_sound;
    sfSprite *texte_sound;
    sfTexture *create_sound_on;
    sfSprite *sound_on;
    sfTexture *create_sound_off;
    sfSprite *sound_off;
    sfTexture *create_sound_clicked;
    sfSprite *sound_clicked;
    sfTexture *txt_volume;
    sfSprite *texte_volume;
    sfTexture *create_volume_25;
    sfSprite *volume_25;
    sfTexture *create_volume_50;
    sfSprite *volume_50;
    sfTexture *create_volume_75;
    sfSprite *volume_75;
    sfTexture *create_volume_100;
    sfSprite *volume_100;
    sfTexture *create_volume_clicked;
    sfSprite *volume_clicked;
    sfTexture *create_volume_desactivated;
    sfSprite *volume_desactivated;
    sfTexture *create_error_width;
    sfSprite *error_width;
    sfTexture *create_error_height;
    sfSprite *error_height;
    sfClock *clock;
    sfTime time;
    float time_total;
    float time_loop;
    float time_popup;
    int size;
    int text;
    sfText *width_txt;
    sfText *height_txt;
    char input_width[255];
    char input_hei[255];
};

typedef struct world_s world_t;
struct world_s {
    window_t *window;
    menu_t *menu;
    audio_t *audio;
    cursor_t *cursor;
    map_t *map;
    popup_t *popup;
    int status;
};

int window(world_t *world);
int init(world_t *world);
int background(world_t *world);
int menu(world_t *world);
int init_all(world_t *world);
char *my_strcat(char *dest, char *src);
int creat_click(world_t *world);
int menu_create(world_t *world);
int menu_settings(world_t *world);
int creat_create(world_t *world);
int creat_create2(world_t *world);
int creat_create3(world_t *world);
int creat_create4(world_t *world);
int creat_settings(world_t *world);
int creat_settings2(world_t *world);
int creat_resolution(world_t *world);
int creat_resolution2(world_t *world);
int creat_sound(world_t *world);
int creat_volume(world_t *world);
int creat_volume2(world_t *world);
int creat_volume3(world_t *world);
int creat_volume4(world_t *world);
int manage_size(world_t *world);
int settings_hover(world_t *world);
int manage_icon_size(world_t *world);
float adapt_hitbox_x(world_t *world, int hitbox_x);
float adapt_hitbox_y(world_t *world, int hitbox_y);
int settings_hover2(world_t *world);
int create_cursor(world_t *world);
int cursor(world_t *world);
int map(world_t *world);
int open_music(world_t *world);
int manage_icon_volume2(world_t *world);
void initmap_bg(world_t *world);
void init_vertex(world_t *world);
int creat_menu(world_t *world);
int select_cursor(world_t *world);
int cursor_status(world_t *world, sfVector2f mouse);
float adapt_cursor_y(world_t *world, int hitbox_y);
float adapt_cursor_x(world_t *world, int hitbox_x);
int cursor_status2(world_t *world, sfVector2f mouse);
int clic_settings(world_t *world);
int settings(world_t *world);
int creat_menu_map1(world_t *world);
int creat_menu_map2(world_t *world);
int creat_menu_map3(world_t *world);
int creat_menu_map4(world_t *world);
int creat_menu_map5(world_t *world);
void create_2d_map(world_t *world);
sfVertexArray *create_line(world_t *world, sfVector2f vector[2]);
sfVector2f project_iso_point(world_t *world, sfVector3f threedim);
void intmap(world_t *world);
void destroy_sounds(world_t *world);
int map_settings(world_t *world);
int settings_settings(world_t *world);
int setposition2(world_t *world);
int manage_sound(world_t *world);
int manage_icon_sound(world_t *world);
int setposition3(world_t *world);
int manage_icon_volume(world_t *world);
int clic_volume(world_t *world);
int back_button(world_t *world);
void init_text(world_t *world);
int my_strlen(char const *str);
int my_textboxlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, const char *src);
int creat_create4(world_t *world);
void create_tool_text(world_t *world);
int enter_text_height(world_t *world);
int update_text(char *input, sfEvent event);
int convert_text(world_t *world);
int creat_error_whidth_height(world_t *world);
void shortcut(world_t *world);
int init(world_t *world);
void initcircleshape(world_t *world);
void modify_coord(world_t *world);
int creat_zoom(world_t *world);
void zoom(world_t *world);
void activate_tool(world_t* world);
void init_helpbox1(world_t *world);
void init_helpbox2(world_t *world);
void helpbox1(world_t *world);
void color_main(world_t *world, int i, int j);
int draw_2d_map(world_t *world);
sfVertexArray *create_color(world_t *world, int i, int j, sfColor color);
void render_width(world_t *world);
void realrandom(world_t *world);
void activate_tool3(world_t *world);
int creat_popup(world_t *world);
void ksp(world_t *world);
int creat_equal(world_t *world);
int creat_buldo(world_t *world);
int creat_up(world_t *world);
void popup1(world_t *world);

#endif /* !MY_WORLD_H_ */
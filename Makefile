##
## EPITECH PROJECT, 2021
## B-MUL-200-STG-2-1-myworld-maxime.hoffbeck
## File description:
## Makefile
##

SRC=	src/my_world.c			\
		src/window.c			\
		src/menu/menu.c			\
		src/tools.c				\
		src/menu/create.c					\
		src/menu/init_menu/init_menu.c		\
		src/menu/init_menu/init_creat.c		\
		src/menu/init_menu/init_settings.c	\
		src/menu/init_menu/init_settings2.c	\
		src/menu/init_menu/init_cursor.c	\
		src/menu/settings.c					\
		src/menu/settings_resize.c			\
		src/menu/settings_hover_clicked.c	\
		src/menu/cursor.c					\
		src/map/map.c						\
		src/music.c							\
		src/map/map_init.c					\
		src/map/menu/menu_map.c				\
		src/map/menu/helpbox.c				\
		src/map/menu/inits/init_menu_map.c		\
		src/map/menu/select_cursor.c			\
		src/map/menu/menu_settings.c			\
		src/map/menu/inits/init_settings_map.c			\
		src/map/menu/inits/init_settings_settings.c		\
		src/map/menu/inits/init_helpbox.c				\
		src/map/vertex_init.c							\
		src/destroy.c									\
		src/map/menu/menu_settings_settings.c			\
		src/map/menu/menu_settings_settings2.c			\
		src/menu/text.c								\
		src/menu/text2.c							\
		src/menu/check_text.c						\
		src/map/key_shortcut.c						\
		src/map/mouse_circle.c						\
		src/map/transpose_circle.c					\
		src/map/zoom.c						\
		src/map/activate_tool.c				\
		src/map/creat_color.c				\
		src/map/drawmap.c					\
		src/menu/realrandom.c				\
		src/map/activate_tool2.c			\
		src/map/init_popup.c				\
		src/map/popup.c						\

OBJ=	$(SRC:.c=.o)

NAME=	my_world

all:	$(NAME)

CFLAGS += -g

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME) -lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio -lm

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
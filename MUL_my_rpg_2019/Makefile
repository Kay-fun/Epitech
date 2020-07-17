##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c						\
		src/create_window.c				\
		src/destroy.c					\
		src/my_rand.c					\
		src/help.c						\
		src/cinematic.c					\
		src/convert_nb_csfml.c			\
		src/malloc_map.c				\
		src/pause/pause.c						\
		src/pause/create_pause.c				\
		src/pause/manage_click_pause.c			\
		src/pause/manage_mouse.c				\
		src/player/display_player.c			\
		src/player/create_player.c			\
		src/player/init_struct_player.c		\
		src/player/gestion_keys.c			\
		src/player/life.c					\
		src/player/movement_player.c		\
		src/player/attack.c					\
		src/player/create_life.c			\
		src/player/create_shockwave.c		\
		src/start_menu/init_struct_start.c			\
		src/start_menu/create_sprite_start.c		\
		src/start_menu/create_button.c				\
		src/start_menu/manage_click.c				\
		src/start_menu/music.c						\
		src/start_menu/gestion_mouse.c				\
		src/start_menu/display_start_menu.c			\
		src/game/init_struct_carte.c				\
		src/game/display_map.c						\
		src/game/music.c							\
		src/pnj/create_pnj.c			\
		src/pnj/init_struct_pnj.c		\
		src/pnj/display_pnj.c			\
		src/pnj/movement_pnj_1.c		\
		src/pnj/movement_pnj_2.c		\
		src/pnj/movement_pnj_3.c		\
		src/pnj/movement_pnj.c			\
		src/pnj/create_clock_pnj.c		\
		src/pnj/life_pnj.c				\
		src/score/update_score.c		\
		src/score/create_score.c		\
		src/end_menu/manage_mouse_end.c		\
		src/end_menu/init_windows_end.c		\
		src/end_menu/init_music_end.c		\
		src/end_menu/end.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f src/*~
	rm -f src/*#
	rm -f src/*.o

re:	fclean all

.PHONY:	clean fclean all

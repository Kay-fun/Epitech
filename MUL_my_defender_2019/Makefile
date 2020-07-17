##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles libmy
##

SRC	=	src/main.c	\
		src/create_bg_menu.c	\
		src/create_start_button.c	\
		src/create_exit_button.c	\
		src/st_menu.c	\
		src/st_game.c	\
		src/gestion_button_menu.c	\
		src/gestion_exit.c	\
		src/gestion_start.c	\
		src/create_bg_game.c	\
		src/create_mushroom.c	\
		src/moove_mushroom.c	\
		src/create_pause_background.c	\
		src/create_resume_button.c	\
		src/create_restart_button.c	\
		src/create_quit_button.c	\
		src/create_door_castle.c	\
		src/create_door_mushroom.c	\
		src/gestion_button_game.c	\
		src/set_music.c	\
		src/create_money.c	\
		src/maj_money.c	\
		src/create_life_castle.c      \
		src/maj_life_castle.c \
		lib/my/my_inttostr.c	\
		lib/my/my_compute_power_it.c	\
		lib/my/my_inttostr_dollars.c	\
		src/create_life_mushroom.c	\
		src/create_boost_tower.c	\
		src/create_damage_tower.c	\
		src/create_money_tower.c	\
		src/create_slow_tower.c	\
		src/create_bg_game_circle.c	\
		src/st_clock.c	\
		src/create_c_clock.c	\
		src/use_tower_dmg.c	\
		src/gestion_escape.c	\
		src/display_loop_pause.c	\
		src/display_loop_menu.c	\
		src/display_loop_game.c	\

CC	=	gcc

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	my_defender

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CSFML)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.phony:	all clean fclean re

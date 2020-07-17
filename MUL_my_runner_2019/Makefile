##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/my_runner.c	\
		src/cleaner.c	\
		src/mouvement.c	\
		src/mouvement_sprite.c	\
		src/display_sprite.c	\
		src/collision.c	\
		src/create_sprite.c	\
		src/create_sprite_move.c	\
		src/create_music.c	\
		src/create_clock.c	\
		src/help.c	\
		src/choose_runner_main.c	\
		src/event_window.c	\
		src/start/main_start.c	\
		src/start/manage_click_mouse.c	\
		src/start/display_menu.c	\
		src/exit/display_end.c	\
		src/exit/main_end.c	\
		src/exit/sprite_end.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

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

.PHONY:	clean

re:	fclean all

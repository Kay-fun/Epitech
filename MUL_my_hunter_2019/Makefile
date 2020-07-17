##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles libmy
##

SRC	=	lib/my/my_hunter.c	\
		lib/my/ccleaner.c	\
		lib/my/param_duck_sprite.c	\
		lib/my/create_music.c	\
		lib/my/create_clock.c	\
		lib/my/draw_sprite.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f lib/my/*~
	rm -f lib/my/*#
	rm -f lib/my/*.o

re:	fclean all

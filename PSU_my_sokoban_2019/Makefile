##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/my_sokoban.c	\
		src/error.c			\
		src/help.c			\
		src/switch_move.c	\
		src/move_player.c	\
		src/get_player.c	\
		src/get_box.c		\
		src/get_o.c			\
		src/restart.c		\
		src/my_putchar.c	\
		src/my_putstr.c		\
		src/check_map.c

NAME	=	my_sokoban

OBJ	=	$(SRC:.c=.o)

CPPFLAGS	=	-I ./include

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lm -lncurses

.PHONY:	all clean flcean

clean:
	rm -f *~
	rm -f *.o
	rm -f src/*~
	rm -f src/*.o

fclean:	clean
	rm -f $(NAME)
	rm -f $(OBJ)

re:	fclean all

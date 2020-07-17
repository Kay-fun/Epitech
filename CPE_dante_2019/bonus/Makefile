##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

LIB	=	./lib/my/

SOURCE	=	./src/

SRC	=	main.c				\
		$(SOURCE)open_map.c		\
		$(SOURCE)check_map.c		\
		$(SOURCE)found_way.c		\
		$(SOURCE)ncurse.c		\
		$(SOURCE)init_struct.c		\
		$(SOURCE)resolution_maze.c

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	solver

CPPFLAGS	=	-I ./include

CFLAGS		=	-Wall -Wextra

LDFLAGS	=	-L lib/my -lmy

NCURSES =	-lncurses

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(NCURSES)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	make clean -C $(LIB)

fclean: clean
	make fclean -C $(LIB)

re:     fclean all

.PHONY: all clean fclean re

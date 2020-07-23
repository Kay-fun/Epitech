##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c					\
		src/matchstick.c			\
		src/remove_matches.c		\
		src/my_get_nbr.c			\
		src/my_putchar.c			\
		src/my_putstr.c				\
		src/my_put_nbr.c			\
		src/map.c					\
		src/loop.c					\
		src/ia.c					\
		src/my_strlen.c				\
		src/my_strdup.c				\
		src/my_strcpy_map.c			\
		src/player.c

NAME	=	matchstick

CFLAGS	=	-Wall -Wextra -g3

OBJ	=	$(SRC:.c=.o)

CPPFLAGS	=	-I ./include

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lm

clean:
	rm -f *~
	rm -f *.o
	rm -f src/*~
	rm -f src/*.o

fclean:	clean
	rm -f $(NAME)
	rm -f $(OBJ)

.PHONY:	clean

re:	fclean all

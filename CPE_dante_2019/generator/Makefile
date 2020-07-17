##
## EPITECH PROJECT, 2019
## generator
## File description:
## makefile compilation
##

LIB		=	./lib/my/

SOURCE		=	./src/

SRC		=	main.c				\
			$(SOURCE)create_map.c		\
			$(SOURCE)change_map.c		\
			$(SOURCE)create_map_perfect.c	\
			$(SOURCE)change_map_perfect.c	\
			$(SOURCE)print_map.c

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	generator

CPPFLAGS	=	-I ./include

CFLAGS		=	-Wall -Wextra

LDFLAGS		=	-L lib/my -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	make clean -C $(LIB)

fclean: clean
	make fclean -C $(LIB)

re:	fclean all

.PHONY: all clean fclean re

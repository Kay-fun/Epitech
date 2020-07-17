##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

LIB	=	./lib/my/

SRC	=	main.c 			\
		src/help.c		\
		src/display.c	\
		src/palindrome.c	\
		src/parser.c		\
		src/process_palindrome.c	\
		src/math_base.c			\
		src/p_palindrome.c		\

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	palindrome

CPPFLAGS	=	-I ./include

CFLAGS		=	-Wall -Wextra

LDFLAGS	=	-L lib/my -lmy

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

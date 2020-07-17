##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

LIB	=	./lib/my/

SRC	=	main.c 				\
		src/help.c			\
		src/display.c		\
		src/fastatools.c	\
		src/parser.c		\
		src/rna.c			\
		src/dna.c			\
		src/reverse.c		\
		src/alignement.c	\
		src/kmer.c			\
		src/list.c			\
		src/sequence.c		\

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	FASTAtools

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

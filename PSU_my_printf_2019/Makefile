##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles libmy
##

SRC	=	lib/my/my_putchar.c			\
	    lib/my/my_put_nbr.c			\
		lib/my/my_putstr.c			\
		lib/my/my_put_unsigned.c	\
		lib/my/my_revstr.c			\
		lib/my/my_strlen.c			\
		lib/my/my_printf.c			\
		lib/my/hexa_base.c			\
		lib/my/hexa_base_maj.c		\
		lib/my/octal_base.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

.PHONY:	all clean fclean
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f lib/my/*~
	rm -f lib/my/*#
	rm -f lib/my/*.o

re:	fclean all

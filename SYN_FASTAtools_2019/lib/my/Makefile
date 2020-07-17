##
## EPITECH PROJECT, 2019
## lib
## File description:
## lib_Makefile
##

LIB	=		my_putchar.c			\
			my_putstr.c				\
			my_revstr.c				\
			my_isnum.c				\
			my_rand.c				\
			my_int_to_char.c		\
			my_nb_digits.c			\
			my_getchar.c			\
			my_getnbr.c				\
			my_strcmp.c				\
			my_strncmp.c			\
			my_putstr_error.c		\
			my_strlen.c				\
			my_put_nbr.c			\
			my_strcat.c				\
			my_strcpy.c				\
			my_strncpy.c			\
			my_strdup.c				\
			my_str_to_word_array.c	\


OBJ	=	$(LIB:.c=.o)

RM	=	rm -f

CPPFLAGS	=	-I ../../include

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) *~

re:	fclean all

.PHONY: all clean fclean re

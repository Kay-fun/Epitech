##
## EPITECH PROJECT, 2019
## 
## File description:
## lib_Makefile
##

LIBSRC	=	my_putchar.c		\
		my_putstr.c		\
		my_getnbr.c		\
		my_strlen.c		\
		my_put_error.c		\
		calc_size_str.c

LIBOBJ	=	$(LIBSRC:.c=.o)

RM	=	rm -f

CPPFLAGS	=	-I ../../include

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(LIBOBJ)
	ar rc libmy.a $(LIBOBJ)

clean:
	$(RM) $(LIBOBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) *~

re:	fclean all

.PHONY: all clean fclean re

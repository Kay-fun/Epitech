##
## EPITECH PROJECT, 2019
## lib
## File description:
## lib_Makefile
##

LIBSRC	=	my_putchar.c		\
		my_putstr.c		\
		my_getnbr.c		\
		my_strcmp.c		\
		add_char.c		\
		add_link.c		\
		calc_size.c		\
		calc_size_str.c		\
		charisnb.c		\
		my_compute_power_it.c	\
		my_inttostr.c		\
		my_put_error.c		\
		my_strlen.c		\
		my_put_nbr.c		\
		my_put_big_hex.c	\
		my_put_hex.c		\
		my_put_bin.c		\
		my_put_oct.c		\
		calc_i.c		\
		my_intlenforbin.c	\
		my_intlen.c		\
		verif_env.c		\
		modif_strcmp.c

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

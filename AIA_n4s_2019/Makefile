##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

LIB	=	./lib/my/

SOURCE	=	./src/

SRC	=	main.c					\
		$(SOURCE)st_info.c			\
		$(SOURCE)verif_end.c			\
		$(SOURCE)wait_end.c			\
		$(SOURCE)simulation_statut.c		\
		$(SOURCE)maj_st_info.c			\
		$(SOURCE)gestion_speed.c		\
		$(SOURCE)gestion_angle.c		\
		$(SOURCE)gestion_r_angle.c		\
		$(SOURCE)gestion_l_angle.c		\
		$(SOURCE)gestion_wheel.c		\
		$(SOURCE)put_cmd.c

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	ai

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

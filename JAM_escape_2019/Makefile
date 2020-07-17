##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

LIB		=	./lib/my/

SOURCE		=	./src/

CREATE		=	./src/create/

DISPLAY		=	./src/display/

INIT		=	./src/init/

MANAGE		=	./src/manage/

SRC		=	main.c				\
			$(MANAGE)event_window.c		\
			$(MANAGE)destroy_all.c		\
			$(MANAGE)gestion_light.c	\
			$(MANAGE)mouseonsprite.c	\
			$(MANAGE)movement_player.c	\
			$(MANAGE)manage_start.c		\
			$(MANAGE)gestion_keys.c		\
			$(MANAGE)hitbox_player_key.c	\
			$(MANAGE)malloc_map.c		\
			$(MANAGE)gestion_htp.c		\
			$(CREATE)create_layton.c	\
			$(CREATE)create_player.c	\
			$(CREATE)create_door.c		\
			$(CREATE)create_win_lose.c	\
			$(CREATE)create_clock.c		\
			$(CREATE)create_time.c		\
			$(CREATE)create_light.c		\
			$(CREATE)create_chest_key.c	\
			$(CREATE)create_htp.c		\
			$(INIT)init_struct_maze.c	\
			$(INIT)init_struct.c		\
			$(INIT)init_clock.c		\
			$(DISPLAY)display_maze.c	\
			$(DISPLAY)display.c		\
			$(DISPLAY)print_timer.c		\

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	escape

CPPFLAGS	=	-I ./include

CFLAGS		=	-Wall -Wextra

LDFLAGS		=	-L lib/my -lmy

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CSFML)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	make clean -C $(LIB)

fclean: clean
	make fclean -C $(LIB)

re:	fclean all

.PHONY: all clean fclean re

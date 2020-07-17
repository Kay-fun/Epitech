##
## EPITECH PROJECT, 2019
## Makefile compilation
## File description:
## makefile compilation
##

all:
	make -C ./generator
	make -C ./solver

clean:
	make clean -C ./generator
	make clean -C ./solver

fclean: clean
	make fclean -C ./generator
	make fclean -C ./solver

re:	fclean all

.PHONY: all clean fclean re

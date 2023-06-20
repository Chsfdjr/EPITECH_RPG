##
## EPITECH PROJECT, 2022
## makefile
## File description:
## make file
##

SRC	=	$(shell find ./src -name "*.c" -type f)

OBJ		=	$(SRC:.c=.o)

NAME	=	my_rpg

FLAG	=	-g -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lm

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) $(FLAG)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

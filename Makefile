##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## rtfm
##

CC			=	gcc

SRC			=	src/get_map.c		\
				src/display_map.c	\
				src/move_player.c	\
				src/get_pos.c		\
				src/key_event.c		\
				src/launch_game.c	\
				src/check_obj.c		\
				src/main.c			\

OBJ			=	$(SRC:.c=.o)

NAME		=	my_sokoban

CPPFLAGS	=	-I./include/

LDFLAGS		=	-L./lib

LDLIBS		=	-lmy -lncurses

LIB			=	./lib/libmy.a

all:	$(NAME)

$(NAME):	 $(LIB) $(OBJ)
				$(CC) $(OBJ) -o $(NAME) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)

debug:	fclean $(LIB) $(OBJ)
				$(CC) $(SRC) -o $(NAME) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) -W -Wall -Wextra -g

$(LIB):
				make -C ./lib/my/

clean:
				rm -f $(OBJ)
				make clean -C ./lib/my/

fclean: clean
				rm -f $(NAME)
				make fclean -C ./lib/my

re:	fclean all

.PHONY:	$(NAME) all clean fclean

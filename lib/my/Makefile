##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## rtfm
##

SRC			=	my_putchar.c				\
				my_strcmp.c					\
				my_strncmp.c				\
				my_strndup.c				\
				my_put_nbr.c				\
				my_strcpy.c					\
				my_strncpy.c				\
				my_pow.c					\
				my_putstr.c					\
				my_str_isalpha.c			\
				my_strstr.c					\
				my_revstr.c					\
				my_str_islower.c			\
				my_str_to_word_array.c		\
				my_str_isnum.c				\
				my_strupcase.c				\
				my_getnbr.c					\
				my_str_isprintable.c		\
				my_swap.c					\
				my_show_word_array.c		\
				my_str_isupper.c			\
				my_isneg.c					\
				my_strlen.c					\
				my_strcapitalize.c			\
				my_strlowcase.c				\
				my_intlen.c					\
				my_sort_int_array.c			\
				my_strcpaddress.c			\
				my_memset.c					\
				my_strdup.c					\
				my_put_nbr.c				\
				my_put_char.c				\
				my_put_uchar.c				\
				my_put_short.c				\
				my_put_ushort.c				\
				my_put_int.c				\
				my_put_uint.c				\
				my_put_long.c				\
				my_put_ulong.c				\
				my_put_long_long.c			\
				my_put_ulong_long.c			\
				my_put_address.c  			\
				my_strcat.c 				\
				my_strncat.c    			\
				my_int_to_str.c 			\


OBJ			=	$(SRC:.c=.o)

ARFLAGS 	=	rc

NAME		=	libmy.a

NAME_MY_H	=	my.h


all:		$(NAME)
			cp $(NAME) ./../$(NAME)
			cp ./my.h ./../../include/$(NAME_MY_H)

$(NAME):	$(OBJ)
			$(AR) $(ARFLAGS) $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean: 	clean
			$(RM) ../../include/$(NAME_MY_H)
			$(RM) ../$(NAME)
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

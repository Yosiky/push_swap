CC				=	cc
CFLAGS			=	-Wextra -Werror -Wall

DIR_OBJ			=	obj
DIR_SRC			=	src

HEADERS			=	src/ft_push_swap.h	\
					src/ft_stack.h		\

SRC				=	main				\
					ft_atoi				\
					ft_stack

OBJ				=	$(addprefix $(DIR_OBJ)/,$(SRC:=.o))

NAME			=	push_swap

all:				$(DIR_OBJ) $(NAME)

$(DIR_OBJ):
	mkdir -p $(DIR_OBJ)

$(DIR_OBJ)/%.o:		$(DIR_SRC)/%.c
	$(CC) $(CFLAGS) $< -c -o $@

$(NAME):			$(HEADERS) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean:				clean
	rm -rf $(NAME)

re:					fclean all

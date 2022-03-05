CC				=	cc
CFLAGS			=	-Wextra -Werror -Wall

DIR_OBJ			=	obj
DIR_SRC			=	src

HEADERS			=	src/ft_push_swap.h	\
					src/ft_stack.h		\

SRC				=	main				\
					ft_atoi				\
					ft_stack			\
					operation			\
					hardcode			\
					ft_stkmm			\
					ft_sort				\
					ft_stktop			\
					ft_stkback			\
					ft_score			\
					ft_min_score		\
					ft_find_min_score	\
					ft_insert			\
					ft_insert_togher	\
					ft_insert_r_rr		\
					ft_offset			\
					ft_split			\
					ft_substr

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

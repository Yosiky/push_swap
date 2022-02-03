CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror

OBJ_DIR			=	obj

DIR_SRC			=	src
DIR_LIB			=	src/lib
DIR_LST			=	src/lst

SRC_MAIN		=	main
SRC_LST			=	ft_lstclear		\
					ft_lstfind		\
					ft_lstnew
SRC_LIB			=	ft_atoi			\
					ft_strcpy

OBJ_MAIN		=	$(addprefix $(DIR_SRC)/,$(SRC_MAIN))
OBJ_LIB			=	$(addprefix $(DIR_LIB)/,$(SRC_LIB))
OBJ_LST			=	$(addprefix $(DIR_LST)/,$(SRC_LST))

OBJ				=	${OBJ_MAIN:=.o}	\
					${OBJ_LIB:=.o}	\
					${OBJ_LST:=.o}

NAME			=	push_swap


all:			$(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $@

${OBJ_DIR}/%.o:	%.c
	$(CC) $(CFLAGS) $< -c -o $@

$(NAME):		$(HEADER) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@


clean:
	rm -rf $(OBJ)

fclean:			clean
	rm -rf $(NAME)

re:				fclean all

NAME	=	push_swap

CC		=	gcc

SRCS 	= 	src/create_node.c src/ft_atoi.c src/ft_lstlast.c src/main.c src/ps.c src/ps.c src/r.c src/rr.c src/sort_big.c src/sort_small.c src/utils.c \

OBJS	=	${SRCS:.c=.o}

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			cc ${FLAGS} ${OBJS} -fsanitize=address -o ${NAME}

%.o : %.c
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

lldb:
	gcc -g $(SRCS) -o $(NAME)

.PHONY: 	all clean fclean re
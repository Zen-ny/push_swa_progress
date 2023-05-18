NAME = push_swap

SRCS = $(wildcard src/*.c utils/*.c)

OBJ = ${SRCS:.c=.o}
CH_OBJ = ${OBJ:.c=.o}

CC = gcc -g3 -fsanitize=address -fsanitize=undefined -fsanitize=undefined
CFLAGS = -Wall -Werror -Wextra -Iheader 

RM = rm -rf

all: ${NAME} ${CHECK}
${NAME}: ${OBJ}
		@${MAKE} -C ./libft
		@${CC} ${CFLAGS} ${OBJ} ./libft/libft.a -o ${NAME}

${CHECK}: ${CH_OBJ}
		@${CC} ${CFLAGS} ${CH_OBJ} ./libft/libft.a -o ${CHECK}

clean:
		@${MAKE} -C ./libft fclean
		@${RM} ${OBJ}
		@${RM} ${CH_OBJ}

fclean: clean
		@${RM} ${NAME}
		@${RM} ${CHECK}

re: fclean all 

.PHONY: all clean fclean re


SRCS	= megaphone.cpp

OBJS	= ${SRCS:.cpp=.o}
CC	= c++
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= megaphone

${NAME}: ${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}
all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all% 
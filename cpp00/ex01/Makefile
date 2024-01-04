SRCS = main.cpp

NAME = phonebook

INC = -I ./

FLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = ${SRCS:.c=.o}

${NAME} : ${OBJS}
			c++ ${FLAGS} ${INC} $(OBJS) -o $(NAME)

all : ${NAME}

%.o:%.c
		c++ ${FLAGS} -c $< -o $@

clean :
		rm -rf ${OBJS}

fclean : clean
		rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re

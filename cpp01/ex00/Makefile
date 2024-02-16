SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

NAME = brainz

INC = -I ./

FLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = ${SRCS:.cpp=.o}

${NAME} : ${OBJS}
			c++ ${FLAGS} ${INC} $(OBJS) -o $(NAME)

all : ${NAME}

%.o:%.cpp
		c++ ${FLAGS} -c $< -o $@

clean :
		rm -rf ${OBJS}

fclean : clean
		rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re

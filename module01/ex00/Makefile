SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

NAME = zombei

OBJ = $(SRC:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

all: $(NAME)
$(NAME): $(OBJ)
	$(CPP) $(OBJ) $(CPPFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
SRC = main.cpp Weapon.cpp HumanB.cpp HumanA.cpp

OBJ = $(SRC:.cpp=.o)
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = violence

all: $(NAME)
$(NAME): $(OBJ)
		$(CXX) $(OBJ) $(CPPFLAGS) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
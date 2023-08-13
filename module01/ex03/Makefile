SRC = main.cpp Weapon.cpp HumanB.cpp HumanA.cpp

OBJ = $(SRC:.cpp=.o)
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
NAME = violence

all: $(NAME)
$(NAME): $(OBJ)
		$(CPP) $(OBJ) $(CPPFLAGS) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Animal

CXX = c++

CXXFLAG = -Wall -Wextra -Werror #-fsanitize=address -g3

all: $(NAME)
$(NAME): $(OBJ)
		$(CXX) $(OBJ) $(CXXFLAG) -o $(NAME)

clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all
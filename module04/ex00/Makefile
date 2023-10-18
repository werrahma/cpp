SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Animal

CXX = c++

CXXFLAG = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJ)
		$(CXX) $(OBJ) $(CXXFLAG) -o $(NAME)

clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all
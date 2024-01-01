SRC = main.cpp Array.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Array

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all
SRC = ScalarConverter.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = ScalarConverter

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
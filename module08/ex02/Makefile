SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Mutated

CXX = c++

CXXFLAGS = -Wall -Werror -Werror -std=c++98

all: $(NAME)
$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all
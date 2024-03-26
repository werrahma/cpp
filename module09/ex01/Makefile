SRC = main.cpp RPN.cpp

OBJ = $(SRC:.cpp=.o)

NAME = RPN

CXX = c++

CXXFLAGS = -Wall -Werror -Werror -std=c++98 #-fsanitize=address -g3

all: $(NAME)
$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all
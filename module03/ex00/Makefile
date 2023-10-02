SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Fixed

CXX = c++

CXXFLAGS = #-Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(OBJ)
		$(CXX) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all
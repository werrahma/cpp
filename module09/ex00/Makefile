SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = btc

CXX = c++

CXXFLAGS = -Wall -Werror -Werror -std=c++98

all: $(NAME)
$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
		rm -rf $(OBJ)
fclean:
		rm -rf $(NAME)
re: fclean all
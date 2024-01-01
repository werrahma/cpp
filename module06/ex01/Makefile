SRC = Serializer.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Serializer

CXX = c++

CXXFLAGS = #-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
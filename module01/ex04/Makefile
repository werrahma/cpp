SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = replace

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CPPFLAGS) -o $(NAME)
clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all
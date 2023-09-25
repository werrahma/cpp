SRC = ex01.cpp

NAME = PhoneBook

OBJ = $(SRC:.cpp=.o)

CXX = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all: $(NAME)
$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CPPFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

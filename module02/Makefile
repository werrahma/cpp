SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

NAME = fixid

CXX = c++

CXXFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(OBJ)
		$(CXX) $(OBJ) $(CXXFLAG) -o $(NAME)

clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all
SRC = Bureaucrat.cpp main.cpp

NAME = Bureaucrat

OBJ = $(SRC:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) $(CPPFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
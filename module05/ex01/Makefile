SRC = Bureaucrat.cpp main.cpp Form.cpp

NAME = Bureaucrat

OBJ = $(SRC:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) $(CPPFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
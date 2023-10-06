SRC = main.cpp Polymorphism.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Polymorphism

CXX = c++

CXXFLAG = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJ)
		$(CXX) $(OBJ) $(CXXFLAG) -o $(NAME)

clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all
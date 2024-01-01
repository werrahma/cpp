SRC = Base.cpp main.cpp children.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Identify

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=addreIdentifyss -g3

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
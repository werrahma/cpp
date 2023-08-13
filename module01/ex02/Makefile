SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror

NAME = brain

all: $(NAME)
$(NAME): $(OBJ)
		$(CPP) $(OBJ) $(CPPFLAGS) -o $(NAME)
clean:
	rm -fr $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
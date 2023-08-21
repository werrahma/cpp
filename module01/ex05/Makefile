SRC = main.cpp harl.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = harl

all: $(NAME)
$(NAME): $(OBJ)
		$(CPP) $(OBJ) $(CPPFLAGS) -o $(NAME)
clean:
	rm -fr $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
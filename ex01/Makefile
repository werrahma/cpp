SRC = ex01.cpp

NAME = PhoneBook

OBJ = $(SRC:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJ)
	$(CPP) $(OBJ) $(CPPFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
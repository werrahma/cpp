SRC = main.cpp AMateria.cpp ice.cpp cure.cpp ICharacter.cpp Character.cpp IMateriaSource.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

CPPFLAGS = -fsanitize=address -g3 #-Wall -Wextra -Werror -std=c++98

NAME = AMateria

all: $(NAME)
$(NAME): $(OBJ)
		$(CPP) $(OBJ) $(CPPFLAGS) -o $(NAME)
clean:
	rm -fr $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
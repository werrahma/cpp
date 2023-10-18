#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat    &Cat::operator=(const Cat &Cat)
{
    std::cout << "Cat Copy assegment called" << std::endl;
    type = Cat.type;
    return *this;
}

Cat::Cat(const Cat &Cat) : Animal(Cat)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = Cat;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "cats don’t bark" << std::endl;
}
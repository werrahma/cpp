#include "Animal.hpp"

Animal::Animal()
{
    type = "Defaul";
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal    &Animal::operator=(const Animal &Animal)
{
    std::cout << "Animal Copy assegment called" << std::endl;
    type = Animal.type;
    return *this;
}

Animal::Animal(const Animal &Animal)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = Animal;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}

void    Animal::makeSound() const
{
    std::cout << "animal makeSound called" << std::endl;
}
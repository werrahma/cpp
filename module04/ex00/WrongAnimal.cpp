#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "Defaul";
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal    &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal Copy assegment called" << std::endl;
    type = WrongAnimal.type;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = WrongAnimal;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}
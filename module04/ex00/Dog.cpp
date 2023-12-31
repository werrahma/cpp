#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog    &Dog::operator=(const Dog &Dog)
{
    std::cout << "Dog Copy assegment called" << std::endl;
    type = Dog.type;
    return *this;
}

Dog::Dog(const Dog &Dog) : Animal(Dog)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = Dog;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "dogs don’t meow" << std::endl;
}

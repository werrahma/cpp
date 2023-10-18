#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog    &Dog::operator=(const Dog &Dog)
{
    std::cout << "Dog Copy assegment called" << std::endl;
    delete this->brain;
    type = Dog.type;
    this->brain = new Brain(*Dog.brain);
    return *this;
}

Dog::Dog(const Dog &Dog) : Animal(Dog)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = Dog;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "dogs don’t meow" << std::endl;
}

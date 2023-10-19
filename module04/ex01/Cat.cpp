#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat    &Cat::operator=(const Cat &Cat)
{
    std::cout << "Cat Copy assegment called" << std::endl;
    delete this->brain;
    type =  Cat.type;
    this->brain = new Brain(*Cat.brain);
    return *this;
}

Cat::Cat(const Cat &Cat) : Animal(Cat)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = Cat;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "cats don’t bark" << std::endl;
}

void    Cat::set(std::string name, int i)
{
    brain->set(name, i);
}

std::string    Cat::get(int i) const
{
    return brain->get(i);
}
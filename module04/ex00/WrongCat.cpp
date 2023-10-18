#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat    &WrongCat::operator=(const WrongCat &WrongCat)
{
    std::cout << "WrongCat Copy assegment called" << std::endl;
    type = WrongCat.type;
    return *this;
}

WrongCat::WrongCat(const WrongCat &WrongCat) : WrongAnimal(WrongCat)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = WrongCat;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCats don’t bark" << std::endl;
}
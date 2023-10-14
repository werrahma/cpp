#include "cure.hpp"

cure::cure()
{
    // std::cout << "cure default constructor called" << std::endl;
}

cure    &cure::operator=(const cure &cure)
{
    // std::cout << "cure copy assigment called" << std::endl;
    return *this;
}

cure::cure(const cure &cure) : AMateria(cure)
{
    // std::cout << "cure copy constructor called" << std::endl;
    *this = cure;
}

cure::~cure()
{
    // std::cout << "cure destructor called" << std::endl;
}

cure *cure::clone() const
{
    cure *obj = new cure();
    return (obj);
}

void    cure::use(ICharacter &target)
{
    // std::cout << "Ice: shoots an ice bolt at " << target.getName() << std::endl;
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
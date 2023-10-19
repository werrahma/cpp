#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
    // std::cout << "cure default constructor called" << std::endl;
}

Cure    &Cure::operator=(const Cure &cure)
{
    this->type = cure.type;
    // std::cout << "cure copy assigment called" << std::endl;
    return *this;
}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
    // std::cout << "cure copy constructor called" << std::endl;
    *this = cure;
}

Cure::~Cure()
{
    // std::cout << "cure destructor called" << std::endl;
}

Cure *Cure::clone() const
{
    Cure *obj = new Cure();
    return (obj);
}

void    Cure::use(ICharacter &target)
{
    // std::cout << "Ice: shoots an ice bolt at " << target.getName() << std::endl;
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
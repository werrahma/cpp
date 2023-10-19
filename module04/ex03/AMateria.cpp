#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria()
{
    //std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &AM)
{
    // std::cout << "AMateria copy assigment called" << std::endl;
    type = AM.type;
    return *this;
}

AMateria::AMateria(const AMateria &AM)
{
    // std::cout << "AMateria copy constructor called" << std::endl;
    *this = AM;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

std::string const &AMateria::getType() const
{
    return (type);
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "base class use function called" << std::endl;
    std::cout << target.getName() << std::endl;
    // std::cout << "Ice: shoots an ice bolt at " << target.getName() << std::endl;
    // std::cout << "Cure:  heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}
#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria()
{
    //
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
    // target = Character();
    // std::cout << "Ice: shoots an ice bolt at " << target.getName() << std::endl;
    // std::cout << "Cure:  heals " << target.getName() << "’s wounds *" << std::endl;
}
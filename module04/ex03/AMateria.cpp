#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
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
    (void)target;
    // std::cout << "Ice: shoots an ice bolt at " << target << std::endl;
    // std::cout << "Cure:  heals " << target << "’s wounds *" << std::endl;
}
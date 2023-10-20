#include "Ice.hpp"


Ice::Ice()
{
    type = "ice";
    // std::cout << "ice default constructor called" << std::endl;
}

Ice    &Ice::operator=(const Ice &ice)
{
    // std::cout << "ice copy assigment called" << std::endl;
    this->type = ice.type;
    return *this;
}

Ice::Ice(const Ice &ice) : AMateria(ice)
{
    // std::cout << "ice copy constructor called" << std::endl;
    *this = ice;
}

Ice::~Ice()
{
    // std::cout << "ice destructor called" << std::endl;
}

Ice *Ice::clone() const
{
    Ice *obj = new Ice();
    return (obj);
}

void    Ice::use(ICharacter &target)
{
    target = Character();
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    // std::cout << "Cure:  heals " << target.getName() << "’s wounds *" << std::endl;
}
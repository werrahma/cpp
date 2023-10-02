#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    Healt = 10;
    Energy = 10;
    Damage = 0;
}

void    ClapTrap::attack(const std::string &target)
{
    Energy -= 1;
    // std::cout << target << "attacks" << std::endl;
    std::cout << "ClapTrap" << name << "attacks" << target << "causing" << Damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{

}

void    ClapTrap::beRepaired(unsigned int amount)
{
    Energy += amount - 1;
    std::cout << "ClapTrap repairs itself, it gets " << amount << "hit points back" << std::endl;
}
#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    Healt = 10;
    Energy = 10;
    Damage = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
    Healt = 10;
    Energy = 10;
    Damage = 0;
}

void    ClapTrap::attack(const std::string &target)
{
    Energy -= 1;
    if (Energy <= 0 || Healt <= 0)
        std::cout << "ClapTrap can’t attack" << std::endl;
    else
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << Damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    Healt -= amount;
    if (Energy <= 0 || Healt <= 0)
        std::cout << "ClapTrap can’t takeDamage" << std::endl;
    else
        std::cout << "ClapTrap " << name << " takeDamage amount " << amount << std::endl; 
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    Energy += amount - 1;
    if (Energy <= 0 || Healt <= 0)
        std::cout << "ClapTrap can’t Repaired it self" << std::endl;
    else
        std::cout << "ClapTrap repairs itself, it gets " << amount << "hit points back" << std::endl;
}
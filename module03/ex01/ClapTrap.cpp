#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    Healt = 100;
    Energy = 50;
    Damage = 20;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
    Healt = 100;
    Energy = 50;
    Damage = 20;
}

void    ClapTrap::attack(const std::string &target)
{
    Energy -= 1;
    if (Energy <= 0 || Healt <= 0)
        std::cout << "ScavTrap can’t attack" << std::endl;
    // std::cout << target << "attacks" << std::endl;
    else
        std::cout << "ScavTrap " << name << " attacks " << target << " causing " << Damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    Healt -= amount;
    if (Energy <= 0 || Healt <= 0)
        std::cout << "ScavTrap can’t takeDamage" << std::endl;
    else
        std::cout << "ScavTrap " << name << " takeDamage amount " << amount << std::endl; 
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    Energy += amount - 1;
    if (Energy <= 0 || Healt <= 0)
        std::cout << "ScavTrap can’t Repaired it self" << std::endl;
    else
        std::cout << "ScavTrap repairs itself, it gets " << amount << "hit points back" << std::endl;
}
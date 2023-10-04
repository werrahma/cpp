#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Parametrized Constructor called" << std::endl;
    this->name = name;
    Healt = 10;
    Energy = 10;
    Damage = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
    this->name = "Default";
    Healt = 10;
    Energy = 10;
    Damage = 0;
}

void    ClapTrap::attack(const std::string &target)
{
    if (Energy <= 0 || Healt <= 0)
    {
        std::cout << "ClapTrap can’t attack" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << Damage << " points of damage!" << std::endl;
    Energy -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (Healt <= 0)
    {
        std::cout << "ClapTrap can’t takeDamage" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " takeDamage amount " << amount << std::endl; 
    Healt -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy <= 0 || Healt <= 0)
    {
        std::cout << "ClapTrap can’t Repaired it self" << std::endl;
        return ;
    }
    Healt += amount;
    Energy -= 1;
    std::cout << "ClapTrap repairs itself, it gets " << amount << "hit points back" << std::endl;
}
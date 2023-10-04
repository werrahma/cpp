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
    std::cout << "Parametrized Constructor called" << std::endl;
}

ClapTrap::ClapTrap()
{
    name = "Default";
    Healt = 10;
    Energy = 10;
    Damage = 0;
    std::cout << "Default Constructor called" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (Energy <= 0 || Healt <= 0)
    {
        std::cout << "FragTrap can’t attack" << std::endl;
        return ;
    }
    Energy -= 1;
    std::cout << "FragTrap " << name << " attacks " << target << " causing " << Damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (Energy <= 0 || Healt <= 0)
    {
        std::cout << "FragTrap can’t takeDamage" << std::endl;
        return ;
    }
    Healt -= amount;
    std::cout << "FragTrap " << name << " takeDamage amount " << amount << std::endl; 
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy <= 0 || Healt <= 0)
    {
        std::cout << "FragTrap can’t Repaired it self" << std::endl;
        return ;
    }
    Healt += amount;
    Energy -= 1;
    std::cout << "FragTrap repairs itself, it gets " << amount << "hit points back" << std::endl;
}
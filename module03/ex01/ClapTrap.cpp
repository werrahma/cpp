#include "ClapTrap.hpp"

ClapTrap    &ClapTrap::operator=(ClapTrap &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    name = obj.name;
    Healt = obj.Healt;
    Energy = obj.Energy;
    Damage = obj.Damage;
    return obj;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
    std::cout << "copy constructor called" << std::endl;
    *this = obj;
}


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
    name = "Default";
    Healt = 10;
    Energy = 10;
    Damage = 0;
}

void    ClapTrap::attack(const std::string &target)
{
    if (Energy <= 0 || Healt <= 0)
    {
        std::cout << "ScavTrap can’t attack" << std::endl;
        return ;
    }
    Energy -= 1;
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << Damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (Energy <= 0 || Healt <= 0)
    {
        std::cout << "ScavTrap can’t takeDamage" << std::endl;
        return ;
    }
    Healt -= amount;
    std::cout << "ScavTrap " << name << " takeDamage amount " << amount << std::endl; 
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy <= 0 || Healt <= 0)
    {
        std::cout << "ScavTrap can’t Repaired it self" << std::endl;
        return ;
    }
    Energy += amount - 1;
    std::cout << "ScavTrap repairs itself, it gets " << amount << "hit points back" << std::endl;
}
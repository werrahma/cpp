#include "ClapTrap.hpp"


ClapTrap    &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    name = obj.name;
    Health = obj.Health;
    Energy = obj.Energy;
    Damage = obj.Damage;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
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
    Health = 10;
    Energy = 10;
    Damage = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
    this->name = "Default";
    Health = 10;
    Energy = 10;
    Damage = 0;
}

void    ClapTrap::attack(const std::string &target)
{
    if (Energy <= 0 || Health <= 0)
    {
        std::cout << "ClapTrap can’t attack" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << Damage << " points of damage!" << std::endl;
    Energy -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (Health <= 0)
    {
        std::cout << "ClapTrap can’t takeDamage" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " takeDamage amount " << amount << std::endl; 
    Health -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy <= 0 || Health <= 0)
    {
        std::cout << "ClapTrap can’t Repaired it self" << std::endl;
        return ;
    }
    Health += amount;
    Energy -= 1;
    std::cout << "ClapTrap repairs itself, it gets " << amount << "hit points back" << std::endl;
}
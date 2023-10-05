#include "ScavTrap.hpp"

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    name = obj.name;
    Health = obj.Health;
    Energy = obj.Energy;
    Damage = obj.Damage;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    name = obj.name;
    Health = obj.Health;
    Energy = obj.Energy;
    Damage = obj.Damage;
    std::cout << "copy constructor called" << std::endl;
}

ScavTrap::ScavTrap()
{
    Health = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "Default constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    Health = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "paramitrized constructor of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap called" << std::endl;
}
void    ScavTrap::attack(const std::string &target)
{
    if (Energy <= 0 || Health <= 0)
    {
        std::cout << "ScavTrap can’t attack" << std::endl;
        return ;
    }
    Energy -= 1;
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << Damage << " points of damage!" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (Energy <= 0 || Health <= 0)
    {
        std::cout << "ScavTrap can’t takeDamage" << std::endl;
        return ;
    }
    Health -= amount;
    std::cout << "ScavTrap " << name << " takeDamage amount " << amount << std::endl; 
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (Energy <= 0 || Health <= 0)
    {
        std::cout << "ScavTrap can’t Repaired it self" << std::endl;
        return ;
    }
    Energy += amount - 1;
    std::cout << "ScavTrap repairs itself, it gets " << amount << "hit points back" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
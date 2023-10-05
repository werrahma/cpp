#include "ScavTrap.hpp"

ScavTrap &ScavTrap::operator=(ScavTrap &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    name = obj.name;
    Healt = obj.Healt;
    Energy = obj.Energy;
    Damage = obj.Damage;
    return obj;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "copy constructor called" << std::endl;
}

ScavTrap::ScavTrap()
{
    Healt = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "Default constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    Healt = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "paramitrized constructor of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
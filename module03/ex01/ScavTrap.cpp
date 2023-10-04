#include "ScavTrap.hpp"

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
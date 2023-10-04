#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    Healt = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "Default constructor of ScavTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    Healt = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "paramitrized constructor of ScavTrap called" << std::endl;
}

FragTrap::FragTrap()
{
    Healt = 100;
    Energy = 100;
    Damage = 30;
    std::cout << "Defualt constructor of FragTrap called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of FragTrap called" << std::endl;
}
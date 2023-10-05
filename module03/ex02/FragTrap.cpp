#include "FragTrap.hpp"

FragTrap &FragTrap::operator=(FragTrap &obj)
{
    std::cout << "copy assegment called" << std::endl;
    name = obj.name;
    Healt = obj.Healt;
    Energy = obj.Energy;
    Damage = obj.Damage;
    return obj;
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    Healt = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "paramitrized constructor of FragTrap called" << std::endl;
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
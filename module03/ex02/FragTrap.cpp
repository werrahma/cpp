#include "FragTrap.hpp"

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "copy assegment called" << std::endl;
    name = obj.name;
    Health = obj.Health;
    Energy = obj.Energy;
    Damage = obj.Damage;
    return *this;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    name = obj.name;
    Health = obj.Health;
    Energy = obj.Energy;
    Damage = obj.Damage;
    std::cout << "copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    Health = 100;
    Energy = 100;
    Damage = 30;
    std::cout << "paramitrized constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap()
{
    Health = 100;
    Energy = 100;
    Damage = 30;
    std::cout << "Defualt constructor of FragTrap called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of FragTrap called" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "positive high fives request" << std::endl;
}
#include "Zombie.hpp"
void Zombie::announce( void )
{
    std::cout << "name : " << name << std::endl;
}

void    Zombie::setter(std::string name)
{
    this->name = name;
}

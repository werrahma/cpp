#include "HumanB.hpp"
#include "Weapon.hpp"

void    HumanB::setWeapon(Weapon &club)
{
    this->obj = &club;
}


void    HumanB::attack()
{
    if (obj)
        std::cout << name << " attacks with their " << obj->getType() << std::endl;
    else
        std::cerr << "weapon not set" << std::endl;
}

HumanB::HumanB(std::string str)
{
    obj = NULL;
    name = str;
}
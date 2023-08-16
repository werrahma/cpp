#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    std::string name;
    Weapon *obj;
    public:
        HumanB(std::string str)
        {
            name = str;
        }
        void    setWeapon(Weapon &club);
        void    attack()
        {
            std::cout << name << " attacks with their " << obj->getType() << std::endl;
        }

};





#endif
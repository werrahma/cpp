#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    std::string name;
    Weapon &obj;
    public:
        HumanA(std::string str, Weapon &weapon):name(str), obj(weapon){}
        void    attack();

};



int &a = 0;

#endif
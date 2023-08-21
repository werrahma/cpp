#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>


class Weapon
{
    std::string type;
    public:
        Weapon();
        Weapon(std::string name);
        const std::string&  getType();
        void    setType(std::string type);
};

#endif
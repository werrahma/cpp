#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>


class Weapon
{
    std::string type;
    public:
        Weapon()
        {
            //default
        }
        Weapon(std::string name)
        {
            this->type = name;
        }
        const std::string&  getType()
        {
            return (this->type);
        }
        void    setType(std::string type)
        {
            this->type = type;
        }
};

#endif
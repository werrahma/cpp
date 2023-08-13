#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>


class Weapor
{
    std::string type;
    public:
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
#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <iomanip>

class   Zombie
{
    std::string name;
    public:
        setter_mame(std::string name)
        {
            this->name = name;
        }
        void announce( void )
        {
            std::cout << "name : " << name << std::endl;
        }
};


#endif
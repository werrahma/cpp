#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <iomanip>

class   Zombie
{
    std::string name;
    public:
        Zombie(std::string name)
        {
            std::cout << "Zombie constructor called" << std::endl;
            this->name = name;
        }
        ~Zombie()
        {
            std::cout << "Zombie destructor called" << std::endl;

        }
        void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
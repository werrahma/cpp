#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class   Zombie
{
    std::string name;
    public:
        // Zombie(std::string name)
        // {
        //     std::cout << "Zombie constructor called" << std::endl;
        //     this->name = name;
        // }
        // ~Zombie()
        // {
        //     std::cout << "Zombie destructor called" << std::endl;

        // }
        void    announce( void );
        void    setter(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
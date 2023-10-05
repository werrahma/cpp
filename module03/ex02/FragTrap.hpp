#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
    public:
        FragTrap(FragTrap &obj);
        FragTrap &operator=(FragTrap &obj);
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
};

#endif
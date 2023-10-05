#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    public:
        ScavTrap (ScavTrap &obj);
        ScavTrap &operator=(ScavTrap &obj);
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
};

#endif
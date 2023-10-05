#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    public:
        ScavTrap (const ScavTrap &obj);
        ScavTrap &operator=(const ScavTrap &obj);
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();
};

#endif
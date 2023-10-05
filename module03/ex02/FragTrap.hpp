#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
    public:
        FragTrap(const FragTrap &obj);
        FragTrap &operator=(const FragTrap &obj);
        FragTrap();
        FragTrap(std::string name);
        void highFivesGuys(void);
        ~FragTrap();
};

#endif
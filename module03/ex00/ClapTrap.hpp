#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include "iostream"
class ClapTrap
{
    std::string name;
    int Healt;
    int Energy;
    int Damage;
    public:
        ClapTrap(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif
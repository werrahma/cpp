#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include "iostream"
class ClapTrap
{
    protected:
        std::string name;
        int Healt;
        int Energy;
        int Damage;
    public:
        ClapTrap    &operator=(ClapTrap &obj);
        ClapTrap(ClapTrap &obj);
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif
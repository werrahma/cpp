#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"
#include <iostream>
// class AMaterua;
// class ICharacter;

class   Character : public ICharacter
{
    AMateria *Materias[4];
    std::string name;
    public:
            Character();
            Character(const std::string name);
            Character(Character &Character);
            Character    &operator=(Character &Character);
            void equip(AMateria* m);
            std::string const & getName() const;
            void unequip(int idx);
            void use(int idx, ICharacter& target);
            ~Character();
            
};

#endif
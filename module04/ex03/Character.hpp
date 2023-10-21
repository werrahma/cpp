#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"
#include <iostream>

struct node
{
    AMateria *ptr;
    struct node *next;
};


class   Character : public ICharacter
{
    AMateria *Materias[4];
    std::string name;
    node    *list;
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

void    AddBack(node **list, node *next);
node    *lstnew(AMateria *ptr);

#endif
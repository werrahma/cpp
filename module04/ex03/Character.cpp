#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    // std::cout << "Character default constructor called" << std::endl;
    for(int i = 0; i < 4; i++)
        Materias[i] = NULL;
}

Character::Character(std::string name)
{
    // std::cout << "Character Parametrized constructor called" << std::endl;
    for(int i = 0; i < 4; i++)
        Materias[i] = NULL;
    this->name = name;
}

Character    &Character::operator=(Character &Character)
{
    // std::cout << "Character copy assigment called" << std::endl;
    for(int idx = 0; idx < 4 && Character.Materias[idx]; idx++)
        delete Character.Materias[idx];
    for (int j = 0; j < 4; j++)
        Materias[j] = Character.Materias[j]->clone();
    for (int i = 0; i < 4; i++)
        Materias[i] = Character.Materias[i];
    return *this;
}

Character::Character(Character &Character)
{
    // std::cout << "Character copy constructor called" << std::endl;
    // for (int j = 0; j < 4; j++)
    //     Materias[j] = Character.Materias[j]->clone();
    // for (int i = 0; i < 4; i++)
    //     Materias[i] = Character.Materias[i];
    *this = Character;
}

Character::~Character()
{
    // std::cout << "Character destructor called" << std::endl;
}

void    Character::equip(AMateria *m)
{
    for(int i = 0; i < 4; i++)
    {
        if (!Materias[i])
        {
            Materias[i] = m;
            break;
        }
    }
}

void    Character::use(int idx, ICharacter& target)
{
    Materias[idx]->use(target);
}

std::string const &Character::getName() const
{
    return name;
}

void    Character::unequip(int idx)
{
    for (int i = 0; i < 4; i++)
    {
        if (i == idx)
        {
            Materias[i] = NULL;
            break;
        }
    }
}
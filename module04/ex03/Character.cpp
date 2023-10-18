#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    // std::cout << "Character default constructor called" << std::endl;
    for(int i = 0; i < 4; i++)
        Materias[i] = NULL;
    list = NULL;
}

Character::Character(std::string name)
{
    // std::cout << "Character Parametrized constructor called" << std::endl;
    for(int i = 0; i < 4; i++)
        Materias[i] = NULL;
    this->name = name;
    list = NULL;
}

Character    &Character::operator=(Character &Character)
{
    // std::cout << "Character copy assigment called" << std::endl;
    list = Character.list;
    for(int idx = 0; idx < 4 && Materias[idx]; idx++)
        delete Materias[idx];
    for (int j = 0; j < 4 && Character.Materias[j]; j++)
        Materias[j] = Character.Materias[j]->clone();
    return *this;
}

Character::Character(Character &Character)
{
    // std::cout << "Character copy constructor called" << std::endl;
    *this = Character;
}

Character::~Character()
{
    node *tmp;
    while(list)
    {
        tmp = list;
        list = list->next;
        delete tmp->ptr;
        delete tmp;
    }
    delete list;
    list = NULL;
    for (int i = 0; i < 4; i++)
        delete Materias[i];
}

void    Character::equip(AMateria *m)
{
    int i;
    for(i = 0; i < 4; i++)
    {
        if (!Materias[i])
        {
            Materias[i] = m;
            break;
        }
    }
    if (i > 4)
        delete m;
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
    for (int i = 0; i < 4 && idx < 4; i++)
    {
        if (i == idx)
        {
            AddBack(&list, lstnew(Materias[i]));
            Materias[i] = NULL;
            break;
        }
    }
}

node    *lstnew(AMateria *ptr)
{
    node *list;
    list = new node;
    list->ptr = ptr;
    list->next = NULL;
    return list;
}

void    AddBack(node **list, node *next)
{
    if (*list == NULL)
	{
		*list = next;
		return ;
	}
    node *tmp = *list;
    while ((tmp)->next){
        (tmp) = (tmp)->next;
    }
  
    (tmp)->next = next;
}
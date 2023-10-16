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
    /// check if delete null valid
    for(int idx = 0; idx < 4 && Materias[idx]; idx++)
        delete Materias[idx];
    for (int j = 0; j < 4 && Character.Materias[j]; j++)
        Materias[j] = Character.Materias[j]->clone();
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
    node *tmp = list;
    for (list; list; list->next)
        delete list->ptr;
    list = tmp;
    for (list; list; list->next)
    {
        tmp = list; 
        list = list->next;
        delete tmp;
    }
    // std::cout << "Character destructor called" << std::endl;
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
    //delete m if i == 4;
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
    if (idx < 4)
        AddBack(&list, lstnew(Materias[idx]));
    for (int i = 0; i < 4 && idx < 4; i++)
    {
        if (i == idx)
        {
            Materias[i] = NULL;
            break;
        }
    }
}

node    *lstnew(AMateria *ptr)
{
    node *list;
    list = NULL;
    list = new node;
    list->ptr = ptr;
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
    while ((*list)->next)
        (*list) = (*list)->next;
    (*list)->next = next;
    next->next = NULL;
    *list = tmp;
}
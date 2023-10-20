#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


MateriaSource::MateriaSource()
{
    ///default constructor
    for (int i = 0; i < 4; i++)
        AM[i] = NULL;
}

MateriaSource    &MateriaSource::operator=(MateriaSource &source)
{
    for (int i = 0; i < 4; i++)
        delete AM[i++];
    for (int i = 0; i < 4 && source.AM[i]; i++)
        AM[i] = source.AM[i]->clone();
    return *this;
}

MateriaSource::MateriaSource(MateriaSource &source)
{
    *this = source;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete AM[i];
}

void    MateriaSource::learnMateria(AMateria* AMaterias)
{
    if (!AMaterias)
        return ;
    int i;
    for(i = 0; i < 4; i++)
    {
        if (!AM[i])
        {
            AM[i] = AMaterias;
            break;
        }
    }
    if (i == 4)
        delete AMaterias;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4 && AM[i]; i++)
    {
        if (AM[i]->getType() == type)
        {
            return AM[i]->clone();
        }
    }
    return NULL;
}

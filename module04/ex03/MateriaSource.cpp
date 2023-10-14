#include "MateriaSource.hpp"
#include "ice.hpp"
#include "cure.hpp"

void    MateriaSource::learnMateria(AMateria* AMaterias)
{
    AMaterias->clone();
    // else
    //     std::cout << "MateriaSource is full. Cannot learn more Materias." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type == "ice")
    {
        AMateria *AMateria = new ice();
        return AMateria;
    }
    else if(type == "cure")
    {
        AMateria *AMateria = new cure();
        return AMateria;
    }
    return NULL;
}

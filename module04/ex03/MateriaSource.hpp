#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"


class   MateriaSource : public IMateriaSource
{
    void learnMateria(AMateria* AMaterias);
    AMateria* createMateria(std::string const & type);
};

#endif
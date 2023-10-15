#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class   MateriaSource : public IMateriaSource
{
    AMateria *AM[4];
    public:
    MateriaSource();
    MateriaSource(MateriaSource &source);
    MateriaSource    &operator=(MateriaSource &source);
    ~MateriaSource();
    void learnMateria(AMateria* AMaterias);
    AMateria* createMateria(std::string const & type);
};

#endif
#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class ice : public AMateria
{
    public:
        ice();
        ice(const ice &ice);
        ice    &operator=(const ice &ice);
        ~ice();
        ice* clone() const;
};

#endif
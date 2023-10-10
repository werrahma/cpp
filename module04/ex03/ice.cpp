#include "ice.hpp"


ice::ice()
{
    std::cout << "ice default constructor called" << std::endl;
}

ice    &ice::operator=(const ice &ice)
{
    std::cout << "ice copy assigment called" << std::endl;
    return *this;
}

ice::ice(const ice &ice) : AMateria(ice)
{
    std::cout << "ice copy constructor called" << std::endl;
    *this = ice;
}

ice::~ice()
{
    std::cout << "ice destructor called" << std::endl;
}

ice *ice::clone() const
{
    ice *obj = new ice();
    return (obj);
}
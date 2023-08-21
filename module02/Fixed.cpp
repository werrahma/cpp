#include "Fixed.hpp"

int fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}

fixed::~fixed()
{
    std::cout << "Destructor called" << std::endl;
}

fixed::fixed(fixed &obj)
{
    std::cout << "copy constructor called" << std::endl;
    this->fixed_point = obj.fixed_point;
}

fixed::fixed()
{
    fixed_point = 0;
    std::cout << "default constructor called" << std::endl;
}


void fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
}
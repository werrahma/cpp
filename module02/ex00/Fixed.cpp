#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->Fixed_point);
}

Fixed   &Fixed::operator=(Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    Fixed_point = obj.getRawBits();
    return obj; 
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &obj)
{
    std::cout << "copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed()
{
    Fixed_point = 0;
    std::cout << "default constructor called" << std::endl;
}


void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->Fixed_point = raw;
}
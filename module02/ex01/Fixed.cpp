#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->Fixed_point);
}

Fixed   const &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    Fixed_point = obj.getRawBits();
    return obj;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "copy constructor called" << std::endl;
    *this = obj;
    // this->Fixed_point = obj.Fixed_point;
}

Fixed::Fixed()
{
    Fixed_point = 0;
    std::cout << "default constructor called" << std::endl;
}
Fixed::Fixed(const int nb)
{
    Fixed_point = nb << fractional;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb)
{
    Fixed_point = roundf(nb  * (1 << fractional));
    std::cout << "Float constructor called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->Fixed_point = raw;
}

float Fixed::toFloat(void) const
{
    float oldValue = (float)Fixed_point / (1 << fractional);
    return (oldValue);
}

int Fixed::toInt( void ) const
{
    return (Fixed_point >> fractional);
}
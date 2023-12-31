#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->Fixed_point);
}

Fixed   const &Fixed::operator=(const Fixed &obj)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    Fixed_point = obj.Fixed_point;
    return obj;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    // std::cout << "copy constructor called" << std::endl;
    *this = obj;
    // this->Fixed_point = obj.Fixed_point;
}

Fixed::Fixed()
{
    Fixed_point = 0;
    // std::cout << "default constructor called" << std::endl;
}
Fixed::Fixed(const int nb)
{
    Fixed_point = nb << fractional;
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb)
{
    Fixed_point = roundf(nb  * (1 << fractional));
    // std::cout << "Float constructor called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->Fixed_point = raw;
}

float Fixed::toFloat(void) const
{
    float oldValue = (float)Fixed_point / (1 << fractional);
    return (oldValue);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}

int Fixed::toInt( void ) const
{
    return (Fixed_point >> fractional);
}

Fixed  &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed  &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed  &Fixed::max(Fixed &a, Fixed &b)
{
    if (a < b)
        return (b);
    return (a);
}

const Fixed  &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (b);
    return (a);
}

bool   Fixed::operator>(const Fixed &obj) const
{
    return (this->Fixed_point > obj.Fixed_point);
}

bool   Fixed::operator<(const Fixed &obj) const
{
    return (this->Fixed_point < obj.Fixed_point);
}

bool   Fixed::operator>=(const Fixed &obj) const
{
    return (this->Fixed_point >= obj.Fixed_point);
}

bool   Fixed::operator<=(const Fixed &obj) const
{
    return (this->Fixed_point <= obj.Fixed_point);
}

bool   Fixed::operator==(const Fixed &obj) const
{
    return (this->Fixed_point == obj.Fixed_point);
}

bool   Fixed::operator!=(const Fixed &obj) const
{
    return (this->Fixed_point != obj.Fixed_point);
}

Fixed const Fixed::operator+(const Fixed &obj)
{
    Fixed result;
    result.Fixed_point = this->Fixed_point + obj.Fixed_point;
    return (result);
}

Fixed const Fixed::operator-(const Fixed &obj)
{
    Fixed result;
    result.Fixed_point = this->Fixed_point - obj.Fixed_point;
    return (result);
}

Fixed const Fixed::operator*(const Fixed &obj)
{
    Fixed result;
    result.Fixed_point = this->Fixed_point * obj.Fixed_point;
    result.Fixed_point = result.toFloat();
    return (result);
}

Fixed const Fixed::operator/(const Fixed &obj)
{
    Fixed result;
    result.Fixed_point = this->Fixed_point / obj.Fixed_point;
    result.Fixed_point = result.toFloat();
    return (result);
}

Fixed &Fixed::operator++()
{
    ++Fixed_point;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    Fixed_point++;
    return tmp;
}

Fixed &Fixed::operator--()
{
    --Fixed_point;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    Fixed_point--;
    return tmp;
}
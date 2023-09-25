#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <tgmath.h>


class Fixed
{
    int Fixed_point;
    static const int fractional = 8;
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed &obj);
        Fixed   const &operator=(const Fixed &obj);
        friend std::ostream   &operator<<(std::ostream &os, const Fixed &obj)
        {
            os << obj.toFloat();
            return os;
        }
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

};


#endif
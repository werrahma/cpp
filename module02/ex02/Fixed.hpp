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
        bool    operator>(const Fixed &obj) const;
        bool    operator<(const Fixed &obj) const;
        bool    operator>=(const Fixed &obj) const;
        bool    operator<=(const Fixed &obj) const;
        bool    operator==(const Fixed &obj) const;
        bool    operator!=(const Fixed &obj) const;
        const Fixed operator+(const Fixed &obj);
        const Fixed operator-(const Fixed &obj);
        const Fixed operator*(const Fixed &obj);
        const Fixed operator/(const Fixed &obj);
        Fixed    &operator++();
        Fixed    operator++(int);
        Fixed    &operator--();
        Fixed    operator--(int);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        static Fixed  &min(Fixed &a, Fixed &b);
        static const Fixed  &min(const Fixed &a, const Fixed &b);
        static Fixed  &max(Fixed &a, Fixed &b);
        static const Fixed  &max(const Fixed &a, const Fixed &b);

};
std::ostream   &operator<<(std::ostream &os, const Fixed obj);

#endif
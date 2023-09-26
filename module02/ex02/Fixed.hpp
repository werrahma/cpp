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
        bool   const operator>(const Fixed &obj);
        bool   const operator<(const Fixed &obj);
        bool   const operator>=(const Fixed &obj);
        bool   const operator<=(const Fixed &obj);
        bool   const operator==(const Fixed &obj);
        bool   const operator!=(const Fixed &obj);
        const Fixed operator+(const Fixed &obj);
        const Fixed operator-(const Fixed &obj);
        const Fixed operator*(const Fixed &obj);
        const Fixed operator/(const Fixed &obj);
        Fixed    &operator++();
        Fixed    &operator++(int);
        Fixed    &operator--();
        Fixed    &operator--(int);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        // void    fun_overloading();
        static int  &min(Fixed &a, Fixed &b);
        static const int  &min(const Fixed &a, const Fixed &b);
        static int  &max(Fixed &a, Fixed &b);
        static const int  &max(const Fixed &a, const Fixed &b);

};
std::ostream   &operator<<(std::ostream &os, const Fixed obj);

#endif
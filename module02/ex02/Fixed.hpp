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
        std::ostream   const &operator<<(std::ostream &os)
        {
            os << toFloat();
            return os;
        }
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        // void    fun_overloading();
        static int  &min(int &fixed1, int &fixed2);
        static const int  &Fixed::min(const int &fixed1,const int &fixed2);
        static int  &Fixed::max(int &fixed1, int &fixed2);
        static const int  &Fixed::max(const int &fixed1,const int &fixed2);

};


#endif
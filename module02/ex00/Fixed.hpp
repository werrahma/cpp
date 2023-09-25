#ifndef Fixed_HPP
#define Fixed_HPP
#include <iostream>

class Fixed
{
    int Fixed_point;
    static const int fractional = 8;
    public:
        Fixed();
        Fixed(Fixed &obj);
        Fixed   &operator=(Fixed &obj);
        ~Fixed();
        int getRawBits(void);
        void setRawBits( int const raw );

};


#endif
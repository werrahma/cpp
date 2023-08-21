#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class fixed
{
    int fixed_point;
    const int fractional = 8;
    public:
        fixed();
        fixed(fixed &obj);
        fixed   &operator=(fixed &obj)
        {
            std::cout << "Copy assignment operator called" << std::endl;
            fixed_point = obj.fixed_point;
            return obj;
        }
        ~fixed();
        int getRawBits(void);
        void setRawBits( int const raw );

};


#endif
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>

enum TYPES
{
    FLOAT,
    INTEGER,
    UNKNOWN,
    CHAR
};

class   ScalarConverter
{
    public:
            
            void    convert(std::string &string);
            TYPES   detectType(std::string string);
};

#endif
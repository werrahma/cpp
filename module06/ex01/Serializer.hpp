#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <stdint.h>

struct  Data
{
    std::string string;
};


class   Serializer
{
    public:
            uintptr_t serialize(Data* ptr);
            Data* deserialize(uintptr_t raw);
};

#endif
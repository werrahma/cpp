#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    // Data *prt = new Data; 
    // prt = reinterpret_cast<Data*>(raw);
    return  reinterpret_cast<Data*>(raw);
}
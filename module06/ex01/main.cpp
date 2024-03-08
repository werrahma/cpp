#include "Serializer.hpp"

int main()
{
    Data *ptr = new Data;
    ptr->string = "walid";
    std::cout<< "original Data value  "<< ptr->string << std::endl;
    uintptr_t raw = Serializer::serialize(ptr);
    ptr = Serializer::deserialize(raw);
    std::cout << "Retrieved Data value:  "<< ptr->string << std::endl;
    delete ptr;
}
#include "Serializer.hpp"

int main()
{
    Serializer obj;
    Data *ptr = new Data;
    ptr->string = "walid";
    std::cout<< "original Data value  "<< ptr->string << std::endl;
    uintptr_t raw = obj.serialize(ptr);
    ptr = obj.deserialize(raw);
    std::cout << "Retrieved Data value:  "<< ptr->string << std::endl;
    delete ptr;
}
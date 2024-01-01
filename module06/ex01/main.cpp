#include "Serializer.hpp"

int main()
{
    Serializer obj;
    Data *ptr;
    std::cout<< "original pointer  "<< &ptr << std::endl;
    uintptr_t raw = obj.serialize(ptr);
    ptr = obj.deserialize(raw);
    ptr = new Data;
    ptr->string = "walid";
    std::cout << ptr->string << std::endl;
    std::cout << "new pointer  "<< &ptr << std::endl;
}
#include "children.hpp"

int main()
{
    Generator obj;
    Base *base;
    base = obj.generate();
    obj.identify(*base);
    delete base;
    std::cout << "-----------------" << std::endl;
    base = obj.generate();
    obj.identify(*base);
    delete base;
    std::cout << "-----------------" << std::endl;
    base = obj.generate();
    obj.identify(*base);
    delete base;
    return 0;
}
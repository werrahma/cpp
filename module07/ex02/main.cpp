#include "Array.hpp"

int main()
{
    try
    {
        Array<int> obj(6);
        std::cout << obj[1] << std::endl;
        std::cout << obj.size() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
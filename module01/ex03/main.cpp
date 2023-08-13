#include "Weapon.hpp"

int main()
{
    Weapor obj;
    obj.setType("walid");
    const std::string& str = obj.getType();
    std::cout << str << std::endl;
}
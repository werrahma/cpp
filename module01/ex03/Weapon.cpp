#include "Weapon.hpp"

Weapon::Weapon()
{
    //default
}
Weapon::Weapon(std::string name)
{
    this->type = name;
}
const std::string&  Weapon::getType()
{
    return (this->type);
}
void    Weapon::setType(std::string type)
{
    this->type = type;
}
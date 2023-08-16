#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <string>


int main()
{
    // Weapon obj;
    // obj.setType("walid");
    // const std::string& str = obj.getType();
    // std::cout << str << std::endl;
    // Weapon club  = Weapon ("crude spiked club");
    // HumanA bob("Bob", club);
    // bob.attack();
    /// exmaple 2 humanb..
    std::cout << std::endl << "*****************************" << std::endl;
    Weapon club = Weapon ("crude spiked club");
    HumanB jim ("jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
}

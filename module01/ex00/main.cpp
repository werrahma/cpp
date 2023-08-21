#include "Zombie.hpp"


// Zombie* newZombie(std::string name)
// {
//     Zombie *obj = new Zombie;
//     obj->setter_name(name);
//     return (obj);
// }


// int main ()
// {
//     Zombie *obj;
//     newZombie("walid");
//     std::cout << obj.announce();
//     // obj.setter_name("walid");
//     // obj.announce();
//     return (0);
// }


// void randomChump( std::string name )
// {
//     Zombie obj(name);
//     obj.announce();
// }

// Zombie* newZombie( std::string name )
// {
//     Zombie *obj = new Zombie(name);
//     return (obj);
// }

int main()
{
    Zombie *obj;
    // Zombie obj("wafdsg");
    obj = newZombie("Walid");
    obj->announce();
    // randomChump("Walid");
        // obj.announce();
    delete obj;
}

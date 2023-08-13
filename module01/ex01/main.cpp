#include "Zombie.hpp"

int main()
{
    Zombie *obj;
    obj = zombieHorde(5 , "walid");
    for (int i = 0; i < 5;i++)
    {
        obj[i].announce();

    }
    delete [] obj;
}
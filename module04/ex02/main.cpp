#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;
// ...
// return 0;
// }

int main()
{
    Animal *arr[4];
    arr[0] = new Cat;
    arr[1] = new Cat;
    arr[2] = new Dog;
    arr[3] = new Dog;
    for (int i = 0; i < 4; i++)
        delete arr[i];
}
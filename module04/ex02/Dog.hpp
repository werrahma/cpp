#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    Brain *brain;
    public:
            Dog();
            Dog(const Dog &Dog);
            Dog &operator=(const Dog &Dog);
            ~Dog();
            void    makeSound() const;
            void    set(std::string name, int i);
            std::string    get(int i) const;
};

#endif
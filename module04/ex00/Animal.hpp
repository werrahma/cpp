#ifndef Animal_HPP
#define Animal_HPP
#include <iostream>

class Animal
{
    protected:
            std::string type;
    public:
            Animal();
            Animal(const Animal &Animal);
            Animal &operator=(const Animal &Animal);
            virtual ~Animal();
             std::string getType() const;
             virtual void       makeSound() const;
};

#endif
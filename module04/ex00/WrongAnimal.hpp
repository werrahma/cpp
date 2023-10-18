#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
    protected:
            std::string type;
    public:
            WrongAnimal();
            WrongAnimal(const WrongAnimal &WrongAnimal);
            WrongAnimal &operator=(const WrongAnimal &WrongAnimal);
            ~WrongAnimal();
            std::string getType() const;
            void       makeSound() const;
};


#endif
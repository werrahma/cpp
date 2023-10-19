#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    public:
            Cat();
            Cat(const Cat &Cat);
            Cat &operator=(const Cat &Cat);
            virtual ~Cat();
            void    makeSound() const;
};

#endif
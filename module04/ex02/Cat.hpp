#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    Brain *brain;
    public:
            Cat();
            Cat(const Cat &Cat);
            Cat &operator=(const Cat &Cat);
            virtual ~Cat();
            void    makeSound() const;
            void    set(std::string name, int i);
            std::string    get(int i) const;
};

#endif
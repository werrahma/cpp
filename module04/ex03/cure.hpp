#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &cure);
        Cure    &operator=(const Cure &cure);
        void    use(ICharacter &target);
        ~Cure();
        Cure* clone() const;
};

#endif
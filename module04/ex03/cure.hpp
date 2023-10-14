#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class cure : public AMateria
{
    public:
        cure();
        cure(const cure &cure);
        cure    &operator=(const cure &cure);
        void    use(ICharacter &target);
        ~cure();
        cure* clone() const;
};

#endif
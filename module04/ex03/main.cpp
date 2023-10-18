#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ice.hpp"
#include "cure.hpp"


// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new ice());
//     src->learnMateria(new cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     system("leaks AMateria");
//     return 0;
// }


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new ice());
    src->learnMateria(new cure());
    src->learnMateria(new ice());
    src->learnMateria(new cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->equip(tmp);
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    system("leaks AMateria");
    return 0;
}

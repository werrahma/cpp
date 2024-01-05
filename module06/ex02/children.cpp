#include "children.hpp"

static int nb;

Base    *Generator::generate(void)
{
    if (nb <= 3)
        nb++;
    else
        nb = 1;
    switch (nb)
    {
        case 1:
            return new B;
        case 2:
            return new A;
        case 3:
            return new C;
    }
    return NULL;
}

void Generator::identify(Base* p)
{
    if (!p)
        std::cout << "empty pointer" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "the actual type of the object pointed to by p is : C" << std::endl;
    else if (dynamic_cast<A*>(p))
        std::cout << "the actual type of the object pointed to by p is : A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "the actual type of the object pointed to by p is : B" << std::endl;
}

void Generator::identify(Base& p)
{
    try {
        p = dynamic_cast<C&>(p);
        std::cout << "the actual type of the object pointed to by p is : C" << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << " to class C" << std::endl;
    }
    try{
        p = dynamic_cast<A&>(p);
        std::cout << "the actual type of the object pointed to by p is : A" << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << " to class A"<< std::endl;
    }
    try {
        p = dynamic_cast<B&>(p);
        std::cout << "the actual type of the object pointed to by p is : B" << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what()<< " to class B" << std::endl;
    }
}
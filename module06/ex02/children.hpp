#ifndef CHILDREN_HPP
#define CHILDREN_HPP
#include "Base.hpp"

class Base;
class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};

class Generator
{
    public:
            Base * generate(void);
            void identify(Base* p);
            void identify(Base& p);
};

#endif
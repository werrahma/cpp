#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <algorithm>
#include <stack>
#include <list>

template<
    typename T,
    typename Container = std::deque<T>
> class MutantStack : public std::stack<T, Container>
{
    public:
    MutantStack() : std::stack<T, Container>() {}
    MutantStack(const MutantStack<T, Container> &obj) : std::stack<T, Container>(obj){}
    MutantStack    &operator=(const MutantStack<T, Container> &obj)
    {
        while (!this->empty())
            this->pop();
        std::stack<T, Container>::operator=(obj);
        return *this;
    }
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin(){ return this->c.begin(); }
    iterator end(){ return this->c.end(); }

    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end();}
};

#endif
#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <deque>
#include <list>

template <typename T> 
void  easyfind(const T &container, int nb)
{
    typename T::const_iterator it = container.begin();
    typename T::const_iterator end = container.end();
    while (it != end)
    {
        if (*it == nb)
        {
            std::cout << "number found success" << std::endl;
            return;
        }
        it++;
    }
    std::cout << "number found failed" << std::endl;
}


#endif
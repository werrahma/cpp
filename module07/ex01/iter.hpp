#ifndef ITER_HPP
#define ITER_HPP
#include "iostream"

template <typename A> void nothing(A& a)
{
    std::cout << a << std::endl;
    return;
}

template <typename T, typename A> void   iter(T *arr, int length, void (*funptr)(A))
{
    for (int i = 0; i < length; i++)
    {
        funptr(arr[i]);
    }
}

#endif
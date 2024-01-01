#ifndef ITER_HPP
#define ITER_HPP
#include "iostream"

template <typename A> A nothing(void)
{
    return ('A');
}

template <typename T, typename A> void   iter(T *arr, int length, A (*funptr)(void))
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = funptr();
    }
}

#endif
#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>


class Array
{
    T *arr;
    unsigned int Size;
    public:
        Array()
        {
            arr = NULL;
            Size = 0;
        }
        Array(unsigned int n)
        {
            arr = new T[n];
            Size = n;
        }

        Array &operator=(const Array &other)
        {
            if (this->arr)
                delete [] arr;
            arr = new T[other.Size];
            this->Size = other.Size;
            for(unsigned int i = 0; i < other.Size; i++)
                this->arr[i] = other.arr[i];
            return *this;
        }
        Array (const Array &other) : arr(new T[other.Size]), Size(other.Size)
        {
            *this = other;
        }
        ~Array()
        {
            delete [] arr;
        }
        T& operator[](unsigned int index)
        {
            if (index < this->Size)
                return arr[index];
            else
                throw std::out_of_range("Index out of bounds");
        }
        unsigned int    size() const
        {
            return this->Size;
        }
};

#endif
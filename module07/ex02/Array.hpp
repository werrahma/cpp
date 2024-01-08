#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <class T>

class Array
{
    T *arr;
    unsigned int Size;
    public:
        Array() : arr(NULL), Size(0)
        {}
        Array(unsigned int n)
        {
            arr = new T[n];
            Size = n;
        }
        Array(const Array &other)
        {
            if (other.Size)
            {
                arr = new T(Size);
                for (unsigned int i = 0; i < Size; i++)
                    arr[i] = other.arr[i];
            }
            this->arr = NULL; this->Size = 0;
        }
        Array& operator=(const Array &other)
        {
            if (this->Size)
                delete [] arr;
            if (other.Size)
                arr(other);
            else
            {
                this->arr = NULL; this->Size = 0;}
            return *this;
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
#include "iter.hpp"

int main()
{
    float *arr = new float(4);
    float (*ptr)(void) = &::nothing;
    ::iter(arr, 4, ptr);
    for (int i = 0; i < 4; i++)
        std::cout << arr[i] << std::endl;
    delete []arr;
}
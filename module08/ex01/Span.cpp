#include "Span.hpp"

void Span::addNumber(unsigned int nb)
{
    try{
        if (arr.size() >= this->N)
            throw std::invalid_argument("class is full");
        arr.push_back(nb);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

// int    Span::shortestSpan()
// {
//     try
//     {
//         std::vector<unsigned int>::iterator it;
//         it = std::min_element(arr.begin(), arr.end());
//         if (it != arr.end())
//             return *it;
//         else
//             throw std::invalid_argument("empty");
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     return -1;
// }

int    Span::longestSpan()
{
    try
    {
        std::vector<unsigned int>::iterator max = std::max_element(arr.begin(), arr.end());
        std::vector<unsigned int>::iterator min = std::min_element(arr.begin(), arr.end());
        if (min != arr.end() && max != arr.end())
            return *max - *min;
        else
            throw std::invalid_argument("empty");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return -1;
}

int    Span::shortestSpan()
{
    try
    {
        unsigned int j = 1;
        unsigned int tmp = 0;
        if (arr.size() <= 1)
            throw std::invalid_argument("empty");
        unsigned int max = *std::max_element(arr.begin(), arr.end());
        std::sort(arr.begin(), arr.end());
        for (unsigned int i = arr[0]; i < max; i++)
        {
            if (j == 1 || (arr[j] - arr[j -1] <= tmp))
            {
                tmp = arr[j] - arr[j -1];
                j++;
            }
        }
        return tmp;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return -1;
}
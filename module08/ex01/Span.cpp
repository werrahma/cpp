#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : N(N){}

Span::Span(const Span &obj) {*this = obj;}

Span  &Span::operator=(const Span &obj)
{
    if (!obj.arr.empty())
        arr.clear();
    this->N = obj.N;
    for (unsigned int i = 0; i < this->N; i++)
        this->arr[i] = obj.arr[i];
    return *this;
}

void Span::addNumber(unsigned int nb)
{
    try{
        if (arr.size() >= this->N)
            throw std::invalid_argument("class full");
        arr.push_back(nb);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int    Span::longestSpan()
{
    try
    {
        std::vector<int>::iterator max = std::max_element(arr.begin(), arr.end());
        std::vector<int>::iterator min = std::min_element(arr.begin(), arr.end());
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
        int tmp = 0;
        if (arr.size() <= 1)
            throw std::invalid_argument("empty");
        int max = *std::max_element(arr.begin(), arr.end());
        std::sort(arr.begin(), arr.end());
        for (int i = arr[0]; i < max; i++)
        {
            if (j == 1 || (arr[j] - arr[j -1] <= tmp))
            {
                tmp = arr[j] - arr[j -1];
                if (arr[j] == max)
                    break;
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

void    Span::addTomanyNumber(unsigned int start, unsigned int end)
{
    try{
        if (end - start >= this->N)
            throw std::invalid_argument("need more space");
        for (;start <= end; start++)
            this->arr.push_back(start);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
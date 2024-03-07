#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
    unsigned int N;
    std::vector<unsigned int> arr;
    public:
        Span(unsigned int N) : N(N){}
        void    addNumber(unsigned int nb);
        int    shortestSpan();
        int    longestSpan();
};


#endif
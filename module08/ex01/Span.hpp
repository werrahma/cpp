#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
    unsigned int N;
    std::vector<int> arr;
    public:
        Span();
        Span(const Span &obj);
        Span    &operator=(const Span &obj);
        Span(unsigned int N);
        void    addNumber(unsigned int nb);
        int    shortestSpan();
        int    longestSpan();
        void addTomanyNumber(unsigned int start, unsigned int end);
};


#endif
#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << "------------------------------------" << std::endl;
    Span obj(15000);
    for (int i = 0; i <= 10000; i++)
    {
        obj.addNumber(i);
    }
    std::cout << obj.shortestSpan() << std::endl;
    std::cout << obj.longestSpan() << std::endl;
    std::cout << "------------------------------------" << std::endl;
    Span sp2(4);
    sp2.addNumber(15);
    sp2.addNumber(20);
    sp2.addNumber(21);
    sp2.addNumber(3);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    std::cout << "------------------------------------" << std::endl;
    Span sp3(140);
    sp3.addTomanyNumber(22, 50);
    std::cout << sp3.shortestSpan() << std::endl;
    std::cout << sp3.longestSpan() << std::endl;
}

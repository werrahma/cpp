#include "PmergeMe.hpp"
#include <algorithm>

int main(int ac, char **av)
{
    try
    {
        if (ac <= 2)
            throw (std::invalid_argument("Error"));
        clock_t start, end;
        double dequeTime;
        double vectorTime;

        //// std::vector
        PmergeMe<std::vector<size_t> > obj;
        std::vector<size_t> vec = obj.removespaces(av);
        std::cout << "Before:  "; obj.PrintArr(vec);
        start = clock();
        obj.sort(vec, 0, vec.size() - 1);
        end = clock();
        vectorTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
        std::cout << "After:   "; obj.PrintArr(vec);
        std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << vectorTime << " us" << std::endl;
        //// std::deque
        PmergeMe<std::deque<size_t> > obj2;
        std::deque<size_t> deq = obj2.removespaces(av);
        start = clock();
        obj.sort(vec, 0, vec.size() - 1);
        end = clock();
        dequeTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
        std::cout << "Time to process a range of " << vec.size() << " elements with std::deque : " << std::fixed << std::setprecision(5) << dequeTime << " us" << std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << "\n";
    }
}
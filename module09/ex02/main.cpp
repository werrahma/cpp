#include "PmergeMe.hpp"
#include <algorithm>

int main(int ac, char **av)
{
    try
    {
        if (ac <= 2)
            throw (std::invalid_argument("Error"));
        struct timeval start, end;
        double dequeTime;
        double vectorTime;

        //// std::vector
        PmergeMe<std::vector<size_t> > obj;
        std::vector<size_t> vec = obj.removespaces(av);
        std::cout << "Before:  "; obj.PrintArr(vec);
        std::cout << "--- " << vec.size() << std::endl;
        gettimeofday(&start, NULL);
        obj.sort(vec, 0, vec.size() - 1);
        // end = clock();
        gettimeofday(&end, NULL);
        vectorTime = (end.tv_sec - start.tv_sec) * 1000000.0;
        vectorTime += (end.tv_usec - start.tv_usec);
        std::cout << "After:   "; obj.PrintArr(vec);
        std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << vectorTime << " us" << std::endl;
        //// std::deque
        PmergeMe<std::deque<int> > obj2;
        std::deque<int> deq = obj2.removespaces(av);
        gettimeofday(&start, NULL);
        obj.sort(vec, 0, vec.size() - 1);
        gettimeofday(&end, NULL);
        dequeTime = (end.tv_sec - start.tv_sec) * 1000000.0; // Convert seconds to microseconds
        dequeTime += (end.tv_usec - start.tv_usec);
        std::cout << "Time to process a range of " << vec.size() << " elements with std::deque : " << dequeTime << " us" << std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << "\n";
    }
}
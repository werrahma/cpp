#include "PmergeMe.hpp"
#include <algorithm>

int main()
{
    try
    {
        // std::vector<int> vec;
        // vec.push_back(15);
        // vec.push_back(2);
        // vec.push_back(5);
        // vec.push_back(16);
        // std::sort(vec.begin(), vec.end());
        // for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        // {
        //     std::cout << *it << std::endl;
        // }
        PmergeMe obj;
        std::vector<int> A;
        A.push_back(15);
        A.push_back(2);
        A.push_back(5);
        A.push_back(16);
        A.push_back(20);
        // obj.sort(A, 0, A.size() - 1);
        obj.Psort(A);
        std::cout << ")))))))" << std::endl;
        for (size_t i = 0; i < A.size(); i++) {
            std::cout << A[i] << " ";
        }
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {

    }
}
#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <algorithm>

class PmergeMe
{
    std::vector<int> LA;
    std::vector<int> RA;
    // std::vector<std::pair<int, int> > pairs;
    std::vector<int> vec;
    int     tmp;
    public:
        // void    mergeInsetionSort();
        void merge(std::vector<int>& A, int p, int q, int r);
        void sort(std::vector<int>& A, int p, int r);
        void insertionSort(std::vector<int>& A, int p, int q);
        void    CreatePairs(std::vector<int> arr, std::vector<std::pair<int, int> > &pairs);
        void    Psort(std::vector<int> &arr);
};
// void    merge(std::vector<int> &arr, int low, int high);



#endif
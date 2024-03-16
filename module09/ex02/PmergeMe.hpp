#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <deque>
#include <ctime>
#include <sys/time.h>

const size_t K = 4;

template<typename T>

class PmergeMe
{
    size_t     tmp;
    public:
        void merge(T& arr, size_t low, size_t mid, size_t high)
        {
            size_t n1 = mid - low + 1;
            size_t n2 = high - mid;

            // std::vector<size_t> left(n1), right(n2);  // Use vectors instead of copying subarrays
            T left(n1);
            T right(n2);
            // Copy data to temporary arrays left[] and right[]
            for (size_t i = 0; i < n1; i++)
                left[i] = arr[low + i];
            for (size_t j = 0; j < n2; j++)
                right[j] = arr[mid + 1 + j];

            // Merge the temporary arrays back size_to arr[low..high]
            size_t i = 0, j = 0, k = low;
            while (i < n1 && j < n2) {
                if (left[i] <= right[j]) {
                    arr[k] = left[i];
                    i++;
                }
                else {
                    arr[k] = right[j];
                    j++;
                }
                k++;
            }
            // Copy the remaining elements of left[], if any
            while (i < n1) {
                arr[k] = left[i];
                i++;
                k++;
            }

            // Copy the remaining elements of right[], if any
            while (j < n2) {
                arr[k] = right[j];
                j++;
                k++;
            }
        }
        void sort(T& arr, size_t low, size_t high)
        {
            if (high - low > K)
            {
                size_t mid = (low + high) / 2;
                sort(arr, low, mid);
                sort(arr, mid + 1, high);
                merge(arr, low, mid, high);
            }
            else
                insertionSort(arr,low, high);  // Use insertion sort for small subarrays
        }
        void insertionSort(T& arr, size_t low, size_t high)
        {
            for (size_t i = low; i < high; ++i) {
                size_t tempVal = arr[i + 1];
                size_t j = i + 1;
                while (j > low && arr[j - 1] > tempVal) {
                    arr[j] = arr[j - 1];
                    j--;
                }
                arr[j] = tempVal;
            }
        }
    T    removespaces(char **av)
    {
        T tmp;
        for (size_t i = 1; av[i]; i++)
        {
            for (size_t j = 0; j < strlen(av[i]); j++)
            {
                if (!isdigit(av[i][j]) || av[i][j] == '-')
                    throw (std::invalid_argument("Error"));
            }
            tmp.push_back(atoi(av[i]));
        }
        return tmp;
    }
    void    PrintArr(T arr)
    {
        for (size_t i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};


#endif
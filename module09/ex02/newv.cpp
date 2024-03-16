#include "PmergeMe.hpp"

const int K = 4;

void insertionSort(std::vector<int>& A, int low, int high)
{
    std::cout <<"size  : " << high - low << std::endl;
    for (int i = low; i < high; ++i) {
        int tempVal = A[i + 1];
        std::cout << "tmpval: " << tempVal << std::endl;
        int j = i + 1;
        while (j > low && A[j - 1] > tempVal) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = tempVal;
    }
}
void merge(std::vector<int>& arr, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    std::vector<int> left(n1), right(n2);  // Use vectors instead of copying subarrays

    // Copy data to temporary arrays left[] and right[]
    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[low..high]
    int i = 0, j = 0, k = low;
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


void sort(std::vector<int>& A, int low, int high)
{
    if (high - low > K)
    {
        int mid = (low + high) / 2;
        sort(A, low, mid);
        sort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
    else {
        for (size_t i = low; i < high; i++)
        {
            std::cout << A[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "----------" << std::endl;
        insertionSort(A,low, high);  // Use insertion sort for small subarrays
    }
}

int main()
{
    std::vector<int> A;
    A.push_back(15);
    A.push_back(2);
    A.push_back(5);
    A.push_back(16);
    // A.push_back(20);
    // obj.sort(A, 0, A.size() - 1);
    sort(A, 0, A.size() -1);
    // std::cout << ")))))))" << std::endl;
    // for (size_t i = 0; i < A.size(); i++) {
    //     std::cout << A[i] << " ";
    // }
    // std::cout << std::endl;
}